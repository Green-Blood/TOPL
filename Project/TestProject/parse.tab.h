/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    AS = 258,
    ASSERT = 259,
    AT = 260,
    BACKQUOTE = 261,
    CLASS = 262,
    CONTINUE = 263,
    DEL = 264,
    DOT = 265,
    EXCEPT = 266,
    EXEC = 267,
    FINALLY = 268,
    FROM = 269,
    IMPORT = 270,
    IN = 271,
    IS = 272,
    LAMBDA = 273,
    LBRACE = 274,
    LSQB = 275,
    PASS = 276,
    RAISE = 277,
    RBRACE = 278,
    RSQB = 279,
    TRY = 280,
    WITH = 281,
    YIELD = 282,
    AMPEREQUAL = 283,
    AMPERSAND = 284,
    AND = 285,
    BAR = 286,
    BREAK = 287,
    CIRCUMFLEX = 288,
    CIRCUMFLEXEQUAL = 289,
    COLON = 290,
    COMMA = 291,
    DEDENT = 292,
    DEF = 293,
    COMPONENT = 294,
    DOUBLESLASHEQUAL = 295,
    DOUBLESTAREQUAL = 296,
    ELIF = 297,
    ELSE = 298,
    ENDMARKER = 299,
    EQEQUAL = 300,
    EQEQEQUAL = 301,
    FOR = 302,
    GLOBAL = 303,
    GREATER = 304,
    GREATEREQUAL = 305,
    GRLT = 306,
    IF = 307,
    INDENT = 308,
    LEFTSHIFTEQUAL = 309,
    LESS = 310,
    LESSEQUAL = 311,
    LPAR = 312,
    MINEQUAL = 313,
    NEWLINE = 314,
    NOT = 315,
    NOTEQUAL = 316,
    OR = 317,
    PERCENTEQUAL = 318,
    PLUSEQUAL = 319,
    PRINT = 320,
    RETURN = 321,
    RIGHTSHIFTEQUAL = 322,
    RPAR = 323,
    SEMI = 324,
    SLASHEQUAL = 325,
    STAREQUAL = 326,
    TILDE = 327,
    VBAREQUAL = 328,
    WHILE = 329,
    INT = 330,
    FLOAT = 331,
    NAME = 332,
    STRING = 333,
    EQUAL = 334,
    LEFTSHIFT = 335,
    RIGHTSHIFT = 336,
    PLUS = 337,
    MINUS = 338,
    STAR = 339,
    SLASH = 340,
    PERCENT = 341,
    DOUBLESLASH = 342,
    DOUBLESTAR = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "includes/parse.y"

  Node* node;
  int intNumber;
  long double fltNumber;
  char *name;
  char *str;
  std::vector<Node*>* vec;

#line 155 "parse.tab.h"

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
