
%{
  #include "includes/ast.h"
  #include <cmath>
  #include <iostream>
  #include <vector>

  extern int yylex (void);
  extern char *yytext;
  void yyerror (const char *);

  PoolOfNodes& pool = PoolOfNodes::getInstance();
%}

%union {
  Node* node;
  int intNumber;
  long double fltNumber;
  char *name;
  char *str;
  std::vector<Node*>* vec;
}

//Not Implemented
%token AS ASSERT AT BACKQUOTE CLASS CONTINUE DEL DOT
%token EXCEPT EXEC FINALLY FROM IMPORT IN IS LAMBDA
%token LBRACE LSQB PASS RAISE RBRACE RSQB TRY WITH YIELD

//Implemented
%token AMPEREQUAL AMPERSAND AND BAR BREAK CIRCUMFLEX
%token CIRCUMFLEXEQUAL COLON COMMA DEDENT DEF COMPONENT
%token DOUBLESLASHEQUAL DOUBLESTAREQUAL ELIF ELSE ENDMARKER EQEQUAL EQEQEQUAL
%token FOR GLOBAL GREATER GREATEREQUAL GRLT IF INDENT
%token LEFTSHIFTEQUAL LESS LESSEQUAL LPAR MINEQUAL
%token NEWLINE NOT NOTEQUAL OR PERCENTEQUAL PLUSEQUAL
%token PRINT INPUT RETURN RIGHTSHIFTEQUAL RPAR SEMI
%token SLASHEQUAL STAREQUAL TILDE VBAREQUAL WHILE

%token<intNumber> INT
%token<fltNumber> FLOAT
%token<name> NAME
%token<str> STRING

%type<node> atom power term factor
%type<node> expr xor_expr and_expr shift_expr arith_expr
%type<intNumber> pick_unop pick_multop pick_PLUS_MINUS pick_LEFTSHIFT_RIGHTSHIFT augassign comp_op
%type<node> comparison not_test and_test or_test test
%type<node> small_stmt expr_stmt star_EQUAL
%type<node> print_stmt input_stmt
%type<node> opt_test opt_COMMA
%type<node> compound_stmt simple_stmt if_stmt while_stmt star_ELIF funcdef stmt suite
%type<node> star_trailer trailer
%type<node> return_stmt
%type<node> fpdef parameters
%type<vec> plus_stmt star_fpdef_COMMA varargslist
%type<vec> arglist star_argument_COMMA opt_arglist
%right EQUAL
%left LEFTSHIFT RIGHTSHIFT
%left PLUS MINUS
%left STAR SLASH PERCENT DOUBLESLASH
%right DOUBLESTAR

%start start

%locations

%%
start
  : file_input
  ;

file_input // Used in: start
  : star_NEWLINE_stmt ENDMARKER
  ;

pick_NEWLINE_stmt // Used in: star_NEWLINE_stmt
  : NEWLINE
  | stmt
    { $1->eval(); }
    /*{ $1->eval(); TableManager::getInstance().display();}*/
  ;

star_NEWLINE_stmt // Used in: file_input, star_NEWLINE_stmt
  : star_NEWLINE_stmt pick_NEWLINE_stmt
  | %empty
  ;

opt_arglist // Used in: trailer
  : arglist
    { $$ = $1; }
  | %empty
    { $$ = NULL; }
  ;

funcdef // Used in: compound_stmt
  : DEF NAME parameters COLON suite
    {
      $$ = new FuncNode($2, $3, $5);
      pool.add($$);
      delete [] $2;
    }
  | COMPONENT NAME parameters COLON suite
    {
      $$ = new FuncNode($2, $3, $5);
      pool.add($$);
      delete [] $2;
    }
  ;
parameters // Used in: funcdef
  : LPAR varargslist RPAR
    {
      if ($2) {
        $$ = new ParaNode($2);
        delete $2;
        pool.add($$);
      }
    }
  | LPAR RPAR
    { $$ = NULL; }
  ;
varargslist // Used in: parameters
  : star_fpdef_COMMA fpdef opt_COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  ;

star_fpdef_COMMA // Used in: varargslist, star_fpdef_COMMA
  : star_fpdef_COMMA fpdef  COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  | %empty
    { $$ = NULL; }
  ;

opt_COMMA // Used in: varargslist
  : COMMA
    { $$ = NULL; }
  | %empty
    { $$ = NULL; }
  ;
fpdef // Used in: varargslist, star_fpdef_COMMA, fplist, star_fpdef_notest
  : NAME
    {
      $$ = new IdentNode($1);
      delete [] $1;
      pool.add($$);
    }
  | LPAR fplist RPAR
    { $$ = NULL; }
  ;
fplist // Used in: fpdef
  : fpdef star_fpdef_notest COMMA
  | fpdef star_fpdef_notest
  ;
star_fpdef_notest // Used in: fplist, star_fpdef_notest
  : star_fpdef_notest COMMA fpdef
  | %empty
  ;
stmt // Used in: pick_NEWLINE_stmt, plus_stmt
  : simple_stmt
    { $$ = $1; }
  | compound_stmt
    { $$ = $1; }
  ;
simple_stmt // Used in: stmt, suite
  : small_stmt star_SEMI_small_stmt SEMI NEWLINE
  | small_stmt star_SEMI_small_stmt NEWLINE
  ;
star_SEMI_small_stmt // Used in: simple_stmt, star_SEMI_small_stmt
  : star_SEMI_small_stmt SEMI small_stmt
  | %empty
  ;
small_stmt // Used in: simple_stmt, star_SEMI_small_stmt
  : expr_stmt
    { $$ = $1; }
  | print_stmt
    { $$ = $1; }
  | input_stmt
    { $$ = $1; }
  | return_stmt
    { $$ = $1; }
  | global_stmt
    { $$ = NULL; }
  ;
expr_stmt // Used in: small_stmt
  : test augassign test
    {
      Node* temp = NULL;
      switch($2) {
        case PLUSEQUAL:
          temp = new AddBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case MINEQUAL:
          temp = new SubBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case STAREQUAL:
          temp = new MulBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case SLASHEQUAL:
          temp = new DivBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case PERCENTEQUAL:
          temp = new ModBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case LEFTSHIFTEQUAL:
          temp = new LShiftBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case RIGHTSHIFTEQUAL:
          temp = new RShiftBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case DOUBLESTAREQUAL:
          temp = new PowBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case DOUBLESLASHEQUAL:
          temp = new FlrDivBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case AMPEREQUAL:
          temp = new AmpersandBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case VBAREQUAL:
          temp = new BarBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        case CIRCUMFLEXEQUAL:
          temp = new XorBinaryNode($1, $3);
          $$ = new AsgBinaryNode($1, temp);
          pool.add(temp);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  | test EQUAL star_EQUAL
    {
      $$ = new AsgBinaryNode($1, $3);
      pool.add($$);
    }
  | test
    { $$ = $1; }
  ;
star_EQUAL // Used in: expr_stmt, star_EQUAL
  : test EQUAL star_EQUAL
    {
      $$ = new AsgBinaryNode($1, $3);
      pool.add($$);
    }
  | test
    { $$ = $1; }
  ;
augassign // Used in: expr_stmt
  : PLUSEQUAL
    { $$ = PLUSEQUAL; }
  | MINEQUAL
    { $$ = MINEQUAL; }
  | STAREQUAL
    { $$ = STAREQUAL; }
  | SLASHEQUAL
    { $$ = SLASHEQUAL; }
  | PERCENTEQUAL
    { $$ = PERCENTEQUAL; }
  | AMPEREQUAL
    { $$ = AMPEREQUAL; }
  | VBAREQUAL
    { $$ = VBAREQUAL; }
  | CIRCUMFLEXEQUAL
    { $$ = CIRCUMFLEXEQUAL; }
  | LEFTSHIFTEQUAL
    { $$ = LEFTSHIFTEQUAL; }
  | RIGHTSHIFTEQUAL
    { $$ = RIGHTSHIFTEQUAL; }
  | DOUBLESTAREQUAL
    { $$ = DOUBLESTAREQUAL; }
  | DOUBLESLASHEQUAL
    { $$ = DOUBLESLASHEQUAL; }
  ;
print_stmt // Used in: small_stmt
  : PRINT test
    {
      $$ = new PrintNode($2);
      pool.add($$);
    }
  ;

input_stmt // Used in: small_stmt
  : INPUT test
    {
      $$ = new InputNode($2);
      pool.add($$);
    }
  ;

return_stmt // Used in: small_stmt
  : RETURN test
    {
      $$ = new ReturnNode($2);
      pool.add($$);
    }
  | RETURN
    {
      $$ = new ReturnNode(NULL);
      pool.add($$);
    }
  ;

global_stmt // Used in: small_stmt
  : GLOBAL NAME star_COMMA_NAME
  ;
star_COMMA_NAME // Used in: global_stmt, star_COMMA_NAME
  : star_COMMA_NAME COMMA NAME
  | %empty
  ;

compound_stmt // Used in: stmt
  : if_stmt
    { $$ = $1; }
  | while_stmt
    { $$ = $1; }
  | funcdef
    { $$ = $1; }
  ;
if_stmt // Used in: compound_stmt
  : IF test COLON suite star_ELIF ELSE COLON suite
    {
      if ($2) {
        $$ = new IfNode($2, $4, $5, $8);
        pool.add($$);
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
  | IF test COLON suite star_ELIF
    {
      if ($2) {
        $$ = new IfNode($2, $4, $5, NULL);
        pool.add($$);
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
  ;
star_ELIF // Used in: if_stmt, star_ELIF
  : star_ELIF ELIF test COLON suite
    {
      $$ = new ElifNode($3,$5,$1);
      pool.add($$);
    }
  | %empty
    { $$=NULL;}
  ;
while_stmt // Used in: compound_stmt
  : WHILE test COLON suite
  {
    if ($2) {
      $$ = new WhileNode($2, $4);
      pool.add($$);
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
  ;

suite // Used in: funcdef, if_stmt, star_ELIF, while_stmt, for_stmt
  : simple_stmt
    { $$ = $1; }
  | NEWLINE INDENT plus_stmt DEDENT
    {
      $$ = new SuiteNode(*$3);
      delete $3;
      pool.add($$);
    }
  ;
plus_stmt // Used in: suite, plus_stmt
  : plus_stmt stmt
    {
      $$ = $1;
      $$->push_back($2);
    }
  | stmt
    {
      $$ = new std::vector<Node*>();
      $$->push_back($1);
    }
  ;

test // Used in: print_stmt, if_stmt, star_ELIF, while_stmt, argument
  : or_test
    { $$ = $1; }
  ;
or_test // Used in: test, or_test
  : and_test
    { $$ = $1; }
  | or_test OR and_test
    { $$ = new OrBinaryNode($1, $3);
      pool.add($$);
    }
  ;
and_test // Used in: or_test, and_test
  : not_test
    { $$ = $1; }
  | and_test AND not_test
    { $$ = new AndBinaryNode($1, $3);
      pool.add($$);
    }
  ;
not_test // Used in: and_test, not_test
  : NOT not_test
    {
    $$ = new NotUnaryNode($2);
    pool.add($$); }
  | comparison
    { $$ = $1; }
  ;
comparison // Used in: not_test, comparison
  : expr
    { $$ = $1; }
  | comparison comp_op expr
    {
      switch($2) {
        case EQEQUAL:
          $$ = new EqEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case EQEQEQUAL:
          $$ = new EqEqEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case LESS:
          $$ = new LessBinaryNode($1, $3);
          pool.add($$);
          break;
        case GREATER:
          $$ = new GreaterBinaryNode($1, $3);
          pool.add($$);
          break;
        case LESSEQUAL:
          $$ = new LessEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case GREATEREQUAL:
          $$ = new GreaterEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case NOTEQUAL:
          $$ = new NotEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        case GRLT:
          $$ = new NotEqualBinaryNode($1, $3);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  ;
comp_op // Used in: comparison
  : LESS
    { $$ = LESS; }
  | GREATER
    { $$ = GREATER; }
  | EQEQUAL
    { $$ = EQEQUAL; }
  | EQEQEQUAL
    { $$ = EQEQEQUAL; }
  | GREATEREQUAL
    { $$ = GREATEREQUAL; }
  | LESSEQUAL
    { $$ = LESSEQUAL; }
  | GRLT
    { $$ = GRLT; }
  | NOTEQUAL
    { $$ = NOTEQUAL; }
  ;
expr // Used in: comparison, expr
  : xor_expr
    { $$ = $1; }
  | expr BAR xor_expr
    {
      $$ = new BarBinaryNode($1, $3);
      pool.add($$);
    }
  ;
xor_expr // Used in: expr, xor_expr
  : and_expr
    { $$ = $1; }
  | xor_expr CIRCUMFLEX and_expr
    {
      $$ = new XorBinaryNode($1, $3);
      pool.add($$);
    }
  ;
and_expr // Used in: xor_expr, and_expr
  : shift_expr
    { $$ = $1; }
  | and_expr AMPERSAND shift_expr
    {
      $$ = new AmpersandBinaryNode($1, $3);
      pool.add($$);
    }
  ;
shift_expr // Used in: and_expr, shift_expr
  : arith_expr
    { $$ = $1; }
  | shift_expr pick_LEFTSHIFT_RIGHTSHIFT arith_expr
    {
      if ($2 == LEFTSHIFT) {
        $$ = new LShiftBinaryNode($1, $3);
        pool.add($$);
      }
      if ($2 == RIGHTSHIFT) {
        $$ = new RShiftBinaryNode($1, $3);
        pool.add($$);
      }
    }
  ;
pick_LEFTSHIFT_RIGHTSHIFT // Used in: shift_expr
  : LEFTSHIFT
    { $$ = LEFTSHIFT; }
  | RIGHTSHIFT
    { $$ = RIGHTSHIFT; }
  ;
arith_expr // Used in: shift_expr, arith_expr
  : term
    { $$ = $1; }
  | arith_expr pick_PLUS_MINUS term
    {
      if ($2 == PLUS) {
        $$ = new AddBinaryNode($1, $3);
        pool.add($$);
      }
      if ($2 == MINUS) {
        $$ = new SubBinaryNode($1, $3);
        pool.add($$);
      }
    }
  ;
pick_PLUS_MINUS // Used in: arith_expr
  : PLUS
    {
      $$ = PLUS;
    }
  | MINUS
    {
      $$ = MINUS;
    }
  ;
term // Used in: arith_expr, term
  : factor
    {
      $$ = $1;
    }
  | term pick_multop factor
    {
      switch($2) {
        case STAR:
          $$ = new MulBinaryNode($1, $3);
          pool.add($$);
          break;
        case SLASH:
          $$ = new DivBinaryNode($1, $3);
          pool.add($$);
          break;
        case PERCENT:
          $$ = new ModBinaryNode($1, $3);
          pool.add($$);
          break;
        case DOUBLESLASH:
          $$ = new FlrDivBinaryNode($1, $3);
          pool.add($$);
          break;
        default:
          break;
      }
    }
  ;
pick_multop // Used in: term
  : STAR
    { $$ = STAR; }
  | SLASH
    { $$ = SLASH; }
  | PERCENT
    { $$ = PERCENT; }
  | DOUBLESLASH
    { $$ = DOUBLESLASH; }
  ;
factor // Used in: term, factor, power
  : pick_unop factor
    {
      if ($1 == PLUS) {
        $$ = $2;
      }
      if ($1 == MINUS) {
        $$ = new MinusUnaryNode($2);
        pool.add($$);
      }
      if ($1 == TILDE) {
        $$ = new TildeUnaryNode($2);
        pool.add($$);
      }
    }
  | power
    {
      $$ = $1;
    }
  ;
pick_unop // Used in: factor
  : PLUS
    { $$ = PLUS; }
  | MINUS
    { $$ = MINUS; }
  | TILDE
    { $$ = TILDE; }
  ;
power // Used in: factor
  : atom star_trailer DOUBLESTAR factor
    {
      $$ = new PowBinaryNode($1, $4);
      pool.add($$);
    }
  | atom star_trailer
    {
      if ($2 == NULL) {
        $$ = $1;
      }
      else {
        $$ = new CallNode(reinterpret_cast<IdentNode*>($1)->getIdent(), $2);
        pool.add($$);
      }
    }
  ;
star_trailer // Used in: power, star_trailer
  : star_trailer trailer
    { $$ = $2; }
  | %empty
    { $$ = NULL; }
  ;
atom // Used in: power
  : LPAR opt_test RPAR
    { $$ = $2; }
  | NAME
    {
      $$ = new IdentNode($1);
      delete [] $1;
      pool.add($$);
    }
  | STRING
  {
    $$ = new StringLiteral($1);
    pool.add($$);

  }
  | INT
    {
      $$ = new IntLiteral($1);
      pool.add($$);
    }
  | FLOAT
    {
      $$ = new FloatLiteral($1);
      pool.add($$);
    }
  ;

opt_test // Used in: atom
  : test
    { $$ = $1; }
  | %empty
    { $$ = NULL; }
  ;


trailer // Used in: star_trailer
  : LPAR opt_arglist RPAR
    {
      if ($2) {
        $$ = new ArgNode($2);
        delete $2;
        pool.add($$); 
      }
    }
  ;

arglist // Used in: opt_arglist
  : star_argument_COMMA test opt_COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  ;
star_argument_COMMA // Used in: arglist, star_argument_COMMA
  : star_argument_COMMA test COMMA
    {
      if ($1 == NULL) {
        $$ = new std::vector<Node*>();
      }
      else {
        $$ = $1;
      }
      $$->push_back($2);
    }
  | %empty
    { $$ = NULL; }
  ;
%%

#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}