%option noyywrap

%{
#include <stdio.h>

#define YY_DECL int yylex()

#include "parse.tab.h"
void lexError();
%}

identifier  [_a-zA-Z][_a-zA-Z0-9]*
defined     "and"|"elif"|"global"|"or"|"assert"|"else"|"if"|"except"|"pass"|"break"|"print"|"exec"|"in"|"raise"|"continue"|"finally"|"is"|"return"|"for"|"lambda"|"try"|"del"|"not"|"while"
quote1      "\'"[^'\\]*"\'"
quote2      "\""[^"\\]*"\""
%%

[ \t]	; // ignore all whitespace
[0-9]+\.[0-9]+ 	{yylval.fval = atof(yytext); return T_FLOAT;}
[0-9]+		{yylval.ival = atoi(yytext); return T_INT;}
[a-zA-Z][a-zA-Z0-9]* {sscanf(yytext, "%s", yylval.name); return T_STRING;}
\n		{return T_NEWLINE;}
"+"		{return T_PLUS;}
"-"		{return T_MINUS;}
"*"		{return T_MULTIPLY;}
"/"		{return T_DIVIDE;}
"("		{return T_LEFT;}
")"		{return T_RIGHT;}
 
 

"exit"		{return T_QUIT;}
"quit"		{return T_QUIT;}
"."		{return T_OTHER;}

%%
//Here is C code section
