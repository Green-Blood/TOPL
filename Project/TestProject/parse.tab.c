/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "includes/parse.y" /* yacc.c:339  */

  #include "includes/ast.h"
  #include <cmath>
  #include <iostream>
  #include <vector>

  extern int yylex (void);
  extern char *yytext;
  void yyerror (const char *);

  PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 79 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
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
#line 15 "includes/parse.y" /* yacc.c:355  */

  Node* node;
  int intNumber;
  long double fltNumber;
  char *name;
  std::vector<Node*>* vec;

#line 215 "parse.tab.c" /* yacc.c:355  */
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

/* Copy the second part of user declarations.  */

#line 246 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   968

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  316
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  480

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    67,    70,    71,    76,    77,    80,    81,
      84,    86,    90,    91,    94,    95,    98,   106,   114,   118,
     120,   132,   134,   138,   148,   152,   153,   156,   157,   160,
     162,   166,   172,   176,   177,   180,   181,   184,   186,   190,
     191,   194,   195,   198,   200,   202,   204,   206,   208,   210,
     212,   214,   218,   280,   285,   289,   291,   295,   300,   304,
     306,   308,   310,   312,   314,   316,   318,   320,   322,   324,
     326,   330,   335,   339,   341,   345,   347,   351,   352,   355,
     356,   359,   362,   365,   367,   369,   371,   373,   377,   380,
     383,   388,   395,   398,   399,   402,   403,   406,   407,   410,
     411,   414,   417,   420,   421,   424,   425,   426,   429,   430,
     433,   434,   437,   438,   441,   442,   445,   446,   449,   450,
     453,   456,   457,   460,   461,   464,   465,   468,   470,   472,
     474,   476,   478,   480,   482,   486,   496,   508,   509,   512,
     513,   516,   517,   520,   521,   524,   525,   528,   529,   532,
     533,   536,   539,   540,   543,   544,   547,   548,   551,   552,
     555,   556,   559,   561,   569,   574,   581,   582,   585,   586,
     589,   590,   593,   594,   597,   599,   603,   605,   609,   611,
     615,   617,   621,   623,   627,   629,   666,   668,   670,   672,
     674,   676,   678,   680,   682,   684,   686,   690,   692,   695,
     697,   700,   702,   705,   707,   720,   722,   726,   728,   741,
     745,   751,   755,   780,   782,   784,   786,   790,   804,   810,
     812,   814,   818,   823,   835,   837,   841,   843,   845,   847,
     849,   855,   857,   859,   864,   871,   873,   877,   879,   883,
     884,   887,   888,   891,   892,   895,   896,   899,   901,   905,
     906,   909,   917,   919,   923,   924,   927,   928,   931,   932,
     933,   936,   937,   940,   941,   944,   945,   948,   949,   952,
     953,   956,   958,   962,   963,   966,   967,   970,   971,   974,
     975,   978,   979,   982,   983,   986,   998,  1008,  1012,  1013,
    1017,  1018,  1021,  1023,  1025,  1029,  1031,  1035,  1036,  1039,
    1040,  1043,  1044,  1047,  1048,  1051,  1052,  1055,  1057,  1061,
    1062,  1065,  1066,  1069,  1071,  1075,  1076
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPEREQUAL", "AMPERSAND", "AND", "AS",
  "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASHEQUAL", "DOUBLESTAREQUAL", "ELIF",
  "ELSE", "ENDMARKER", "EQEQUAL", "EXCEPT", "EXEC", "FINALLY", "FOR",
  "FROM", "GLOBAL", "GREATER", "GREATEREQUAL", "GRLT", "IF", "IMPORT",
  "IN", "INDENT", "IS", "LAMBDA", "LBRACE", "LEFTSHIFTEQUAL", "LESS",
  "LESSEQUAL", "LPAR", "LSQB", "MINEQUAL", "NEWLINE", "NOT", "NOTEQUAL",
  "NUMBER", "OR", "PASS", "PERCENTEQUAL", "PLUSEQUAL", "PRINT", "RAISE",
  "RBRACE", "RETURN", "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI",
  "SLASHEQUAL", "STAREQUAL", "STRING", "TILDE", "TRY", "VBAREQUAL",
  "WHILE", "WITH", "YIELD", "INT", "FLOAT", "NAME", "EQUAL", "LEFTSHIFT",
  "RIGHTSHIFT", "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "DOUBLESLASH",
  "DOUBLESTAR", "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "decorator", "opt_arglist", "decorators",
  "decorated", "funcdef", "parameters", "varargslist", "opt_EQUAL_test",
  "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR",
  "opt_COMMA", "fpdef", "fplist", "star_fpdef_notest", "stmt",
  "simple_stmt", "star_SEMI_small_stmt", "small_stmt", "expr_stmt",
  "pick_yield_expr_testlist", "star_EQUAL", "augassign", "print_stmt",
  "star_COMMA_test", "opt_test", "plus_COMMA_test", "opt_test_2",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "raise_stmt", "opt_COMMA_test",
  "opt_test_3", "import_stmt", "import_name", "import_from",
  "pick_dotted_name", "pick_STAR_import", "import_as_name",
  "dotted_as_name", "import_as_names", "star_COMMA_import_as_name",
  "dotted_as_names", "dotted_name", "global_stmt", "star_COMMA_NAME",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "plus_COMMA_old_test", "old_test", "old_lambdef",
  "test", "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "star_COMMA_subscript",
  "subscript", "opt_test_only", "opt_sliceop", "sliceop", "exprlist",
  "star_COMMA_expr", "testlist", "dictorsetmaker", "star_test_COLON_test",
  "pick_for_test_test", "pick_for_test", "classdef", "opt_testlist",
  "arglist", "star_argument_COMMA", "star_COMMA_argument",
  "opt_DOUBLESTAR_test", "pick_argument", "argument", "opt_comp_for",
  "list_iter", "list_for", "list_if", "comp_iter", "comp_for", "comp_if",
  "testlist1", "yield_expr", "star_DOT", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -310

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-310)))

#define YYTABLE_NINF -263

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -310,    43,  -310,   401,  -310,   831,   -31,   831,  -310,   -26,
    -310,    -8,   319,  -310,   319,   319,  -310,    -3,   831,   -31,
      62,   831,   203,   831,  -310,   886,  -310,  -310,   769,   831,
     831,  -310,  -310,    94,   831,   831,   831,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,    36,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,    30,    97,  -310,   247,   113,   122,   132,
      42,    46,   112,  -310,   319,  -310,  -310,    79,  -310,   308,
    -310,  -310,   133,  -310,    18,  -310,    74,    16,   108,   113,
    -310,    32,   117,   121,     1,  -310,   145,  -310,   148,    75,
     831,   146,    61,    17,   109,  -310,   141,  -310,   111,  -310,
    -310,   147,   116,  -310,  -310,   831,  -310,  -310,   161,  -310,
     629,   169,  -310,   179,  -310,  -310,  -310,  -310,    49,   172,
     886,   886,  -310,   886,  -310,  -310,  -310,  -310,  -310,   138,
    -310,  -310,   152,  -310,   319,   319,   319,   319,  -310,  -310,
     319,  -310,  -310,   319,  -310,  -310,  -310,  -310,   319,  -310,
      13,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,   203,   203,   831,   123,   130,  -310,
    -310,   831,   629,   831,   136,   186,   187,   831,   831,    -7,
     166,   189,   191,   629,   -31,   131,  -310,   831,   -21,  -310,
     134,   139,  -310,   137,   831,   319,   201,  -310,  -310,  -310,
     201,  -310,  -310,   319,   201,  -310,  -310,   202,   201,   831,
    -310,   181,  -310,    19,   629,   127,   319,  -310,   705,   831,
       3,    97,  -310,  -310,  -310,   113,   122,   132,    42,    46,
     112,  -310,   149,   130,   812,   319,  -310,   144,  -310,  -310,
    -310,  -310,  -310,  -310,   160,  -310,    11,  -310,  -310,  -310,
     162,  -310,   165,   629,   319,   213,   215,   154,   227,  -310,
    -310,  -310,  -310,   163,  -310,  -310,  -310,  -310,  -310,   175,
     223,  -310,   831,   225,   141,   204,   831,  -310,  -310,   208,
    -310,   831,   226,  -310,  -310,   213,   553,   831,   237,    76,
     238,   230,   629,   831,   113,  -310,  -310,  -310,   831,  -310,
     195,   239,   244,   199,  -310,   249,  -310,   203,   217,   831,
     831,     7,  -310,   252,   250,  -310,  -310,   113,   831,  -310,
     629,   206,   193,   257,  -310,   128,   273,  -310,   207,  -310,
    -310,    12,  -310,   274,  -310,  -310,   886,   867,  -310,   831,
    -310,  -310,  -310,   477,   110,   629,   285,   276,   295,   629,
     297,  -310,  -310,  -310,  -310,   293,  -310,   299,   831,  -310,
    -310,  -310,  -310,   831,  -310,  -310,   253,  -310,   629,  -310,
     292,  -310,  -310,   154,   831,   303,   -21,   242,   831,  -310,
      35,   305,    66,   306,  -310,   269,  -310,  -310,  -310,  -310,
    -310,   831,  -310,  -310,   629,   312,  -310,   629,  -310,   629,
    -310,   750,  -310,   317,   318,  -310,  -310,   320,  -310,   321,
     629,  -310,  -310,   322,   867,  -310,  -310,  -310,   867,   323,
     867,  -310,  -310,  -310,   867,   324,  -310,  -310,   629,  -310,
    -310,  -310,   831,  -310,  -310,    64,  -310,   629,   629,  -310,
     831,    87,  -310,   867,    66,  -310,   867,  -310,  -310,  -310,
     831,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    88,     0,
      89,     0,     0,     3,     0,     0,   316,     0,     0,     0,
      24,   242,   238,   240,     4,     0,   231,    82,    76,    94,
      91,   244,   221,     0,     0,     0,   314,   233,   234,   230,
     219,   220,     6,    13,     0,   134,   132,     5,    37,    42,
      43,    44,    45,    46,    47,    83,    84,    85,    87,    86,
      48,    99,   100,    49,    50,    51,    38,   127,   128,   129,
     130,   131,    74,   177,   178,   180,   183,   184,   197,   199,
     201,   203,   207,   211,     0,   218,   225,   232,   175,    54,
     133,    92,   126,   118,     0,   311,     0,     0,     0,   270,
      81,   124,     0,     0,     0,   122,     0,   116,   101,   111,
       0,     0,     0,    74,     0,   241,    74,   237,     0,   236,
     235,    74,     0,   239,   182,     0,    71,    74,    98,    90,
       0,     0,   153,   155,   313,    12,    15,    14,     0,   272,
       0,     0,   174,     0,   188,   187,   189,   191,   193,   195,
     186,   190,     0,   192,     0,     0,     0,     0,   205,   206,
       0,   209,   210,     0,   213,   214,   215,   216,     0,   217,
     223,   243,    64,    66,    70,    69,    67,    60,    63,    59,
      68,    62,    61,    65,     0,     0,     0,     0,   287,     9,
     229,     0,     0,   284,    24,     0,   268,     0,     0,     0,
     315,   103,   120,     0,     0,     0,   250,     0,     0,    31,
       0,     0,    19,    22,     0,     0,    30,   274,   279,   228,
      30,   247,   226,     0,    30,   245,   227,    80,    30,     0,
      93,     0,   162,     0,     0,     0,     0,    40,     0,   271,
       0,   179,   181,   196,   194,   185,   198,   200,   202,   204,
     208,   212,     0,   287,   262,     0,   224,    58,    53,    56,
      55,    52,   125,   119,     0,    10,     0,   312,   282,   283,
       0,    18,     0,     0,   267,    96,     0,     0,   109,   105,
     102,   115,   107,     0,   138,   117,   110,   249,    36,     0,
      26,    28,     0,    30,   276,     0,    29,   280,   248,     0,
     246,     0,    30,    72,    75,    96,     0,   157,     0,   148,
       0,   140,     0,     0,   154,    39,    41,    73,     0,   253,
       0,     0,   259,     0,   257,     0,   222,     0,     0,     0,
       0,   298,   285,    30,     0,    17,    16,   269,     0,   123,
       0,     0,     0,   113,   121,   136,    34,    32,     0,    27,
      21,    23,    20,    30,   273,   277,     0,     0,    78,    29,
      79,    97,   165,     0,   161,     0,     0,   150,     0,     0,
       0,   151,   152,   176,   251,     0,   252,   255,   262,    57,
       8,   289,   294,     0,   295,   297,   286,   292,     0,    95,
     142,   106,   108,   112,     0,     0,    33,     0,    29,   278,
     308,    24,   302,   167,   171,   170,    77,   163,   164,   158,
     159,     0,   156,   144,     0,     0,   143,     0,   146,     0,
     258,   254,   261,   264,   291,   296,   281,     0,   114,     0,
       0,    35,    25,     0,     0,   307,   305,   306,     0,     0,
       0,   301,   299,   300,     0,    30,   160,   147,     0,   145,
     139,   256,   266,   260,   263,     0,   293,     0,     0,   135,
       0,   310,   173,     0,   304,   169,    29,   166,   149,   265,
       0,   288,   141,   137,   275,   309,   172,   303,   168,   290
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -310,  -310,  -310,  -310,  -310,   298,    86,  -310,  -310,   300,
    -310,  -187,  -310,  -310,  -310,  -310,  -183,  -202,  -310,  -310,
    -281,    -2,  -310,   103,  -310,   158,    20,  -310,  -310,    52,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,    40,  -310,  -310,  -310,  -310,  -310,  -310,   -47,   151,
      71,  -310,  -310,     9,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,    37,
      44,  -310,  -310,  -182,  -310,  -310,  -310,  -309,  -310,    -5,
    -310,  -137,   210,    -6,  -310,  -310,    21,   194,   200,   211,
    -310,   198,  -310,   196,  -310,   -73,  -310,  -310,  -310,  -310,
    -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,  -310,
    -310,   -61,   -15,  -310,  -310,   -10,  -310,   -22,  -310,  -310,
    -310,  -310,   325,  -310,  -310,  -310,  -310,  -310,  -310,   -84,
    -310,   -88,   256,  -310,   -81,  -104,  -310,  -310,   -18,  -310
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    42,     3,    43,   264,    44,    45,    46,
     195,   111,   293,   112,   349,   212,   297,   213,   289,   346,
      47,   232,   138,    49,    50,   257,   258,   185,    51,   139,
     126,   302,   303,    52,    53,    54,    55,    56,    57,    58,
      59,   339,   230,    60,    61,    62,   103,   280,   281,   107,
     282,   343,   108,   109,    63,   202,    64,    65,    66,    67,
     345,    68,    69,    70,   309,   367,   416,    71,   235,   132,
     310,   411,   412,   233,   363,   402,   445,   403,   404,    72,
     142,    73,    74,    75,    76,   154,    77,    78,    79,    80,
     160,    81,   163,    82,   168,    83,    84,    85,   170,    86,
     117,   118,   122,   114,    87,   123,   119,    88,   256,   323,
     377,   324,   325,   453,   454,   100,   196,    89,   115,   353,
     354,   217,    90,   270,   265,   266,   424,   456,   332,   333,
     384,   441,   442,   443,   435,   436,   437,    96,    91,   104
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    48,    95,   240,   120,   102,   288,   272,   129,   218,
     268,   169,   221,   106,   134,    94,   113,   116,   121,   124,
       7,   284,   200,   127,   128,   362,   208,   -29,   318,   131,
     133,   192,   214,    99,   252,   101,    99,   298,   215,   187,
     277,   300,   155,     4,     6,   304,    93,   307,   215,   308,
       9,    97,   311,    20,    21,    11,   209,   141,    22,    23,
     253,   254,    25,   193,    26,   188,   215,   140,   189,    98,
     278,   197,   434,     7,   105,   -29,   279,   110,    93,    31,
      32,   205,   408,   190,   141,   383,    37,    38,    39,   141,
     191,   336,    40,    41,   329,   251,   187,   223,   330,   237,
     255,   366,   143,   440,   307,   206,    20,    21,   208,   130,
     352,    22,    23,   201,   238,    25,   409,    26,   215,   360,
     227,   158,   159,   155,   434,   461,   410,   161,   162,   462,
     371,   464,    31,    32,   156,   465,   157,   242,   209,    37,
      38,    39,   312,   313,   210,    40,    41,   171,   211,   186,
     387,   470,   394,   395,   476,   194,   198,   478,   390,   199,
     203,   207,   259,   259,   204,   216,   260,   260,   220,   219,
     399,   269,   215,   224,   222,   245,   276,   229,   223,   228,
     226,   262,   326,   413,   234,   236,   267,   418,   239,   243,
     355,   244,   275,   -11,   431,   164,   165,   166,   167,   271,
     263,   273,   287,   274,  -104,   295,   426,   283,   286,   294,
     187,   290,     7,   299,   439,   292,   291,   296,   301,   400,
     405,   306,   327,   328,   305,   334,   319,   385,   335,   338,
     340,   278,   447,   342,   317,   449,    99,   450,   347,   348,
     344,   351,   359,   356,    99,    20,    21,   357,   459,   322,
      22,    23,   365,   369,    25,   370,    26,   314,   374,  -261,
     375,   331,   467,   376,   378,   388,   468,   380,   386,   391,
     392,    31,    32,   393,   144,   472,   473,    36,    37,    38,
      39,   145,   146,   147,    40,    41,   148,   350,   149,   396,
     398,   317,   150,   151,   397,   337,   358,   405,   152,   153,
     414,   405,   364,   405,    48,   259,   415,   405,   133,   260,
     417,   172,   419,   373,   420,   421,   -29,   427,   430,   432,
     438,   173,   444,   141,   381,   382,   405,   448,     7,   405,
     174,   175,   452,   389,   455,   457,   458,   460,   463,   320,
     466,   316,   135,   261,   136,   361,   428,   379,   341,   246,
     372,   241,   176,   368,   406,   285,   247,   177,   249,   250,
     451,    48,    21,   423,   178,   179,    22,    23,   248,   137,
     180,   471,    26,   422,   181,   182,   477,   225,   425,   183,
     475,     0,     0,     0,     0,     0,   184,    31,    32,   429,
       0,     0,     0,   433,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,   446,     0,     5,     6,
       7,     0,     8,     0,     0,     9,   322,     0,    10,     0,
      11,    12,     0,     0,     0,     0,     0,    13,     0,     0,
      14,     0,    15,    16,    17,     0,     0,     0,    18,    19,
       0,     0,     0,    20,    21,     0,     0,   469,    22,    23,
     331,    24,    25,     0,    26,   474,    27,     0,     0,    28,
      29,     0,    30,     0,     0,   479,     0,     0,     0,    31,
      32,    33,     0,    34,    35,    36,    37,    38,    39,     0,
       0,     0,    40,    41,     5,     6,     7,     0,     8,     0,
       0,     9,     0,     0,    10,   407,    11,    12,     0,     0,
       0,     0,     0,     0,     0,     0,    14,     0,    15,    16,
      17,     0,     0,     0,    18,    19,     0,     0,     0,    20,
      21,     0,     0,     0,    22,    23,     0,     0,    25,     0,
      26,     0,    27,     0,     0,    28,    29,     0,    30,     0,
       0,     0,     0,     0,     0,    31,    32,    33,     0,    34,
      35,    36,    37,    38,    39,     0,     0,     0,    40,    41,
       5,     6,     7,     0,     8,     0,     0,     9,     0,     0,
      10,     0,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,    14,     0,    15,    16,    17,     0,     0,     0,
      18,    19,     0,     0,     0,    20,    21,     0,     0,     0,
      22,    23,     0,     0,    25,     0,    26,     0,    27,     0,
       0,    28,    29,     0,    30,     0,     0,     0,     0,     0,
       0,    31,    32,    33,     0,    34,    35,    36,    37,    38,
      39,     0,     0,     0,    40,    41,     5,     0,     7,     0,
       8,     0,     0,     0,     0,     0,    10,     0,     0,    12,
       0,     0,     0,     0,     0,     0,     0,     0,    14,     0,
       0,    16,    17,     0,     0,     0,     0,    19,     0,     0,
       0,    20,    21,     0,     0,     0,    22,    23,     0,   231,
      25,     0,    26,     0,    27,     0,     0,    28,    29,     0,
      30,     0,     0,     0,     0,     0,     0,    31,    32,     0,
       0,     0,     0,    36,    37,    38,    39,     0,     0,     0,
      40,    41,     5,     0,     7,     0,     8,     0,     0,     0,
       0,     0,    10,     0,     0,    12,     0,     0,     0,     0,
       0,     0,     0,     0,    14,     0,     0,    16,    17,     0,
       0,     0,     0,    19,     0,     0,     0,    20,    21,     0,
       0,     0,    22,    23,     0,   315,    25,     0,    26,     7,
      27,     0,     0,    28,    29,  -262,    30,     0,     0,     0,
       0,   321,     0,    31,    32,     0,     0,     0,     7,    36,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,    20,    21,     0,     0,     0,    22,    23,     0,
       0,    25,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    20,    21,     0,     0,     0,    22,    23,    31,    32,
      25,     7,    26,     0,     0,    37,    38,    39,     0,     0,
       0,    40,    41,   321,     0,     0,     0,    31,    32,     0,
       7,     0,     0,     0,    37,    38,    39,     0,     0,   125,
      40,    41,     0,     0,    20,    21,     0,     0,     0,    22,
      23,     0,     0,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     7,     0,    22,    23,
      31,    32,    25,     0,    26,     0,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     7,     0,     0,     0,    31,
      32,     0,     0,     0,     0,     0,    37,    38,    39,   401,
      21,     0,    40,    41,    22,    23,     0,     0,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,     0,     0,    22,    23,    31,    32,    25,     0,    26,
       0,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,    31,    32,     0,     0,     0,     0,
       0,    37,    38,    39,     0,     0,     0,    40,    41
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,   140,    22,    15,   208,   194,    30,   113,
     192,    84,   116,    18,    36,     6,    21,    22,    23,    25,
       9,   203,    21,    28,    29,   306,    47,    15,    25,    34,
      35,    15,    15,    12,    21,    14,    15,   220,    31,    21,
      47,   224,    10,     0,     8,   228,    77,    28,    31,    30,
      14,    77,   234,    42,    43,    19,    77,    54,    47,    48,
      47,    48,    51,    47,    53,    47,    31,    37,    50,    77,
      77,    39,    37,     9,    77,    63,    83,    15,    77,    68,
      69,     6,   363,     9,    54,    78,    75,    76,    77,    54,
      16,   273,    81,    82,    83,   168,    21,    31,    87,    50,
      87,    25,     5,    37,    28,   110,    42,    43,    47,    15,
     293,    47,    48,   104,    65,    51,     6,    53,    31,   302,
     125,    79,    80,    10,    37,   434,    16,    81,    82,   438,
     312,   440,    68,    69,    12,   444,     4,   143,    77,    75,
      76,    77,    15,    16,    83,    81,    82,    68,    87,    16,
     333,    87,    24,    25,   463,    47,    39,   466,   340,    38,
      15,    15,   184,   185,    16,   113,   184,   185,   116,    60,
     353,   193,    31,   121,    63,   154,   198,    16,    31,   127,
      64,   186,   255,   365,    15,     6,   191,   369,    16,    51,
     294,    39,   197,    63,   396,    83,    84,    85,    86,    63,
      77,    15,   207,    16,    38,   215,   388,    16,    77,   214,
      21,    77,     9,   223,   401,    78,    77,    16,    16,   356,
     357,    40,    78,    63,   229,    63,    77,   331,    63,    16,
      15,    77,   414,     6,   239,   417,   215,   419,    63,    16,
      77,    16,    16,    39,   223,    42,    43,    39,   430,   254,
      47,    48,    15,    15,    51,    25,    53,   236,    63,    15,
      21,   266,   445,    64,    15,    15,   448,    50,    16,    63,
      77,    68,    69,    16,    27,   457,   458,    74,    75,    76,
      77,    34,    35,    36,    81,    82,    39,   292,    41,    16,
      16,   296,    45,    46,    87,   274,   301,   434,    51,    52,
      15,   438,   307,   440,   306,   327,    30,   444,   313,   327,
      15,     3,    15,   318,    21,    16,    63,    25,    15,    77,
      15,    13,    16,    54,   329,   330,   463,    15,     9,   466,
      22,    23,    15,   338,    16,    15,    15,    15,    15,   253,
      16,   238,    44,   185,    44,   305,   393,   327,   277,   155,
     313,   141,    44,   309,   359,   204,   156,    49,   160,   163,
     421,   363,    43,   378,    56,    57,    47,    48,   157,    44,
      62,   455,    53,   378,    66,    67,   464,   121,   383,    71,
     461,    -1,    -1,    -1,    -1,    -1,    78,    68,    69,   394,
      -1,    -1,    -1,   398,    75,    76,    77,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    -1,   411,    -1,     7,     8,
       9,    -1,    11,    -1,    -1,    14,   421,    -1,    17,    -1,
      19,    20,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      29,    -1,    31,    32,    33,    -1,    -1,    -1,    37,    38,
      -1,    -1,    -1,    42,    43,    -1,    -1,   452,    47,    48,
     455,    50,    51,    -1,    53,   460,    55,    -1,    -1,    58,
      59,    -1,    61,    -1,    -1,   470,    -1,    -1,    -1,    68,
      69,    70,    -1,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    81,    82,     7,     8,     9,    -1,    11,    -1,
      -1,    14,    -1,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    -1,
      53,    -1,    55,    -1,    -1,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    69,    70,    -1,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    81,    82,
       7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,
      17,    -1,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    31,    32,    33,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    -1,    -1,    51,    -1,    53,    -1,    55,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    -1,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    81,    82,     7,    -1,     9,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    33,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    -1,    50,
      51,    -1,    53,    -1,    55,    -1,    -1,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    -1,    -1,    -1,
      81,    82,     7,    -1,     9,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    47,    48,    -1,    50,    51,    -1,    53,     9,
      55,    -1,    -1,    58,    59,    15,    61,    -1,    -1,    -1,
      -1,    21,    -1,    68,    69,    -1,    -1,    -1,     9,    74,
      75,    76,    77,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    47,    48,    68,    69,
      51,     9,    53,    -1,    -1,    75,    76,    77,    -1,    -1,
      -1,    81,    82,    21,    -1,    -1,    -1,    68,    69,    -1,
       9,    -1,    -1,    -1,    75,    76,    77,    -1,    -1,    80,
      81,    82,    -1,    -1,    42,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,     9,    -1,    47,    48,
      68,    69,    51,    -1,    53,    -1,    -1,    75,    76,    77,
      -1,    -1,    -1,    81,    82,     9,    -1,    -1,    -1,    68,
      69,    -1,    -1,    -1,    -1,    -1,    75,    76,    77,    42,
      43,    -1,    81,    82,    47,    48,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    68,    69,    51,    -1,    53,
      -1,    -1,    75,    76,    77,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    -1,    68,    69,    -1,    -1,    -1,    -1,
      -1,    75,    76,    77,    -1,    -1,    -1,    81,    82
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    89,    90,    92,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    26,    29,    31,    32,    33,    37,    38,
      42,    43,    47,    48,    50,    51,    53,    55,    58,    59,
      61,    68,    69,    70,    72,    73,    74,    75,    76,    77,
      81,    82,    91,    93,    95,    96,    97,   108,   109,   111,
     112,   116,   121,   122,   123,   124,   125,   126,   127,   128,
     131,   132,   133,   142,   144,   145,   146,   147,   149,   150,
     151,   155,   167,   169,   170,   171,   172,   174,   175,   176,
     177,   179,   181,   183,   184,   185,   187,   192,   195,   205,
     210,   226,   167,    77,   141,   167,   225,    77,    77,   174,
     203,   174,   203,   134,   227,    77,   167,   137,   140,   141,
      15,    99,   101,   167,   191,   206,   167,   188,   189,   194,
     226,   167,   190,   193,   171,    80,   118,   167,   167,   205,
      15,   167,   157,   167,   205,    93,    97,   210,   110,   117,
      37,    54,   168,     5,    27,    34,    35,    36,    39,    41,
      45,    46,    51,    52,   173,    10,    12,     4,    79,    80,
     178,    81,    82,   180,    83,    84,    85,    86,   182,   183,
     186,    68,     3,    13,    22,    23,    44,    49,    56,    57,
      62,    66,    67,    71,    78,   115,    16,    21,    47,    50,
       9,    16,    15,    47,    47,    98,   204,    39,    39,    38,
      21,   141,   143,    15,    16,     6,   167,    15,    47,    77,
      83,    87,   103,   105,    15,    31,   117,   209,   223,    60,
     117,   223,    63,    31,   117,   220,    64,   167,   117,    16,
     130,    50,   109,   161,    15,   156,     6,    50,    65,    16,
     169,   170,   171,    51,    39,   174,   175,   176,   177,   179,
     181,   183,    21,    47,    48,    87,   196,   113,   114,   205,
     226,   113,   167,    77,    94,   212,   213,   167,   161,   205,
     211,    63,    99,    15,    16,   167,   205,    47,    77,    83,
     135,   136,   138,    16,   161,   137,    77,   167,   105,   106,
      77,    77,    78,   100,   167,   203,    16,   104,   104,   203,
     104,    16,   119,   120,   104,   167,    40,    28,    30,   152,
     158,   161,    15,    16,   174,    50,   111,   167,    25,    77,
      94,    21,   167,   197,   199,   200,   183,    78,    63,    83,
      87,   167,   216,   217,    63,    63,   161,   174,    16,   129,
      15,   138,     6,   139,    77,   148,   107,    63,    16,   102,
     167,    16,   104,   207,   208,   223,    39,    39,   167,    16,
     104,   129,   108,   162,   167,    15,    25,   153,   158,    15,
      25,   161,   157,   167,    63,    21,    64,   198,    15,   114,
      50,   167,   167,    78,   218,   223,    16,   104,    15,   167,
     161,    63,    77,    16,    24,    25,    16,    87,    16,   104,
     169,    42,   163,   165,   166,   169,   167,    18,   108,     6,
      16,   159,   160,   161,    15,    30,   154,    15,   161,    15,
      21,    16,   167,   200,   214,   167,   161,    25,   136,   167,
      15,   105,    77,   167,    37,   222,   223,   224,    15,    99,
      37,   219,   220,   221,    16,   164,   167,   161,    15,   161,
     161,   199,    15,   201,   202,    16,   215,    15,    15,   161,
      15,   165,   165,    15,   165,   165,    16,   104,   161,   167,
      87,   217,   161,   161,   167,   222,   165,   219,   165,   167
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   120,
     120,   121,   122,   123,   123,   123,   123,   123,   124,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   133,   134,   134,   135,   135,   135,   136,   136,
     137,   137,   138,   138,   139,   139,   140,   140,   141,   141,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   146,
     146,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   151,   151,   152,   152,   153,   153,   154,
     154,   155,   156,   156,   157,   157,   158,   158,   159,   159,
     160,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   166,   166,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   180,
     180,   181,   181,   182,   182,   182,   182,   183,   183,   184,
     184,   184,   185,   185,   186,   186,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   192,   192,   193,   193,   194,   194,   195,
     195,   196,   196,   196,   197,   197,   198,   198,   199,   199,
     199,   200,   200,   201,   201,   202,   202,   203,   203,   204,
     204,   205,   205,   206,   206,   207,   207,   208,   208,   209,
     209,   210,   210,   211,   211,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   216,   217,   217,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     3,     2,     2,
       4,     2,     0,     4,     0,     3,     0,     3,     2,     1,
       0,     1,     3,     3,     2,     3,     0,     1,     1,     4,
       3,     3,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     3,     0,     3,     0,     3,     2,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     3,     1,     2,     0,     3,     0,     1,
       1,     2,     4,     2,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     2,     3,     0,     1,     3,     1,     3,
       3,     3,     0,     5,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     4,     2,     1,     3,     1,     3,     2,
       1,     1,     4,     3,     2,     1,     4,     0,     1,     3,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     2,     1,     2,     3,     2,     3,     4,
       3,     3,     3,     2,     3,     2,     3,     0,     3,     1,
       4,     1,     0,     1,     0,     2,     1,     3,     2,     3,
       0,     3,     2,     4,     2,     5,     0,     1,     2,     1,
       2,     7,     4,     1,     0,     2,     3,     0,     3,     0,
       3,     0,     2,     4,     2,     2,     3,     1,     0,     1,
       1,     5,     4,     3,     2,     1,     1,     5,     4,     3,
       2,     1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 72 "includes/parse.y" /* yacc.c:1646  */
    { (yyvsp[0].node)->eval(); }
#line 1919 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = (yyvsp[0].vec); }
#line 1925 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 1931 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 99 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1941 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ParaNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node));
      }
    }
#line 1953 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 115 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 119 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 1965 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 121 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-3].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-3].vec);
      }
      (yyval.vec)->push_back((yyvsp[-2].node));
    }
#line 1979 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 133 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1985 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 135 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 1991 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 139 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-3].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-3].vec);
      }
      (yyval.vec)->push_back((yyvsp[-2].node));
    }
#line 2005 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 149 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 2011 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 161 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2017 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 163 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2023 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 167 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 2033 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 173 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2039 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 185 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2045 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 187 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2051 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 199 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2057 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 201 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2063 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 203 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2069 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 205 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2075 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 207 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2081 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 209 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2087 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 211 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2093 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 213 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2099 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 215 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2105 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 219 "includes/parse.y" /* yacc.c:1646  */
    {
      Node* temp = NULL;
      switch((yyvsp[-1].intNumber)) {
        case PLUSEQUAL:
          temp = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case MINEQUAL:
          temp = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case STAREQUAL:
          temp = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case SLASHEQUAL:
          temp = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case PERCENTEQUAL:
          temp = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case LEFTSHIFTEQUAL:
          temp = new LShiftBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case RIGHTSHIFTEQUAL:
          temp = new RShiftBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case DOUBLESTAREQUAL:
          temp = new PowBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case DOUBLESLASHEQUAL:
          temp = new FlrDivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        default:
          break;
      }
    }
#line 2171 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 281 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2180 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 286 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2186 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 290 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2192 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 292 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2198 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 296 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2207 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 301 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2213 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 305 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PLUSEQUAL; }
#line 2219 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 307 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = MINEQUAL; }
#line 2225 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 309 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = STAREQUAL; }
#line 2231 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 311 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = SLASHEQUAL; }
#line 2237 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 313 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 2243 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 315 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = AMPEREQUAL; }
#line 2249 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 317 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = VBAREQUAL; }
#line 2255 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 319 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = CIRCUMFLEXEQUAL; }
#line 2261 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 321 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = LEFTSHIFTEQUAL; }
#line 2267 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 323 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = RIGHTSHIFTEQUAL; }
#line 2273 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 325 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 2279 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 327 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 2285 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 331 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new PrintNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2294 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 336 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2300 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 340 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2306 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 342 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2312 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 346 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2318 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 348 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2324 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 366 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2330 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 368 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2336 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 370 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2342 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 372 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2348 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 374 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2354 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 384 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new ReturnNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2363 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 389 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new ReturnNode(NULL);
      pool.add((yyval.node));
    }
#line 2372 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 469 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2378 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 471 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2384 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 473 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2390 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 475 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2396 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 477 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2402 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 479 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2408 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 481 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2414 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 483 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2420 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 487 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-6].node)) {
        (yyval.node) = new IfNode((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2434 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 497 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-3].node)) {
        (yyval.node) = new IfNode((yyvsp[-3].node), (yyvsp[-1].node), NULL);
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2448 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 560 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2454 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 562 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
      delete (yyvsp[-1].vec);
      pool.add((yyval.node));
    }
#line 2464 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 570 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.vec) = (yyvsp[-1].vec);
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2473 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 575 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.vec) = new std::vector<Node*>();
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2482 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 598 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2488 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 600 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2494 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 604 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2500 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 606 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2506 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 610 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2512 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 612 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2518 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 616 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2524 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 618 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2530 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 622 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2536 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 624 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2542 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 628 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2548 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 630 "includes/parse.y" /* yacc.c:1646  */
    {
      switch((yyvsp[-1].intNumber)) {
        case EQEQUAL:
          (yyval.node) = new EqEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case LESS:
          (yyval.node) = new LessBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case GREATER:
          (yyval.node) = new GreaterBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case LESSEQUAL:
          (yyval.node) = new LessEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case GREATEREQUAL:
          (yyval.node) = new GreaterEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case NOTEQUAL:
          (yyval.node) = new NotEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case GRLT:
          (yyval.node) = new NotEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        default:
          break;
      }
    }
#line 2587 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 667 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = LESS; }
#line 2593 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 669 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = GREATER; }
#line 2599 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 671 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = EQEQUAL; }
#line 2605 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 673 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = GREATEREQUAL; }
#line 2611 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 675 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = LESSEQUAL; }
#line 2617 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 677 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = GRLT; }
#line 2623 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 679 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = NOTEQUAL; }
#line 2629 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 681 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = IN; }
#line 2635 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 683 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2641 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 685 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = IS; }
#line 2647 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 687 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = 0; }
#line 2653 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 691 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2659 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 696 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2665 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 701 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2671 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 706 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2677 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 708 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].intNumber) == LEFTSHIFT) {
        (yyval.node) = new LShiftBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      if ((yyvsp[-1].intNumber) == RIGHTSHIFT) {
        (yyval.node) = new RShiftBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2692 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 721 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = LEFTSHIFT; }
#line 2698 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 723 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = RIGHTSHIFT; }
#line 2704 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 727 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2710 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 729 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].intNumber) == PLUS) {
        (yyval.node) = new AddBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      if ((yyvsp[-1].intNumber) == MINUS) {
        (yyval.node) = new SubBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2725 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 742 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.intNumber) = PLUS;
    }
#line 2733 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 746 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.intNumber) = MINUS;
    }
#line 2741 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 752 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2749 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 756 "includes/parse.y" /* yacc.c:1646  */
    {
      switch((yyvsp[-1].intNumber)) {
        case STAR:
          (yyval.node) = new MulBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case SLASH:
          (yyval.node) = new DivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case PERCENT:
          (yyval.node) = new ModBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case DOUBLESLASH:
          (yyval.node) = new FlrDivBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        default:
          break;
      }
    }
#line 2776 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 781 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = STAR; }
#line 2782 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 783 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = SLASH; }
#line 2788 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 785 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PERCENT; }
#line 2794 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 787 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = DOUBLESLASH; }
#line 2800 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 791 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].intNumber) == PLUS) {
        (yyval.node) = (yyvsp[0].node);
      }
      if ((yyvsp[-1].intNumber) == MINUS) {
        (yyval.node) = new MinusUnaryNode((yyvsp[0].node));
        pool.add((yyval.node));
      }
      if ((yyvsp[-1].intNumber) == TILDE) {
        (yyval.node) = new TildeUnaryNode((yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2818 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 805 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2826 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 811 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = PLUS; }
#line 2832 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 813 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = MINUS; }
#line 2838 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 815 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.intNumber) = TILDE; }
#line 2844 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 819 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2853 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 824 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[0].node) == NULL) {
        (yyval.node) = (yyvsp[-1].node);
      }
      else {
        (yyval.node) = new CallNode(reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent(), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2867 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 836 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2873 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 838 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2879 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 842 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2885 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 844 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2891 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 846 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2897 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 848 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2903 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 850 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 2913 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 856 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2919 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 858 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2925 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 860 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new IntLiteral((yyvsp[0].intNumber));
      pool.add((yyval.node));
    }
#line 2934 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 865 "includes/parse.y" /* yacc.c:1646  */
    {
      (yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
      pool.add((yyval.node));
    }
#line 2943 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 872 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2949 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 874 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2955 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 878 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2961 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 880 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2967 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 900 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 2973 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 902 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 2979 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 910 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ArgNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node));
      }
    }
#line 2991 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 918 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2997 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 920 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3003 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 957 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-2].node); }
#line 3009 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 959 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3015 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 987 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-1].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-1].vec);
      }
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 3029 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 286:
#line 999 "includes/parse.y" /* yacc.c:1646  */
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 3043 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1009 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.vec) = NULL; }
#line 3049 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1014 "includes/parse.y" /* yacc.c:1646  */
    {}
#line 3055 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1022 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3061 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1024 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3067 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1026 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3073 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1030 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 3079 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1032 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3085 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1056 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3091 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1058 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3097 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1070 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 3103 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1072 "includes/parse.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3109 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 3113 "parse.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1079 "includes/parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
