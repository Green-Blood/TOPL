 
%option noyywrap

%{
// Declaration
#include <stdio.h>
#define YY_DECL int yylex()
#include "parse.tab.h"
void llerror();
%}

numbers ([0-9])+
alpha ([a-zA-Z])+
%%

[ \t]	; // ignore all whitespace
numbers\.numbers 	{yylval.fval = atof(yytext); return T_FLOAT;}
numbers		{yylval.ival = atoi(yytext); return T_INT;}
alpha        {sscanf(yytext, "%s", yylval.name); return T_STRING;}
\n		{return T_NEWLINE;}
"+"		{return T_PLUS;}
"-"		{return T_MINUS;}
"*"		{return T_MULTIPLY;}
"/"		{return T_DIVIDE;}
"("		{return T_LEFT;}
")"		{return T_RIGHT;}
"exit"		{return T_QUIT;}
"quit"		{return T_QUIT;}
 

%%
// Functions up here, Section for Lexerrors 
void llerror(const char* s) {
	fprintf(stderr, "Lex error: %s\n", s);
	exit(1);
}
