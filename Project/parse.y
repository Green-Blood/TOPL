%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}

%union {
	int ival;
	float fval;
	char name[20];
}

%token<ival> T_INT
%token<fval> T_FLOAT
%token<name> T_STRING
%token T_PLUS T_MINUS T_MULTIPLY T_DIVIDE T_LEFT T_RIGHT T_OTHER
%token T_NEWLINE T_QUIT
%left T_PLUS T_MINUS
%left T_MULTIPLY T_DIVIDE

%type<ival> int_calculation
%type<fval> float_calculation
%type<name> statement


%start program

%%

program:
	   | program statements
;

statements: T_NEWLINE
    | calculations T_NEWLINE
	| statement T_NEWLINE { printf("\tResult: %s\n", $1); }
    | T_QUIT T_NEWLINE { printf("bye!\n"); exit(0); }
	| T_OTHER
;
  
statement: T_STRING 
;

calculations:
	| float_calculation { printf("\tResult: %f\n", $1);}
	| int_calculation { printf("\tResult: %i\n", $1); }
;

float_calculation: T_FLOAT                 		 { $$ = $1; }
	  | float_calculation T_PLUS float_calculation	 { $$ = $1 + $3; }
	  | float_calculation T_MINUS float_calculation	 { $$ = $1 - $3; }
	  | float_calculation T_MULTIPLY float_calculation { $$ = $1 * $3; }
	  | float_calculation T_DIVIDE float_calculation	 { $$ = $1 / $3; }
	  | T_LEFT float_calculation T_RIGHT		 { $$ = $2; }
	  | int_calculation T_PLUS float_calculation	 	 { $$ = $1 + $3; }
	  | int_calculation T_MINUS float_calculation	 	 { $$ = $1 - $3; }
	  | int_calculation T_MULTIPLY float_calculation 	 { $$ = $1 * $3; }
	  | int_calculation T_DIVIDE float_calculation	 { $$ = $1 / $3; }
	  | float_calculation T_PLUS int_calculation	 	 { $$ = $1 + $3; }
	  | float_calculation T_MINUS int_calculation	 	 { $$ = $1 - $3; }
	  | float_calculation T_MULTIPLY int_calculation 	 { $$ = $1 * $3; }
	  | float_calculation T_DIVIDE int_calculation	 { $$ = $1 / $3; }
	  | int_calculation T_DIVIDE int_calculation		 { $$ = $1 / (float)$3; }
;

int_calculation: T_INT				{ $$ = $1; }
	  | int_calculation T_PLUS int_calculation	{ $$ = $1 + $3; }
	  | int_calculation T_MINUS int_calculation	{ $$ = $1 - $3; }
	  | int_calculation T_MULTIPLY int_calculation	{ $$ = $1 * $3; }
	  | T_LEFT int_calculation T_RIGHT		{ $$ = $2; }
;

%%

int main() {
	yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, " %s\n", s);
	exit(1);
}