/* A Bison parser, made by GNU Bison 3.4.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.4.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "includes/parse.y"

  #include "includes/ast.h"
  #include <cmath>
  #include <iostream>
  #include <vector>

  extern int yylex (void);
  extern char *yytext;
  void yyerror (const char *);

  PoolOfNodes& pool = PoolOfNodes::getInstance();

#line 83 "parse.tab.c"

# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    EQEQEQUAL = 284,
    EXCEPT = 285,
    EXEC = 286,
    FINALLY = 287,
    FOR = 288,
    FROM = 289,
    GLOBAL = 290,
    GREATER = 291,
    GREATEREQUAL = 292,
    GRLT = 293,
    IF = 294,
    IMPORT = 295,
    IN = 296,
    INDENT = 297,
    IS = 298,
    LAMBDA = 299,
    LBRACE = 300,
    LEFTSHIFTEQUAL = 301,
    LESS = 302,
    LESSEQUAL = 303,
    LPAR = 304,
    LSQB = 305,
    MINEQUAL = 306,
    NEWLINE = 307,
    NOT = 308,
    NOTEQUAL = 309,
    NUMBER = 310,
    OR = 311,
    PASS = 312,
    PERCENTEQUAL = 313,
    PLUSEQUAL = 314,
    PRINT = 315,
    RAISE = 316,
    RBRACE = 317,
    RETURN = 318,
    RIGHTSHIFTEQUAL = 319,
    RPAR = 320,
    RSQB = 321,
    SEMI = 322,
    SLASHEQUAL = 323,
    STAREQUAL = 324,
    STRING = 325,
    TILDE = 326,
    TRY = 327,
    VBAREQUAL = 328,
    WHILE = 329,
    WITH = 330,
    YIELD = 331,
    INT = 332,
    FLOAT = 333,
    NAME = 334,
    EQUAL = 335,
    LEFTSHIFT = 336,
    RIGHTSHIFT = 337,
    PLUS = 338,
    MINUS = 339,
    STAR = 340,
    SLASH = 341,
    PERCENT = 342,
    DOUBLESLASH = 343,
    DOUBLESTAR = 344
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

#line 225 "parse.tab.c"

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
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
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
#  define YYSIZE_T unsigned
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
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


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#define YYLAST   913

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  318
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  486

#define YYUNDEFTOK  2
#define YYMAXUTOK   344

/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
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
      85,    86,    87,    88,    89
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    68,    71,    72,    77,    78,    81,    82,
      85,    87,    91,    92,    95,    96,    99,   105,   113,   121,
     125,   127,   139,   141,   145,   155,   159,   160,   163,   164,
     167,   169,   173,   179,   183,   184,   187,   188,   191,   193,
     197,   198,   201,   202,   205,   207,   209,   211,   213,   215,
     217,   219,   221,   225,   305,   310,   314,   316,   320,   325,
     329,   331,   333,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   355,   360,   364,   366,   370,   372,   376,   377,
     380,   381,   384,   387,   390,   392,   394,   396,   398,   402,
     405,   408,   413,   420,   423,   424,   427,   428,   431,   432,
     435,   436,   439,   442,   445,   446,   449,   450,   451,   454,
     455,   458,   459,   462,   463,   466,   467,   470,   471,   474,
     475,   478,   481,   482,   485,   486,   489,   490,   493,   495,
     497,   499,   501,   503,   505,   507,   511,   521,   533,   538,
     542,   552,   564,   565,   568,   569,   572,   573,   576,   577,
     580,   581,   584,   587,   588,   591,   592,   595,   596,   599,
     600,   603,   604,   607,   609,   617,   622,   629,   630,   633,
     634,   637,   638,   641,   642,   645,   647,   651,   653,   657,
     659,   665,   667,   673,   677,   681,   683,   724,   726,   728,
     730,   732,   734,   736,   738,   740,   742,   744,   746,   750,
     752,   759,   761,   768,   770,   777,   779,   792,   794,   798,
     800,   813,   817,   823,   827,   852,   854,   856,   858,   862,
     876,   882,   884,   886,   890,   895,   907,   909,   913,   915,
     917,   919,   921,   927,   929,   931,   936,   943,   945,   949,
     951,   955,   956,   959,   960,   963,   964,   971,   972,   975,
     977,   981,   982,   985,   993,   995,   999,  1000,  1003,  1004,
    1007,  1008,  1009,  1012,  1013,  1016,  1017,  1020,  1021,  1024,
    1025,  1028,  1029,  1032,  1034,  1038,  1039,  1042,  1043,  1046,
    1047,  1050,  1051,  1054,  1055,  1058,  1059,  1062,  1074,  1084,
    1088,  1089,  1093,  1094,  1097,  1099,  1101,  1105,  1107,  1111,
    1112,  1115,  1116,  1119,  1120,  1123,  1124,  1127,  1128,  1131,
    1133,  1137,  1138,  1141,  1142,  1145,  1147,  1151,  1152
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
  "DEF", "COMPONENT", "DEL", "DOT", "DOUBLESLASHEQUAL", "DOUBLESTAREQUAL",
  "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQEQEQUAL", "EXCEPT", "EXEC",
  "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER", "GREATEREQUAL", "GRLT",
  "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LBRACE",
  "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR", "LSQB", "MINEQUAL",
  "NEWLINE", "NOT", "NOTEQUAL", "NUMBER", "OR", "PASS", "PERCENTEQUAL",
  "PLUSEQUAL", "PRINT", "RAISE", "RBRACE", "RETURN", "RIGHTSHIFTEQUAL",
  "RPAR", "RSQB", "SEMI", "SLASHEQUAL", "STAREQUAL", "STRING", "TILDE",
  "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "INT", "FLOAT", "NAME",
  "EQUAL", "LEFTSHIFT", "RIGHTSHIFT", "PLUS", "MINUS", "STAR", "SLASH",
  "PERCENT", "DOUBLESLASH", "DOUBLESTAR", "$accept", "start", "file_input",
  "pick_NEWLINE_stmt", "star_NEWLINE_stmt", "decorator", "opt_arglist",
  "decorators", "decorated", "funcdef", "parameters", "varargslist",
  "opt_EQUAL_test", "star_fpdef_COMMA", "opt_DOUBLESTAR_NAME",
  "pick_STAR_DOUBLESTAR", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "pick_yield_expr_testlist", "star_EQUAL",
  "augassign", "print_stmt", "star_COMMA_test", "opt_test",
  "plus_COMMA_test", "opt_test_2", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "yield_stmt", "raise_stmt",
  "opt_COMMA_test", "opt_test_3", "import_stmt", "import_name",
  "import_from", "pick_dotted_name", "pick_STAR_import", "import_as_name",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

#define YYPACT_NINF -324

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-324)))

#define YYTABLE_NINF -265

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -324,    75,  -324,   424,  -324,   778,     9,   778,  -324,    23,
    -324,    26,    31,   796,  -324,   796,   796,  -324,    34,   778,
       9,   110,   778,   695,   778,  -324,   205,  -324,  -324,   714,
     778,   778,  -324,  -324,   113,   778,   778,   778,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,   112,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,    -1,   134,  -324,   859,   137,   133,
     148,   -34,    35,    78,  -324,   796,  -324,  -324,    84,  -324,
     198,  -324,  -324,   141,  -324,    28,  -324,    30,    17,   124,
     124,   137,  -324,    19,   136,   139,     0,  -324,   160,  -324,
     164,    37,   778,   166,   -16,    20,   120,  -324,   150,  -324,
     123,  -324,  -324,   152,   126,  -324,  -324,   778,  -324,  -324,
     174,  -324,   337,   178,  -324,   189,  -324,  -324,  -324,  -324,
      32,   182,   205,   205,  -324,   205,  -324,  -324,  -324,  -324,
    -324,  -324,   147,  -324,  -324,   158,  -324,   796,   796,   796,
     796,  -324,  -324,   796,  -324,  -324,   796,  -324,  -324,  -324,
    -324,   796,  -324,    22,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,   695,   695,   778,
     125,   138,  -324,  -324,   778,   337,   778,   140,   187,   192,
     196,   778,   778,   -21,   168,   193,   200,   337,     9,   144,
    -324,   778,    -9,  -324,   151,   153,  -324,   149,   778,   796,
     203,  -324,  -324,  -324,   203,  -324,  -324,   796,   203,  -324,
    -324,   204,   203,   778,  -324,   184,  -324,    55,   337,   135,
     796,  -324,   658,   778,    25,   134,  -324,  -324,  -324,   137,
     133,   148,   -34,    35,    78,  -324,   154,   138,   759,   796,
    -324,   155,  -324,  -324,  -324,  -324,  -324,  -324,   162,  -324,
      12,  -324,  -324,  -324,   169,  -324,   172,   337,   337,   796,
     226,   228,   167,   239,  -324,  -324,  -324,  -324,   180,  -324,
    -324,  -324,  -324,  -324,   186,   231,  -324,   778,   247,   150,
     223,   778,  -324,  -324,   232,  -324,   778,   253,  -324,  -324,
     226,   580,   778,   257,   114,   259,   251,   337,   778,   137,
    -324,  -324,  -324,   778,  -324,   220,   264,   275,   225,  -324,
     278,  -324,   695,   243,   778,   778,    -6,  -324,   281,   283,
    -324,  -324,  -324,   137,   778,  -324,   337,   234,   224,   289,
    -324,   146,   294,  -324,   222,  -324,  -324,    11,  -324,   299,
    -324,  -324,   205,   815,  -324,   778,  -324,  -324,  -324,   502,
      36,   337,   304,   288,   308,   337,   309,  -324,  -324,  -324,
    -324,   306,  -324,   310,   778,  -324,  -324,  -324,  -324,   778,
    -324,  -324,   267,  -324,   337,  -324,   307,  -324,  -324,   167,
     778,   320,    -9,   258,   778,  -324,   102,   321,    53,   322,
    -324,   284,  -324,  -324,  -324,  -324,  -324,   778,  -324,  -324,
     337,   326,  -324,   337,  -324,   337,  -324,   272,  -324,   330,
     331,  -324,  -324,   338,  -324,   342,   337,  -324,  -324,   344,
     815,  -324,  -324,  -324,   815,   346,   815,  -324,  -324,  -324,
     815,   336,  -324,  -324,   337,  -324,  -324,  -324,   778,  -324,
    -324,    59,  -324,   337,   337,  -324,   778,    67,  -324,   815,
      53,  -324,   815,  -324,  -324,  -324,   778,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    89,     0,
      90,     0,     0,     0,     3,     0,     0,   318,     0,     0,
       0,    25,   244,   240,   242,     4,     0,   233,    83,    77,
      95,    92,   246,   223,     0,     0,     0,   316,   235,   236,
     232,   221,   222,     6,    13,     0,   135,   133,     5,    38,
      43,    44,    45,    46,    47,    48,    84,    85,    86,    88,
      87,    49,   100,   101,    50,    51,    52,    39,   128,   129,
     130,   131,   132,    75,   178,   179,   181,   184,   185,   199,
     201,   203,   205,   209,   213,     0,   220,   227,   234,   176,
      55,   134,    93,   127,   119,     0,   313,     0,     0,     0,
       0,   272,    82,   125,     0,     0,     0,   123,     0,   117,
     102,   112,     0,     0,     0,    75,     0,   243,    75,   239,
       0,   238,   237,    75,     0,   241,   183,     0,    72,    75,
      99,    91,     0,     0,   154,   156,   315,    12,    15,    14,
       0,   274,     0,     0,   175,     0,   189,   190,   188,   191,
     193,   195,   197,   187,   192,     0,   194,     0,     0,     0,
       0,   207,   208,     0,   211,   212,     0,   215,   216,   217,
     218,     0,   219,   225,   245,    65,    67,    71,    70,    68,
      61,    64,    60,    69,    63,    62,    66,     0,     0,     0,
       0,   289,     9,   231,     0,     0,   286,    25,     0,     0,
     270,     0,     0,     0,   317,   104,   121,     0,     0,     0,
     252,     0,     0,    32,     0,     0,    20,    23,     0,     0,
      31,   276,   281,   230,    31,   249,   228,     0,    31,   247,
     229,    81,    31,     0,    94,     0,   163,     0,     0,     0,
       0,    41,     0,   273,     0,   180,   182,   198,   196,   186,
     200,   202,   204,   206,   210,   214,     0,   289,   264,     0,
     226,    59,    54,    57,    56,    53,   126,   120,     0,    10,
       0,   314,   284,   285,     0,    19,     0,     0,     0,   269,
      97,     0,     0,   110,   106,   103,   116,   108,     0,   139,
     118,   111,   251,    37,     0,    27,    29,     0,    31,   278,
       0,    30,   282,   250,     0,   248,     0,    31,    73,    76,
      97,     0,   158,     0,   149,     0,   141,     0,     0,   155,
      40,    42,    74,     0,   255,     0,     0,   261,     0,   259,
       0,   224,     0,     0,     0,     0,   300,   287,    31,     0,
      18,    16,    17,   271,     0,   124,     0,     0,     0,   114,
     122,   137,    35,    33,     0,    28,    22,    24,    21,    31,
     275,   279,     0,     0,    79,    30,    80,    98,   166,     0,
     162,     0,     0,   151,     0,     0,     0,   152,   153,   177,
     253,     0,   254,   257,   264,    58,     8,   291,   296,     0,
     297,   299,   288,   294,     0,    96,   143,   107,   109,   113,
       0,     0,    34,     0,    30,   280,   310,    25,   304,   168,
     172,   171,    78,   164,   165,   159,   160,     0,   157,   145,
       0,     0,   144,     0,   147,     0,   260,   256,   263,   266,
     293,   298,   283,     0,   115,     0,     0,    36,    26,     0,
       0,   309,   307,   308,     0,     0,     0,   303,   301,   302,
       0,    31,   161,   148,     0,   146,   140,   258,   268,   262,
     265,     0,   295,     0,     0,   136,     0,   312,   174,     0,
     306,   170,    30,   167,   150,   267,     0,   290,   142,   138,
     277,   311,   173,   305,   169,   292
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,  -324,  -324,  -324,   317,   106,  -324,  -324,   319,
     265,  -189,  -324,  -324,  -324,  -324,  -183,  -205,  -324,  -324,
    -291,    -2,  -324,   127,  -324,   185,    42,  -324,  -324,    38,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,    56,  -324,  -324,  -324,  -324,  -324,  -324,   -29,   170,
      93,  -324,  -324,    10,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,    58,
      66,  -324,  -324,  -184,  -324,  -324,  -324,  -323,  -324,    -5,
    -324,  -138,   240,   -11,  -324,  -324,    21,   227,   229,   233,
    -324,   238,  -324,   230,  -324,   -73,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,   -36,    18,  -324,  -324,   -10,  -324,   -28,  -324,  -324,
    -324,  -324,   358,  -324,  -324,  -324,  -324,  -324,  -324,   -57,
    -324,   -65,   286,  -324,   -61,  -105,  -324,  -324,   -18,  -324
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    43,     3,    44,   268,    45,    46,    47,
     198,   113,   298,   114,   355,   216,   302,   217,   294,   352,
      48,   236,   140,    50,    51,   261,   262,   188,    52,   141,
     128,   307,   308,    53,    54,    55,    56,    57,    58,    59,
      60,   345,   234,    61,    62,    63,   105,   285,   286,   109,
     287,   349,   110,   111,    64,   206,    65,    66,    67,    68,
     351,    69,    70,    71,   314,   373,   422,    72,   239,   134,
     315,   417,   418,   237,   369,   408,   451,   409,   410,    73,
     144,    74,    75,    76,    77,   157,    78,    79,    80,    81,
     163,    82,   166,    83,   171,    84,    85,    86,   173,    87,
     119,   120,   124,   116,    88,   125,   121,    89,   260,   328,
     383,   329,   330,   459,   460,   102,   200,    90,   117,   359,
     360,   221,    91,   274,   269,   270,   430,   462,   337,   338,
     390,   447,   448,   449,   441,   442,   443,    97,    92,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    49,    96,   131,   244,   122,   104,   293,   276,   136,
     222,   272,   172,   225,   108,   126,    95,   115,   118,   123,
     368,     7,   204,   289,   129,   130,   -30,   219,   282,   158,
     133,   135,   195,   212,   101,   218,   103,   101,   142,   193,
     212,   303,   415,   209,   256,   305,   194,   161,   162,   309,
     190,   323,   416,   219,   316,   143,    21,    22,   283,   190,
     201,    23,    24,   213,   284,    26,   196,    27,     7,   214,
     213,   257,   258,   215,   389,     4,   -30,   191,   414,    94,
     192,   143,    32,    33,   241,   312,   227,   313,    94,    38,
      39,    40,   446,   341,   342,    41,    42,   334,   255,   242,
     219,   335,    98,    21,    22,    99,   440,   210,    23,    24,
     100,   259,    26,   107,    27,   358,   205,   467,   164,   165,
       6,   468,   231,   470,   366,   112,     9,   471,   132,    32,
      33,    11,    12,   377,   246,   219,    38,    39,    40,   145,
     372,   440,    41,    42,   312,   159,   482,   158,   476,   484,
     317,   318,   160,   220,   174,   393,   224,   189,   143,   263,
     263,   228,   396,   167,   168,   169,   170,   232,   273,   264,
     264,   400,   401,   197,   281,   207,   405,   202,   249,   203,
     208,   211,   223,   219,   266,   227,   331,   419,   226,   271,
     233,   424,   230,   238,   361,   240,   280,   437,   243,   248,
     247,   175,   277,   -11,   267,   275,   292,   278,  -105,   300,
     432,   176,   279,   299,     7,   190,   288,   304,   445,   301,
     306,   177,   178,   291,   406,   411,   311,   333,   310,   297,
     295,   391,   296,   324,   339,   332,   453,   340,   322,   455,
     101,   456,   344,   346,   179,   348,   283,   354,   101,   180,
      22,   353,   465,   327,    23,    24,   181,   182,    26,   350,
      27,   319,   183,   357,   362,   336,   184,   185,   473,   365,
     474,   186,   371,   363,   375,    32,    33,   376,   187,   478,
     479,     7,    38,    39,    40,   380,   381,  -264,    41,    42,
    -263,   382,   356,   384,   326,   386,   322,   392,   394,   397,
     343,   364,   411,   398,   263,   399,   411,   370,   411,    49,
     402,   403,   411,   135,   264,   404,    21,    22,   379,   420,
     421,    23,    24,   423,   425,    26,   427,    27,   426,   387,
     388,   411,   -30,   433,   411,   436,   444,   438,   450,   395,
     143,   454,    32,    33,     5,   458,     7,   461,     8,    38,
      39,    40,   472,   463,    10,    41,    42,   464,    13,   466,
     412,   469,   137,   325,   138,   199,   367,    49,    15,   321,
     434,    17,    18,   265,   385,   347,   378,    20,   290,   428,
     374,    21,    22,   245,   431,   250,    23,    24,   251,   235,
      26,   457,    27,   252,    28,   435,   254,    29,    30,   439,
      31,   253,   429,   139,   477,   483,   481,    32,    33,   229,
       0,     0,   452,    37,    38,    39,    40,     0,     0,     0,
      41,    42,   327,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     0,     8,     0,     0,     9,     0,
       0,    10,     0,    11,    12,    13,     0,     0,     0,     0,
       0,    14,     0,   475,     0,    15,   336,    16,    17,    18,
       0,   480,     0,    19,    20,     0,     0,     0,    21,    22,
       0,   485,     0,    23,    24,     0,    25,    26,     0,    27,
       0,    28,     0,     0,    29,    30,     0,    31,     0,     0,
       0,     0,     0,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    40,     0,     0,     0,    41,    42,     5,
       6,     7,     0,     8,     0,     0,     9,     0,     0,    10,
     413,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,    16,    17,    18,     0,     0,
       0,    19,    20,     0,     0,     0,    21,    22,     0,     0,
       0,    23,    24,     0,     0,    26,     0,    27,     0,    28,
       0,     0,    29,    30,     0,    31,     0,     0,     0,     0,
       0,     0,    32,    33,    34,     0,    35,    36,    37,    38,
      39,    40,     0,     0,     0,    41,    42,     5,     6,     7,
       0,     8,     0,     0,     9,     0,     0,    10,     0,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,     0,    16,    17,    18,     0,     0,     0,    19,
      20,     0,     0,     0,    21,    22,     0,     0,     0,    23,
      24,     0,     0,    26,     0,    27,     0,    28,     0,     0,
      29,    30,     0,    31,     0,     0,     0,     0,     0,     0,
      32,    33,    34,     0,    35,    36,    37,    38,    39,    40,
       0,     0,     0,    41,    42,     5,     0,     7,     0,     8,
       0,     0,     0,     0,     0,    10,     0,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,    17,    18,     0,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     7,     0,     0,    23,    24,     0,
     320,    26,     0,    27,     0,    28,     0,     0,    29,    30,
       0,    31,     0,     7,     0,     0,     0,     0,    32,    33,
       0,     0,     0,     0,    37,    38,    39,    40,     0,    21,
      22,    41,    42,     0,    23,    24,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     0,    23,    24,    32,    33,    26,     7,    27,
       0,    37,    38,    39,    40,     0,     0,     0,    41,    42,
       0,   326,     0,     0,    32,    33,     0,     7,     0,     0,
       0,    38,    39,    40,     0,     0,   127,    41,    42,     0,
       0,     0,     0,    21,    22,     7,     0,     0,    23,    24,
       0,     0,    26,     0,    27,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     7,     0,     0,    23,    24,    32,
      33,    26,     0,    27,     0,     0,    38,    39,    40,     0,
       0,    22,    41,    42,     0,    23,    24,     0,    32,    33,
       0,    27,     0,     0,     0,    38,    39,    40,     0,   407,
      22,    41,    42,     0,    23,    24,    32,    33,    26,     0,
      27,     0,     0,    38,    39,    40,     0,     0,     0,    41,
      42,     0,     0,     0,     0,    32,    33,   146,   147,     0,
       0,     0,    38,    39,    40,   148,   149,   150,    41,    42,
     151,     0,   152,     0,     0,     0,   153,   154,     0,     0,
       0,     0,   155,   156
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,    31,   142,    23,    16,   212,   197,    37,
     115,   195,    85,   118,    19,    26,     6,    22,    23,    24,
     311,     9,    22,   207,    29,    30,    15,    33,    49,    10,
      35,    36,    15,    49,    13,    15,    15,    16,    39,     9,
      49,   224,     6,     6,    22,   228,    16,    81,    82,   232,
      22,    26,    16,    33,   238,    56,    44,    45,    79,    22,
      41,    49,    50,    79,    85,    53,    49,    55,     9,    85,
      79,    49,    50,    89,    80,     0,    65,    49,   369,    79,
      52,    56,    70,    71,    52,    30,    33,    32,    79,    77,
      78,    79,    39,   277,   278,    83,    84,    85,   171,    67,
      33,    89,    79,    44,    45,    79,    39,   112,    49,    50,
      79,    89,    53,    79,    55,   298,   106,   440,    83,    84,
       8,   444,   127,   446,   307,    15,    14,   450,    15,    70,
      71,    19,    20,   317,   145,    33,    77,    78,    79,     5,
      26,    39,    83,    84,    30,    12,   469,    10,    89,   472,
      15,    16,     4,   115,    70,   338,   118,    16,    56,   187,
     188,   123,   346,    85,    86,    87,    88,   129,   196,   187,
     188,    25,    26,    49,   202,    15,   359,    41,   157,    40,
      16,    15,    62,    33,   189,    33,   259,   371,    65,   194,
      16,   375,    66,    15,   299,     6,   201,   402,    16,    41,
      53,     3,    15,    65,    79,    65,   211,    15,    40,   219,
     394,    13,    16,   218,     9,    22,    16,   227,   407,    16,
      16,    23,    24,    79,   362,   363,    42,    65,   233,    80,
      79,   336,    79,    79,    65,    80,   420,    65,   243,   423,
     219,   425,    16,    15,    46,     6,    79,    16,   227,    51,
      45,    65,   436,   258,    49,    50,    58,    59,    53,    79,
      55,   240,    64,    16,    41,   270,    68,    69,   451,    16,
     454,    73,    15,    41,    15,    70,    71,    26,    80,   463,
     464,     9,    77,    78,    79,    65,    22,    15,    83,    84,
      15,    66,   297,    15,    22,    52,   301,    16,    15,    65,
     279,   306,   440,    79,   332,    16,   444,   312,   446,   311,
      16,    89,   450,   318,   332,    16,    44,    45,   323,    15,
      32,    49,    50,    15,    15,    53,    16,    55,    22,   334,
     335,   469,    65,    26,   472,    15,    15,    79,    16,   344,
      56,    15,    70,    71,     7,    15,     9,    16,    11,    77,
      78,    79,    16,    15,    17,    83,    84,    15,    21,    15,
     365,    15,    45,   257,    45,   100,   310,   369,    31,   242,
     399,    34,    35,   188,   332,   282,   318,    40,   208,   384,
     314,    44,    45,   143,   389,   158,    49,    50,   159,    52,
      53,   427,    55,   160,    57,   400,   166,    60,    61,   404,
      63,   163,   384,    45,   461,   470,   467,    70,    71,   123,
      -1,    -1,   417,    76,    77,    78,    79,    -1,    -1,    -1,
      83,    84,   427,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     7,     8,     9,    -1,    11,    -1,    -1,    14,    -1,
      -1,    17,    -1,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,   458,    -1,    31,   461,    33,    34,    35,
      -1,   466,    -1,    39,    40,    -1,    -1,    -1,    44,    45,
      -1,   476,    -1,    49,    50,    -1,    52,    53,    -1,    55,
      -1,    57,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    83,    84,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    34,    35,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    55,    -1,    57,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    -1,    74,    75,    76,    77,
      78,    79,    -1,    -1,    -1,    83,    84,     7,     8,     9,
      -1,    11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    34,    35,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    49,
      50,    -1,    -1,    53,    -1,    55,    -1,    57,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    74,    75,    76,    77,    78,    79,
      -1,    -1,    -1,    83,    84,     7,    -1,     9,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,     9,    -1,    -1,    49,    50,    -1,
      52,    53,    -1,    55,    -1,    57,    -1,    -1,    60,    61,
      -1,    63,    -1,     9,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    44,
      45,    83,    84,    -1,    49,    50,    -1,    -1,    53,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    49,    50,    70,    71,    53,     9,    55,
      -1,    76,    77,    78,    79,    -1,    -1,    -1,    83,    84,
      -1,    22,    -1,    -1,    70,    71,    -1,     9,    -1,    -1,
      -1,    77,    78,    79,    -1,    -1,    82,    83,    84,    -1,
      -1,    -1,    -1,    44,    45,     9,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,     9,    -1,    -1,    49,    50,    70,
      71,    53,    -1,    55,    -1,    -1,    77,    78,    79,    -1,
      -1,    45,    83,    84,    -1,    49,    50,    -1,    70,    71,
      -1,    55,    -1,    -1,    -1,    77,    78,    79,    -1,    44,
      45,    83,    84,    -1,    49,    50,    70,    71,    53,    -1,
      55,    -1,    -1,    77,    78,    79,    -1,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    70,    71,    28,    29,    -1,
      -1,    -1,    77,    78,    79,    36,    37,    38,    83,    84,
      41,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    53,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    91,    92,    94,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    21,    27,    31,    33,    34,    35,    39,
      40,    44,    45,    49,    50,    52,    53,    55,    57,    60,
      61,    63,    70,    71,    72,    74,    75,    76,    77,    78,
      79,    83,    84,    93,    95,    97,    98,    99,   110,   111,
     113,   114,   118,   123,   124,   125,   126,   127,   128,   129,
     130,   133,   134,   135,   144,   146,   147,   148,   149,   151,
     152,   153,   157,   169,   171,   172,   173,   174,   176,   177,
     178,   179,   181,   183,   185,   186,   187,   189,   194,   197,
     207,   212,   228,   169,    79,   143,   169,   227,    79,    79,
      79,   176,   205,   176,   205,   136,   229,    79,   169,   139,
     142,   143,    15,   101,   103,   169,   193,   208,   169,   190,
     191,   196,   228,   169,   192,   195,   173,    82,   120,   169,
     169,   207,    15,   169,   159,   169,   207,    95,    99,   212,
     112,   119,    39,    56,   170,     5,    28,    29,    36,    37,
      38,    41,    43,    47,    48,    53,    54,   175,    10,    12,
       4,    81,    82,   180,    83,    84,   182,    85,    86,    87,
      88,   184,   185,   188,    70,     3,    13,    23,    24,    46,
      51,    58,    59,    64,    68,    69,    73,    80,   117,    16,
      22,    49,    52,     9,    16,    15,    49,    49,   100,   100,
     206,    41,    41,    40,    22,   143,   145,    15,    16,     6,
     169,    15,    49,    79,    85,    89,   105,   107,    15,    33,
     119,   211,   225,    62,   119,   225,    65,    33,   119,   222,
      66,   169,   119,    16,   132,    52,   111,   163,    15,   158,
       6,    52,    67,    16,   171,   172,   173,    53,    41,   176,
     177,   178,   179,   181,   183,   185,    22,    49,    50,    89,
     198,   115,   116,   207,   228,   115,   169,    79,    96,   214,
     215,   169,   163,   207,   213,    65,   101,    15,    15,    16,
     169,   207,    49,    79,    85,   137,   138,   140,    16,   163,
     139,    79,   169,   107,   108,    79,    79,    80,   102,   169,
     205,    16,   106,   106,   205,   106,    16,   121,   122,   106,
     169,    42,    30,    32,   154,   160,   163,    15,    16,   176,
      52,   113,   169,    26,    79,    96,    22,   169,   199,   201,
     202,   185,    80,    65,    85,    89,   169,   218,   219,    65,
      65,   163,   163,   176,    16,   131,    15,   140,     6,   141,
      79,   150,   109,    65,    16,   104,   169,    16,   106,   209,
     210,   225,    41,    41,   169,    16,   106,   131,   110,   164,
     169,    15,    26,   155,   160,    15,    26,   163,   159,   169,
      65,    22,    66,   200,    15,   116,    52,   169,   169,    80,
     220,   225,    16,   106,    15,   169,   163,    65,    79,    16,
      25,    26,    16,    89,    16,   106,   171,    44,   165,   167,
     168,   171,   169,    18,   110,     6,    16,   161,   162,   163,
      15,    32,   156,    15,   163,    15,    22,    16,   169,   202,
     216,   169,   163,    26,   138,   169,    15,   107,    79,   169,
      39,   224,   225,   226,    15,   101,    39,   221,   222,   223,
      16,   166,   169,   163,    15,   163,   163,   201,    15,   203,
     204,    16,   217,    15,    15,   163,    15,   167,   167,    15,
     167,   167,    16,   106,   163,   169,    89,   219,   163,   163,
     169,   224,   167,   221,   167,   169
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   121,   121,
     122,   122,   123,   124,   125,   125,   125,   125,   125,   126,
     127,   128,   128,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   135,   136,   136,   137,   137,   137,   138,
     138,   139,   139,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   148,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   158,   159,   159,   160,   160,   161,
     161,   162,   162,   163,   163,   164,   164,   165,   165,   166,
     166,   167,   167,   168,   168,   169,   169,   170,   170,   171,
     171,   172,   172,   173,   173,   174,   174,   175,   175,   175,
     175,   175,   175,   175,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   178,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   183,   184,   184,   184,   184,   185,
     185,   186,   186,   186,   187,   187,   188,   188,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   197,   198,   198,   198,   199,   199,   200,   200,
     201,   201,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   211,   211,   212,   212,   213,   213,   214,   215,   215,
     216,   216,   217,   217,   218,   218,   218,   219,   219,   220,
     220,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     225,   226,   226,   227,   227,   228,   228,   229,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     6,     3,
       1,     0,     2,     1,     2,     2,     5,     5,     3,     2,
       2,     4,     2,     0,     4,     0,     3,     0,     3,     2,
       1,     0,     1,     3,     3,     2,     3,     0,     1,     1,
       4,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     3,     0,     3,     0,     3,     2,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     4,     2,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     2,     3,     0,     1,     3,     1,
       3,     3,     3,     0,     5,     2,     4,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     8,     5,     5,     0,
       7,     4,     9,     6,     6,     6,     4,     3,     3,     0,
       3,     0,     5,     3,     0,     3,     1,     3,     1,     1,
       1,     2,     0,     1,     4,     2,     1,     3,     1,     3,
       2,     1,     1,     4,     3,     2,     1,     4,     0,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     4,     2,     2,     0,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     0,     1,     0,     2,     1,     2,     3,     2,
       3,     4,     3,     3,     3,     2,     3,     2,     3,     0,
       3,     1,     4,     1,     0,     1,     0,     2,     1,     3,
       2,     3,     0,     3,     2,     4,     2,     5,     0,     1,
       2,     1,     2,     7,     4,     1,     0,     2,     3,     0,
       3,     0,     3,     0,     2,     4,     2,     2,     3,     1,
       0,     1,     1,     5,     4,     3,     2,     1,     1,     5,
       4,     3,     2,     1,     3,     2,     1,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
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
  unsigned long yylno = yyrline[yyrule];
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
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
            else
              goto append;

          append:
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

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
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
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
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
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yynewstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

# if defined yyoverflow
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
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
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
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5:
#line 73 "includes/parse.y"
    { (yyvsp[0].node)->eval(); }
#line 1925 "parse.tab.c"
    break;

  case 10:
#line 86 "includes/parse.y"
    { (yyval.vec) = (yyvsp[0].vec); }
#line 1931 "parse.tab.c"
    break;

  case 11:
#line 88 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1937 "parse.tab.c"
    break;

  case 16:
#line 100 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1947 "parse.tab.c"
    break;

  case 17:
#line 106 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1957 "parse.tab.c"
    break;

  case 18:
#line 114 "includes/parse.y"
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ParaNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node));
      }
    }
#line 1969 "parse.tab.c"
    break;

  case 19:
#line 122 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1975 "parse.tab.c"
    break;

  case 20:
#line 126 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1981 "parse.tab.c"
    break;

  case 21:
#line 128 "includes/parse.y"
    {
      if ((yyvsp[-3].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-3].vec);
      }
      (yyval.vec)->push_back((yyvsp[-2].node));
    }
#line 1995 "parse.tab.c"
    break;

  case 22:
#line 140 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2001 "parse.tab.c"
    break;

  case 23:
#line 142 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2007 "parse.tab.c"
    break;

  case 24:
#line 146 "includes/parse.y"
    {
      if ((yyvsp[-3].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-3].vec);
      }
      (yyval.vec)->push_back((yyvsp[-2].node));
    }
#line 2021 "parse.tab.c"
    break;

  case 25:
#line 156 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 2027 "parse.tab.c"
    break;

  case 30:
#line 168 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2033 "parse.tab.c"
    break;

  case 31:
#line 170 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2039 "parse.tab.c"
    break;

  case 32:
#line 174 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 2049 "parse.tab.c"
    break;

  case 33:
#line 180 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2055 "parse.tab.c"
    break;

  case 38:
#line 192 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2061 "parse.tab.c"
    break;

  case 39:
#line 194 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2067 "parse.tab.c"
    break;

  case 44:
#line 206 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2073 "parse.tab.c"
    break;

  case 45:
#line 208 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2079 "parse.tab.c"
    break;

  case 46:
#line 210 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2085 "parse.tab.c"
    break;

  case 47:
#line 212 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2091 "parse.tab.c"
    break;

  case 48:
#line 214 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2097 "parse.tab.c"
    break;

  case 49:
#line 216 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2103 "parse.tab.c"
    break;

  case 50:
#line 218 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2109 "parse.tab.c"
    break;

  case 51:
#line 220 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2115 "parse.tab.c"
    break;

  case 52:
#line 222 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2121 "parse.tab.c"
    break;

  case 53:
#line 226 "includes/parse.y"
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
        case AMPEREQUAL:
          temp = new AmpersandBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case VBAREQUAL:
          temp = new BarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        case CIRCUMFLEXEQUAL:
          temp = new XorBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), temp);
          pool.add(temp);
          pool.add((yyval.node));
          break;
        default:
          break;
      }
    }
#line 2205 "parse.tab.c"
    break;

  case 54:
#line 306 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2214 "parse.tab.c"
    break;

  case 55:
#line 311 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2220 "parse.tab.c"
    break;

  case 56:
#line 315 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2226 "parse.tab.c"
    break;

  case 57:
#line 317 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2232 "parse.tab.c"
    break;

  case 58:
#line 321 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2241 "parse.tab.c"
    break;

  case 59:
#line 326 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2247 "parse.tab.c"
    break;

  case 60:
#line 330 "includes/parse.y"
    { (yyval.intNumber) = PLUSEQUAL; }
#line 2253 "parse.tab.c"
    break;

  case 61:
#line 332 "includes/parse.y"
    { (yyval.intNumber) = MINEQUAL; }
#line 2259 "parse.tab.c"
    break;

  case 62:
#line 334 "includes/parse.y"
    { (yyval.intNumber) = STAREQUAL; }
#line 2265 "parse.tab.c"
    break;

  case 63:
#line 336 "includes/parse.y"
    { (yyval.intNumber) = SLASHEQUAL; }
#line 2271 "parse.tab.c"
    break;

  case 64:
#line 338 "includes/parse.y"
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 2277 "parse.tab.c"
    break;

  case 65:
#line 340 "includes/parse.y"
    { (yyval.intNumber) = AMPEREQUAL; }
#line 2283 "parse.tab.c"
    break;

  case 66:
#line 342 "includes/parse.y"
    { (yyval.intNumber) = VBAREQUAL; }
#line 2289 "parse.tab.c"
    break;

  case 67:
#line 344 "includes/parse.y"
    { (yyval.intNumber) = CIRCUMFLEXEQUAL; }
#line 2295 "parse.tab.c"
    break;

  case 68:
#line 346 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFTEQUAL; }
#line 2301 "parse.tab.c"
    break;

  case 69:
#line 348 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFTEQUAL; }
#line 2307 "parse.tab.c"
    break;

  case 70:
#line 350 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 2313 "parse.tab.c"
    break;

  case 71:
#line 352 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 2319 "parse.tab.c"
    break;

  case 72:
#line 356 "includes/parse.y"
    {
      (yyval.node) = new PrintNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2328 "parse.tab.c"
    break;

  case 73:
#line 361 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2334 "parse.tab.c"
    break;

  case 74:
#line 365 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2340 "parse.tab.c"
    break;

  case 75:
#line 367 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2346 "parse.tab.c"
    break;

  case 76:
#line 371 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2352 "parse.tab.c"
    break;

  case 77:
#line 373 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2358 "parse.tab.c"
    break;

  case 84:
#line 391 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2364 "parse.tab.c"
    break;

  case 85:
#line 393 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2370 "parse.tab.c"
    break;

  case 86:
#line 395 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2376 "parse.tab.c"
    break;

  case 87:
#line 397 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2382 "parse.tab.c"
    break;

  case 88:
#line 399 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2388 "parse.tab.c"
    break;

  case 91:
#line 409 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2397 "parse.tab.c"
    break;

  case 92:
#line 414 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode(NULL);
      pool.add((yyval.node));
    }
#line 2406 "parse.tab.c"
    break;

  case 128:
#line 494 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2412 "parse.tab.c"
    break;

  case 129:
#line 496 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2418 "parse.tab.c"
    break;

  case 130:
#line 498 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2424 "parse.tab.c"
    break;

  case 131:
#line 500 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2430 "parse.tab.c"
    break;

  case 132:
#line 502 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2436 "parse.tab.c"
    break;

  case 133:
#line 504 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2442 "parse.tab.c"
    break;

  case 134:
#line 506 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2448 "parse.tab.c"
    break;

  case 135:
#line 508 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2454 "parse.tab.c"
    break;

  case 136:
#line 512 "includes/parse.y"
    {
      if ((yyvsp[-6].node)) {
        (yyval.node) = new IfNode((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2468 "parse.tab.c"
    break;

  case 137:
#line 522 "includes/parse.y"
    {
      if ((yyvsp[-3].node)) {
        (yyval.node) = new IfNode((yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), NULL);
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2482 "parse.tab.c"
    break;

  case 138:
#line 534 "includes/parse.y"
    {
      (yyval.node) = new ElifNode((yyvsp[-2].node),(yyvsp[0].node),(yyvsp[-4].node));
      pool.add((yyval.node));
    }
#line 2491 "parse.tab.c"
    break;

  case 139:
#line 539 "includes/parse.y"
    { (yyval.node)=NULL;}
#line 2497 "parse.tab.c"
    break;

  case 140:
#line 543 "includes/parse.y"
    {
    if ((yyvsp[-5].node)) {
      (yyval.node) = new WhileNode((yyvsp[-5].node), (yyvsp[-3].node));
      pool.add((yyval.node));
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
#line 2511 "parse.tab.c"
    break;

  case 141:
#line 553 "includes/parse.y"
    {
    if ((yyvsp[-2].node)) {
      (yyval.node) = new WhileNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
#line 2525 "parse.tab.c"
    break;

  case 163:
#line 608 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2531 "parse.tab.c"
    break;

  case 164:
#line 610 "includes/parse.y"
    {
      (yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
      delete (yyvsp[-1].vec);
      pool.add((yyval.node));
    }
#line 2541 "parse.tab.c"
    break;

  case 165:
#line 618 "includes/parse.y"
    {
      (yyval.vec) = (yyvsp[-1].vec);
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2550 "parse.tab.c"
    break;

  case 166:
#line 623 "includes/parse.y"
    {
      (yyval.vec) = new std::vector<Node*>();
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2559 "parse.tab.c"
    break;

  case 175:
#line 646 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2565 "parse.tab.c"
    break;

  case 176:
#line 648 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2571 "parse.tab.c"
    break;

  case 177:
#line 652 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2577 "parse.tab.c"
    break;

  case 178:
#line 654 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2583 "parse.tab.c"
    break;

  case 179:
#line 658 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2589 "parse.tab.c"
    break;

  case 180:
#line 660 "includes/parse.y"
    { (yyval.node) = new OrBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2597 "parse.tab.c"
    break;

  case 181:
#line 666 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2603 "parse.tab.c"
    break;

  case 182:
#line 668 "includes/parse.y"
    { (yyval.node) = new AndBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2611 "parse.tab.c"
    break;

  case 183:
#line 674 "includes/parse.y"
    {
    (yyval.node) = new NotUnaryNode((yyvsp[0].node));
    pool.add((yyval.node)); }
#line 2619 "parse.tab.c"
    break;

  case 184:
#line 678 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2625 "parse.tab.c"
    break;

  case 185:
#line 682 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2631 "parse.tab.c"
    break;

  case 186:
#line 684 "includes/parse.y"
    {
      switch((yyvsp[-1].intNumber)) {
        case EQEQUAL:
          (yyval.node) = new EqEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
          pool.add((yyval.node));
          break;
        case EQEQEQUAL:
          (yyval.node) = new EqEqEqualBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
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
#line 2674 "parse.tab.c"
    break;

  case 187:
#line 725 "includes/parse.y"
    { (yyval.intNumber) = LESS; }
#line 2680 "parse.tab.c"
    break;

  case 188:
#line 727 "includes/parse.y"
    { (yyval.intNumber) = GREATER; }
#line 2686 "parse.tab.c"
    break;

  case 189:
#line 729 "includes/parse.y"
    { (yyval.intNumber) = EQEQUAL; }
#line 2692 "parse.tab.c"
    break;

  case 190:
#line 731 "includes/parse.y"
    { (yyval.intNumber) = EQEQEQUAL; }
#line 2698 "parse.tab.c"
    break;

  case 191:
#line 733 "includes/parse.y"
    { (yyval.intNumber) = GREATEREQUAL; }
#line 2704 "parse.tab.c"
    break;

  case 192:
#line 735 "includes/parse.y"
    { (yyval.intNumber) = LESSEQUAL; }
#line 2710 "parse.tab.c"
    break;

  case 193:
#line 737 "includes/parse.y"
    { (yyval.intNumber) = GRLT; }
#line 2716 "parse.tab.c"
    break;

  case 194:
#line 739 "includes/parse.y"
    { (yyval.intNumber) = NOTEQUAL; }
#line 2722 "parse.tab.c"
    break;

  case 195:
#line 741 "includes/parse.y"
    { (yyval.intNumber) = IN; }
#line 2728 "parse.tab.c"
    break;

  case 196:
#line 743 "includes/parse.y"
    { (yyval.intNumber) = 0; }
#line 2734 "parse.tab.c"
    break;

  case 197:
#line 745 "includes/parse.y"
    { (yyval.intNumber) = IS; }
#line 2740 "parse.tab.c"
    break;

  case 198:
#line 747 "includes/parse.y"
    { (yyval.intNumber) = 0; }
#line 2746 "parse.tab.c"
    break;

  case 199:
#line 751 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2752 "parse.tab.c"
    break;

  case 200:
#line 753 "includes/parse.y"
    {
      (yyval.node) = new BarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2761 "parse.tab.c"
    break;

  case 201:
#line 760 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2767 "parse.tab.c"
    break;

  case 202:
#line 762 "includes/parse.y"
    {
      (yyval.node) = new XorBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2776 "parse.tab.c"
    break;

  case 203:
#line 769 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2782 "parse.tab.c"
    break;

  case 204:
#line 771 "includes/parse.y"
    {
      (yyval.node) = new AmpersandBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2791 "parse.tab.c"
    break;

  case 205:
#line 778 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2797 "parse.tab.c"
    break;

  case 206:
#line 780 "includes/parse.y"
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
#line 2812 "parse.tab.c"
    break;

  case 207:
#line 793 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFT; }
#line 2818 "parse.tab.c"
    break;

  case 208:
#line 795 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFT; }
#line 2824 "parse.tab.c"
    break;

  case 209:
#line 799 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2830 "parse.tab.c"
    break;

  case 210:
#line 801 "includes/parse.y"
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
#line 2845 "parse.tab.c"
    break;

  case 211:
#line 814 "includes/parse.y"
    {
      (yyval.intNumber) = PLUS;
    }
#line 2853 "parse.tab.c"
    break;

  case 212:
#line 818 "includes/parse.y"
    {
      (yyval.intNumber) = MINUS;
    }
#line 2861 "parse.tab.c"
    break;

  case 213:
#line 824 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2869 "parse.tab.c"
    break;

  case 214:
#line 828 "includes/parse.y"
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
#line 2896 "parse.tab.c"
    break;

  case 215:
#line 853 "includes/parse.y"
    { (yyval.intNumber) = STAR; }
#line 2902 "parse.tab.c"
    break;

  case 216:
#line 855 "includes/parse.y"
    { (yyval.intNumber) = SLASH; }
#line 2908 "parse.tab.c"
    break;

  case 217:
#line 857 "includes/parse.y"
    { (yyval.intNumber) = PERCENT; }
#line 2914 "parse.tab.c"
    break;

  case 218:
#line 859 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASH; }
#line 2920 "parse.tab.c"
    break;

  case 219:
#line 863 "includes/parse.y"
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
#line 2938 "parse.tab.c"
    break;

  case 220:
#line 877 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2946 "parse.tab.c"
    break;

  case 221:
#line 883 "includes/parse.y"
    { (yyval.intNumber) = PLUS; }
#line 2952 "parse.tab.c"
    break;

  case 222:
#line 885 "includes/parse.y"
    { (yyval.intNumber) = MINUS; }
#line 2958 "parse.tab.c"
    break;

  case 223:
#line 887 "includes/parse.y"
    { (yyval.intNumber) = TILDE; }
#line 2964 "parse.tab.c"
    break;

  case 224:
#line 891 "includes/parse.y"
    {
      (yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2973 "parse.tab.c"
    break;

  case 225:
#line 896 "includes/parse.y"
    {
      if ((yyvsp[0].node) == NULL) {
        (yyval.node) = (yyvsp[-1].node);
      }
      else {
        (yyval.node) = new CallNode(reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent(), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2987 "parse.tab.c"
    break;

  case 226:
#line 908 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2993 "parse.tab.c"
    break;

  case 227:
#line 910 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2999 "parse.tab.c"
    break;

  case 228:
#line 914 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3005 "parse.tab.c"
    break;

  case 229:
#line 916 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3011 "parse.tab.c"
    break;

  case 230:
#line 918 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3017 "parse.tab.c"
    break;

  case 231:
#line 920 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3023 "parse.tab.c"
    break;

  case 232:
#line 922 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 3033 "parse.tab.c"
    break;

  case 233:
#line 928 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3039 "parse.tab.c"
    break;

  case 234:
#line 930 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3045 "parse.tab.c"
    break;

  case 235:
#line 932 "includes/parse.y"
    {
      (yyval.node) = new IntLiteral((yyvsp[0].intNumber));
      pool.add((yyval.node));
    }
#line 3054 "parse.tab.c"
    break;

  case 236:
#line 937 "includes/parse.y"
    {
      (yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
      pool.add((yyval.node));
    }
#line 3063 "parse.tab.c"
    break;

  case 237:
#line 944 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3069 "parse.tab.c"
    break;

  case 238:
#line 946 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3075 "parse.tab.c"
    break;

  case 239:
#line 950 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3081 "parse.tab.c"
    break;

  case 240:
#line 952 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3087 "parse.tab.c"
    break;

  case 246:
#line 965 "includes/parse.y"
    {
    //$$ = new StringLiteral($1);
    //pool.add($$);
  }
#line 3096 "parse.tab.c"
    break;

  case 249:
#line 976 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3102 "parse.tab.c"
    break;

  case 250:
#line 978 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 3108 "parse.tab.c"
    break;

  case 253:
#line 986 "includes/parse.y"
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ArgNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node)); 
      }
    }
#line 3120 "parse.tab.c"
    break;

  case 254:
#line 994 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3126 "parse.tab.c"
    break;

  case 255:
#line 996 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3132 "parse.tab.c"
    break;

  case 273:
#line 1033 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 3138 "parse.tab.c"
    break;

  case 274:
#line 1035 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3144 "parse.tab.c"
    break;

  case 287:
#line 1063 "includes/parse.y"
    {
      if ((yyvsp[-1].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-1].vec);
      }
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 3158 "parse.tab.c"
    break;

  case 288:
#line 1075 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 3172 "parse.tab.c"
    break;

  case 289:
#line 1085 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 3178 "parse.tab.c"
    break;

  case 291:
#line 1090 "includes/parse.y"
    {}
#line 3184 "parse.tab.c"
    break;

  case 294:
#line 1098 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3190 "parse.tab.c"
    break;

  case 295:
#line 1100 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3196 "parse.tab.c"
    break;

  case 296:
#line 1102 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3202 "parse.tab.c"
    break;

  case 297:
#line 1106 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3208 "parse.tab.c"
    break;

  case 298:
#line 1108 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3214 "parse.tab.c"
    break;

  case 309:
#line 1132 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3220 "parse.tab.c"
    break;

  case 310:
#line 1134 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3226 "parse.tab.c"
    break;

  case 315:
#line 1146 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3232 "parse.tab.c"
    break;

  case 316:
#line 1148 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3238 "parse.tab.c"
    break;


#line 3242 "parse.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
#line 1155 "includes/parse.y"


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
