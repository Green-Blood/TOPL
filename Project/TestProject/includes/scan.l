
%{
#include <cstdlib>
#include <iostream>
#include "stdbool.h"
#include "includes/ast.h"
#include "parse.tab.h"

int yycolumn = 1;

#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno; \
    yylloc.first_column = yycolumn; yylloc.last_column = yycolumn+yyleng-1; \
    yycolumn += yyleng;


static const int NO_TOKEN = -1;       /* Used to indicate that no token is queued */
static const int FIRST_COLUMN = 1;    /* Start a line in column 1 (not 0) */

#define YY_DECL int orig_yylex(void)

#define MAXINDENT 100   /* Max indentation level */
struct tok_state {
    int indent;                 /* Current indentation index */
    int indstack[MAXINDENT];    /* Stack of indents */
    int atbol;                  /* Nonzero if at begin of new line */
    int pendin;                 /* Pending indents (if > 0) or dedents (if < 0) */
    int level;                  /* () [] {} Parentheses nesting level */
    /* These next state variables are not in the CPython tokeniser state */
    bool cont_line;             /* are we in a continuation line? */
    bool seen_endmarker;        /* Have we sent the ENDMARKER token yet? */
    int pending_token;          /* One token can be queued while processing indent/dedent */
};

static struct tok_state *tok = NULL;

static void display_error(const char *msg);
static void left_enclose(void);
static void right_enclose(void);
static void mark_new_line(void);
static bool explicit_newline(void);
static void handle_eof(void);

%}

%option yylineno
%option debug

pointfloat   {integer}?{fraction}
fraction       \.{digit}*
integer     {nzointeger}|0
nzointeger     {nonzero}{digit}*
digit          [0-9]
nonzero        [1-9]
string       {string1tck}|{string2tck}
string2tck   \"{item2tck}*\"
string1tck   \'{item1tck}*\'
item2tck     {char2tck}|{escapeseq}
item1tck     {char1tck}|{escapeseq}
char2tck     [^\n\r\f\"\\]
char1tck     [^\n\r\f\'\\]
escapeseq         \\.|\\{newline}
name      [_a-zA-Z][_a-zA-Z0-9]*
ws        [ \t\f]
spaces    {ws}+
newline   [\r]?[\n]|[\r]
comment   #.*

%%

{comment}                   { ; }//Just ignore
{spaces}                    { ; }//Just ignore
{ws}*{comment}?{newline}    { if (explicit_newline()) return NEWLINE; }

"\\"{newline}               {  tok->cont_line = true;  mark_new_line(); /* Explicit line joining: throw it away */ ;  }

{string}   { yylval.name = strdup(yytext); return STRING; }


"("        { left_enclose();  return LPAR; }
")"        { right_enclose(); return RPAR; }
"["        { left_enclose();  return LSQB;  }
"]"        { right_enclose(); return RSQB; }
"{"        { left_enclose();  return LBRACE; }
"}"        { right_enclose(); return RBRACE; }

":"        { return COLON; }
","        { return COMMA; }
";"        { return SEMI; }

"+"        { return PLUS; }
"-"        { return MINUS; }
"*"        { return STAR; }
"/"        { return SLASH; }

"<"        { return LESS; }
">"        { return GREATER; }
"="        { return EQUAL; }

"."        { return DOT; }
"%"        { return PERCENT; }
"`"        { return BACKQUOTE; }

"=="       { return EQEQUAL; }
"!="       { return NOTEQUAL; }
"<="       { return LESSEQUAL; }
">="       { return GREATEREQUAL; }
"<>"       { return GRLT; }

"==="      { return EQEQEQUAL; }

"~"        { return TILDE; }
"^"        { return CIRCUMFLEX; }
"<<"       { return LEFTSHIFT; }
">>"       { return RIGHTSHIFT; }
"**"       { return DOUBLESTAR; }

"+="       { return PLUSEQUAL; }
"-="       { return MINEQUAL; }
"*="       { return STAREQUAL; }
"/="       { return SLASHEQUAL; }
"%="       { return PERCENTEQUAL; }
"&="       { return AMPEREQUAL; }
"|"        { return BAR; }
"|="       { return VBAREQUAL; }
"^="       { return CIRCUMFLEXEQUAL; }
"<<="      { return LEFTSHIFTEQUAL; }
">>="      { return RIGHTSHIFTEQUAL; }
"**="      { return DOUBLESTAREQUAL; }
"//"       { return DOUBLESLASH; }
"//="      { return DOUBLESLASHEQUAL; }

"@"        { return AT; }

"and"      { return AND; }
"&"        { return AMPERSAND; }
"not"      { return NOT; }
"or"       { return OR; }
"as"       { return AS; }
"assert"   { return ASSERT; }
"break"    { return BREAK; }
"class"    { return CLASS; }
"comp"     { return COMPONENT; }
"continue" { return CONTINUE; }
"def"      { return DEF; }
"del"      { return DEL; }
"elif"     { return ELIF; }
"else"     { return ELSE; }
"except"   { return EXCEPT; }
"exec"     { return EXEC; }
"finally"  { return FINALLY; }
"for"      { return FOR; }
"from"     { return FROM; }
"global"   { return GLOBAL; }
"if"       { return IF; }
"import"   { return IMPORT; }
"in"       { return IN; }
"is"       { return IS; }
"lambda"   { return LAMBDA; }
"pass"     { return PASS; }
"print"    { return PRINT; }
"raise"    { return RAISE; }
"return"   { return RETURN; }
"try"      { return TRY; }
"while"    { return WHILE; }
"with"     { return WITH; }
"yield"    { return YIELD; }

{integer} {
             yylval.intNumber = atoi(yytext);
             return INT;
          }
{pointfloat} {
             yylval.fltNumber = atof(yytext);
             return FLOAT;
           }
{name}     {
             yylval.name = strdup(yytext);
             return NAME;
           }

<<EOF>>    { handle_eof(); return ENDMARKER; }

<*>.       { display_error("unknown character"); }

%%

void
init_scanner(FILE *input_file){
  yyin = input_file;
  if (tok != NULL) {
    free(tok);
  }
  /* Calloc a new state (so everything is initialised to 0/false) */
  tok = (struct tok_state *)calloc(1, sizeof(struct tok_state));
  if (tok == NULL) {
    display_error("memory allocation failure in init_scanner");
  }
  tok->pending_token = NO_TOKEN;
  tok->indstack[0] = FIRST_COLUMN;  /* Start column (not 0)  */
}

void
finish_scanner(){
    if (tok != NULL) {
        free(tok);
    }
}

static void display_error(const char *msg){
    fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                     yylloc.last_line,  yylloc.last_column);
    fprintf(stderr, " lexical error with [%s]: %s\n", yytext, msg);
    exit(EXIT_FAILURE);
}


static void left_enclose(void){
    ++ tok->level;
}

static void right_enclose(void){
    -- tok->level;
}

static void mark_new_line(void){
    yycolumn = FIRST_COLUMN;
}

static bool explicit_newline(void){
    bool is_explicit_newline = (tok->level == 0) && (tok->cont_line || (yylloc.first_column > FIRST_COLUMN));
    tok->cont_line = false;
    mark_new_line();
    return is_explicit_newline;
}

static void handle_eof(void){
    mark_new_line();     /* Sets current indentation to left margin */
    yylloc.last_column = yylloc.first_column = FIRST_COLUMN;
    tok->atbol = true;   /* Triggers flushing of the indentation stack */
}


/*** Indentation stack handling  ***/

/* Pop the indentation stack until you get back to col, queue DEDENTs */
static void pop_indents(int col){
    if ( tok->indent < 0 ) {
        display_error("(internal) indentation stack underflow");
    }
    else {
        int curr_indent = tok->indstack[tok->indent];
        if (col < curr_indent) {
            tok->pendin --;
            tok->indent --;   /* The actual 'pop' */
            pop_indents(col);
        }
        else if (col > curr_indent) {
            display_error("dedent is less than corresponding indent");
        }
        /* else col == curr_indent, and we're done */
    }
}

/* Push col onto the indentation stack, queue an INDENT */
static void push_indent(int col){
    tok->pendin ++;
    tok->indstack[++tok->indent] = col;
}

/* Wrapper that calls push or pop as appropriate */
static void note_new_indent(int col){
    int curr_indent = tok->indstack[tok->indent];
    if (col > curr_indent)
        push_indent(col);
    else if (col < curr_indent)
      pop_indents(col);
    /* else col == curr_indent, so do nothing */
}



int yylex(void){
    int token = NO_TOKEN;
    if (tok->seen_endmarker)
        yyterminate();
    /* First check for any pending indents or dedents */
    if (tok->pendin < 0) {
        tok->pendin ++;
        token = DEDENT;
    }
    else if (tok->pendin > 0) {
        tok->pendin --;
        token = INDENT;
    }
    /* Next check for a pending token */
    else if (tok->pending_token != NO_TOKEN) {
        token = tok->pending_token;
        tok->pending_token = NO_TOKEN;
    }
    /* Finally, call the actual scanner */
    else {
        token = orig_yylex();
        if (token == NEWLINE) {
            tok->atbol = true;
        }
        else if (tok->atbol) {
            tok->atbol = false;
            note_new_indent(yylloc.first_column);
            tok->pending_token = token;
            token = yylex();
        }
        /* if we get here then nothing is pending, so just return the token */
    }
    if (token == ENDMARKER)
        tok->seen_endmarker = true;  /* Wrap up the next time around */
    return token;
}


/* Debug version: call this to print each token as you get it */
int debug_yylex(void){
    int token = yylex();
    printf ("%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                            yylloc.last_line,  yylloc.last_column);
    switch (token) {
        case ENDMARKER: printf(" ENDMARKER\n"); break;
        case INDENT: printf(" INDENT\n"); break;
        case DEDENT: printf(" DEDENT\n"); break;
        case NEWLINE: printf(" NEWLINE\n"); break;
        default: printf(" %d [%s]\n", token, yytext);
    }
    return token;
}

int yywrap(){
  yylex_destroy();
  return 1;
}
