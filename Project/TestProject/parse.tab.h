/* A Bison parser, made by GNU Bison 3.4.1.  */

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
    COMPONENT = 275,
    DEL = 276,
    DOT = 277,
    DOUBLESLASHEQUAL = 278,
    DOUBLESTAREQUAL = 279,
    ELIF = 280,
    ELSE = 281,
    ENDMARKER = 282,
    EQEQUAL = 283,
    EXCEPT = 284,
    EXEC = 285,
    FINALLY = 286,
    FOR = 287,
    FROM = 288,
    GLOBAL = 289,
    GREATER = 290,
    GREATEREQUAL = 291,
    GRLT = 292,
    IF = 293,
    IMPORT = 294,
    IN = 295,
    INDENT = 296,
    IS = 297,
    LAMBDA = 298,
    LBRACE = 299,
    LEFTSHIFTEQUAL = 300,
    LESS = 301,
    LESSEQUAL = 302,
    LPAR = 303,
    LSQB = 304,
    MINEQUAL = 305,
    NEWLINE = 306,
    NOT = 307,
    NOTEQUAL = 308,
    NUMBER = 309,
    OR = 310,
    PASS = 311,
    PERCENTEQUAL = 312,
    PLUSEQUAL = 313,
    PRINT = 314,
    RAISE = 315,
    RBRACE = 316,
    RETURN = 317,
    RIGHTSHIFTEQUAL = 318,
    RPAR = 319,
    RSQB = 320,
    SEMI = 321,
    SLASHEQUAL = 322,
    STAREQUAL = 323,
    STRING = 324,
    TILDE = 325,
    TRY = 326,
    VBAREQUAL = 327,
    WHILE = 328,
    WITH = 329,
    YIELD = 330,
    INT = 331,
    FLOAT = 332,
    NAME = 333,
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
  //std::string str;
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
