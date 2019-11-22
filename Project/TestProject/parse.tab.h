/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AMPEREQUAL = 258,
    AMPERSAND = 259,
    AND = 260,
    AS = 261,
    ASSERT = 262,
    AT = 263,
    BACKQUOTE = 264,
    BAR = 265,
    BREAK = 266,
    CIRCUMFLEX = 267,
    CIRCUMFLEXEQUAL = 268,
    CLASS = 269,
    COLON = 270,
    COMMA = 271,
    CONTINUE = 272,
    DEDENT = 273,
    DEF = 274,
    DEL = 275,
    DOT = 276,
    DOUBLESLASHEQUAL = 277,
    DOUBLESTAREQUAL = 278,
    ELIF = 279,
    ELSE = 280,
    ENDMARKER = 281,
    EQEQUAL = 282,
    EXCEPT = 283,
    EXEC = 284,
    FINALLY = 285,
    FOR = 286,
    FROM = 287,
    GLOBAL = 288,
    GREATER = 289,
    GREATEREQUAL = 290,
    GRLT = 291,
    IF = 292,
    IMPORT = 293,
    IN = 294,
    INDENT = 295,
    IS = 296,
    LAMBDA = 297,
    LBRACE = 298,
    LEFTSHIFTEQUAL = 299,
    LESS = 300,
    LESSEQUAL = 301,
    LPAR = 302,
    LSQB = 303,
    MINEQUAL = 304,
    NEWLINE = 305,
    NOT = 306,
    NOTEQUAL = 307,
    NUMBER = 308,
    OR = 309,
    PASS = 310,
    PERCENTEQUAL = 311,
    PLUSEQUAL = 312,
    PRINT = 313,
    RAISE = 314,
    RBRACE = 315,
    RETURN = 316,
    RIGHTSHIFTEQUAL = 317,
    RPAR = 318,
    RSQB = 319,
    SEMI = 320,
    SLASHEQUAL = 321,
    STAREQUAL = 322,
    STRING = 323,
    TILDE = 324,
    TRY = 325,
    VBAREQUAL = 326,
    WHILE = 327,
    WITH = 328,
    YIELD = 329,
    INT = 330,
    FLOAT = 331,
    NAME = 332,
    EQUAL = 333,
    LEFTSHIFT = 334,
    RIGHTSHIFT = 335,
    PLUS = 336,
    MINUS = 337,
    STAR = 338,
    SLASH = 339,
    PERCENT = 340,
    DOUBLESLASH = 341,
    DOUBLESTAR = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 15 "includes/parse.y" /* yacc.c:1909  */

  Node* node;
  int intNumber;
  long double fltNumber;
  char *name;
  std::vector<Node*>* vec;

#line 150 "parse.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
