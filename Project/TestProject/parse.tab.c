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

#line 224 "parse.tab.c"

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
#define YYLAST   950

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  317
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  485

#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      85,    86,    87,    88
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
     217,   219,   221,   225,   287,   292,   296,   298,   302,   307,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   337,   342,   346,   348,   352,   354,   358,   359,
     362,   363,   366,   369,   372,   374,   376,   378,   380,   384,
     387,   390,   395,   402,   405,   406,   409,   410,   413,   414,
     417,   418,   421,   424,   427,   428,   431,   432,   433,   436,
     437,   440,   441,   444,   445,   448,   449,   452,   453,   456,
     457,   460,   463,   464,   467,   468,   471,   472,   475,   477,
     479,   481,   483,   485,   487,   489,   493,   503,   515,   520,
     524,   534,   547,   548,   551,   552,   555,   556,   559,   560,
     563,   564,   567,   570,   571,   574,   575,   578,   579,   582,
     583,   586,   587,   590,   592,   600,   605,   612,   613,   616,
     617,   620,   621,   624,   625,   628,   630,   634,   636,   640,
     642,   648,   650,   656,   660,   664,   666,   703,   705,   707,
     709,   711,   713,   715,   717,   719,   721,   723,   727,   729,
     736,   738,   745,   747,   754,   756,   769,   771,   775,   777,
     790,   794,   800,   804,   829,   831,   833,   835,   839,   853,
     859,   861,   863,   867,   872,   884,   886,   890,   892,   894,
     896,   898,   904,   906,   908,   913,   920,   922,   926,   928,
     932,   933,   936,   937,   940,   941,   948,   949,   952,   954,
     958,   959,   962,   970,   972,   976,   977,   980,   981,   984,
     985,   986,   989,   990,   993,   994,   997,   998,  1001,  1002,
    1005,  1006,  1009,  1011,  1015,  1016,  1019,  1020,  1023,  1024,
    1027,  1028,  1031,  1032,  1035,  1036,  1039,  1051,  1061,  1065,
    1066,  1070,  1071,  1074,  1076,  1078,  1082,  1084,  1088,  1089,
    1092,  1093,  1096,  1097,  1100,  1101,  1104,  1105,  1108,  1110,
    1114,  1115,  1118,  1119,  1122,  1124,  1128,  1129
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
  "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EXCEPT", "EXEC", "FINALLY",
  "FOR", "FROM", "GLOBAL", "GREATER", "GREATEREQUAL", "GRLT", "IF",
  "IMPORT", "IN", "INDENT", "IS", "LAMBDA", "LBRACE", "LEFTSHIFTEQUAL",
  "LESS", "LESSEQUAL", "LPAR", "LSQB", "MINEQUAL", "NEWLINE", "NOT",
  "NOTEQUAL", "NUMBER", "OR", "PASS", "PERCENTEQUAL", "PLUSEQUAL", "PRINT",
  "RAISE", "RBRACE", "RETURN", "RIGHTSHIFTEQUAL", "RPAR", "RSQB", "SEMI",
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
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -306

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-306)))

#define YYTABLE_NINF -264

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -306,    43,  -306,   405,  -306,   831,    38,   831,  -306,    46,
    -306,    61,    63,   848,  -306,   848,   848,  -306,    65,   831,
      38,   134,   831,   749,   831,  -306,   102,  -306,  -306,   768,
     831,   831,  -306,  -306,   140,   831,   831,   831,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,   111,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,    -6,   121,  -306,   304,   147,   148,
     160,    48,    53,   113,  -306,   848,  -306,  -306,   105,  -306,
      41,  -306,  -306,   159,  -306,    25,  -306,   101,    20,   133,
     133,   147,  -306,    29,   142,   150,     6,  -306,   172,  -306,
     175,    36,   831,   177,    49,    23,   143,  -306,   162,  -306,
     137,  -306,  -306,   171,   141,  -306,  -306,   831,  -306,  -306,
     191,  -306,   636,   195,  -306,   207,  -306,  -306,  -306,  -306,
      52,   199,   102,   102,  -306,   102,  -306,  -306,  -306,  -306,
    -306,   165,  -306,  -306,   179,  -306,   848,   848,   848,   848,
    -306,  -306,   848,  -306,  -306,   848,  -306,  -306,  -306,  -306,
     848,  -306,    26,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,   749,   749,   831,   144,
     156,  -306,  -306,   831,   636,   831,   157,   196,   210,   212,
     831,   831,    -7,   187,   208,   213,   636,    38,   153,  -306,
     831,     4,  -306,   154,   158,  -306,   163,   831,   848,   225,
    -306,  -306,  -306,   225,  -306,  -306,   848,   225,  -306,  -306,
     227,   225,   831,  -306,   203,  -306,    28,   636,   132,   848,
    -306,   713,   831,    30,   121,  -306,  -306,  -306,   147,   148,
     160,    48,    53,   113,  -306,   167,   156,   812,   848,  -306,
     176,  -306,  -306,  -306,  -306,  -306,  -306,   182,  -306,    18,
    -306,  -306,  -306,   186,  -306,   192,   636,   636,   848,   242,
     246,   184,   257,  -306,  -306,  -306,  -306,   188,  -306,  -306,
    -306,  -306,  -306,   201,   251,  -306,   831,   252,   162,   230,
     831,  -306,  -306,   231,  -306,   831,   256,  -306,  -306,   242,
     559,   831,   258,    86,   261,   254,   636,   831,   147,  -306,
    -306,  -306,   831,  -306,   220,   255,   270,   221,  -306,   274,
    -306,   749,   239,   831,   831,     1,  -306,   276,   279,  -306,
    -306,  -306,   147,   831,  -306,   636,   232,   219,   282,  -306,
     127,   286,  -306,   216,  -306,  -306,    14,  -306,   293,  -306,
    -306,   102,   867,  -306,   831,  -306,  -306,  -306,   482,    44,
     636,   295,   283,   300,   636,   301,  -306,  -306,  -306,  -306,
     296,  -306,   303,   831,  -306,  -306,  -306,  -306,   831,  -306,
    -306,   259,  -306,   636,  -306,   294,  -306,  -306,   184,   831,
     306,     4,   244,   831,  -306,     8,   309,    13,   310,  -306,
     272,  -306,  -306,  -306,  -306,  -306,   831,  -306,  -306,   636,
     316,  -306,   636,  -306,   636,  -306,   327,  -306,   319,   321,
    -306,  -306,   320,  -306,   328,   636,  -306,  -306,   330,   867,
    -306,  -306,  -306,   867,   332,   867,  -306,  -306,  -306,   867,
     336,  -306,  -306,   636,  -306,  -306,  -306,   831,  -306,  -306,
     205,  -306,   636,   636,  -306,   831,    51,  -306,   867,    13,
    -306,   867,  -306,  -306,  -306,   831,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     0,    89,     0,
      90,     0,     0,     0,     3,     0,     0,   317,     0,     0,
       0,    25,   243,   239,   241,     4,     0,   232,    83,    77,
      95,    92,   245,   222,     0,     0,     0,   315,   234,   235,
     231,   220,   221,     6,    13,     0,   135,   133,     5,    38,
      43,    44,    45,    46,    47,    48,    84,    85,    86,    88,
      87,    49,   100,   101,    50,    51,    52,    39,   128,   129,
     130,   131,   132,    75,   178,   179,   181,   184,   185,   198,
     200,   202,   204,   208,   212,     0,   219,   226,   233,   176,
      55,   134,    93,   127,   119,     0,   312,     0,     0,     0,
       0,   271,    82,   125,     0,     0,     0,   123,     0,   117,
     102,   112,     0,     0,     0,    75,     0,   242,    75,   238,
       0,   237,   236,    75,     0,   240,   183,     0,    72,    75,
      99,    91,     0,     0,   154,   156,   314,    12,    15,    14,
       0,   273,     0,     0,   175,     0,   189,   188,   190,   192,
     194,   196,   187,   191,     0,   193,     0,     0,     0,     0,
     206,   207,     0,   210,   211,     0,   214,   215,   216,   217,
       0,   218,   224,   244,    65,    67,    71,    70,    68,    61,
      64,    60,    69,    63,    62,    66,     0,     0,     0,     0,
     288,     9,   230,     0,     0,   285,    25,     0,     0,   269,
       0,     0,     0,   316,   104,   121,     0,     0,     0,   251,
       0,     0,    32,     0,     0,    20,    23,     0,     0,    31,
     275,   280,   229,    31,   248,   227,     0,    31,   246,   228,
      81,    31,     0,    94,     0,   163,     0,     0,     0,     0,
      41,     0,   272,     0,   180,   182,   197,   195,   186,   199,
     201,   203,   205,   209,   213,     0,   288,   263,     0,   225,
      59,    54,    57,    56,    53,   126,   120,     0,    10,     0,
     313,   283,   284,     0,    19,     0,     0,     0,   268,    97,
       0,     0,   110,   106,   103,   116,   108,     0,   139,   118,
     111,   250,    37,     0,    27,    29,     0,    31,   277,     0,
      30,   281,   249,     0,   247,     0,    31,    73,    76,    97,
       0,   158,     0,   149,     0,   141,     0,     0,   155,    40,
      42,    74,     0,   254,     0,     0,   260,     0,   258,     0,
     223,     0,     0,     0,     0,   299,   286,    31,     0,    18,
      16,    17,   270,     0,   124,     0,     0,     0,   114,   122,
     137,    35,    33,     0,    28,    22,    24,    21,    31,   274,
     278,     0,     0,    79,    30,    80,    98,   166,     0,   162,
       0,     0,   151,     0,     0,     0,   152,   153,   177,   252,
       0,   253,   256,   263,    58,     8,   290,   295,     0,   296,
     298,   287,   293,     0,    96,   143,   107,   109,   113,     0,
       0,    34,     0,    30,   279,   309,    25,   303,   168,   172,
     171,    78,   164,   165,   159,   160,     0,   157,   145,     0,
       0,   144,     0,   147,     0,   259,   255,   262,   265,   292,
     297,   282,     0,   115,     0,     0,    36,    26,     0,     0,
     308,   306,   307,     0,     0,     0,   302,   300,   301,     0,
      31,   161,   148,     0,   146,   140,   257,   267,   261,   264,
       0,   294,     0,     0,   136,     0,   311,   174,     0,   305,
     170,    30,   167,   150,   266,     0,   289,   142,   138,   276,
     310,   173,   304,   169,   291
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -306,  -306,  -306,  -306,  -306,   280,    92,  -306,  -306,   308,
     260,  -188,  -306,  -306,  -306,  -306,  -216,  -199,  -306,  -306,
    -289,    -2,  -306,   114,  -306,   174,    27,  -306,  -306,    47,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,    45,  -306,  -306,  -306,  -306,  -306,  -306,   -36,   161,
      82,  -306,  -306,    17,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,    50,
      56,  -306,  -306,  -184,  -306,  -306,  -306,  -305,  -306,    -5,
    -306,  -138,   222,     0,  -306,  -306,    21,   215,   206,   214,
    -306,   218,  -306,   209,  -306,   -65,  -306,  -306,  -306,  -306,
    -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,  -306,
    -306,   -49,    -1,  -306,  -306,   -10,  -306,   -28,  -306,  -306,
    -306,  -306,   339,  -306,  -306,  -306,  -306,  -306,  -306,   -75,
    -306,   -83,   264,  -306,   -78,  -102,  -306,  -306,   -18,  -306
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    43,     3,    44,   267,    45,    46,    47,
     197,   113,   297,   114,   354,   215,   301,   216,   293,   351,
      48,   235,   140,    50,    51,   260,   261,   187,    52,   141,
     128,   306,   307,    53,    54,    55,    56,    57,    58,    59,
      60,   344,   233,    61,    62,    63,   105,   284,   285,   109,
     286,   348,   110,   111,    64,   205,    65,    66,    67,    68,
     350,    69,    70,    71,   313,   372,   421,    72,   238,   134,
     314,   416,   417,   236,   368,   407,   450,   408,   409,    73,
     144,    74,    75,    76,    77,   156,    78,    79,    80,    81,
     162,    82,   165,    83,   170,    84,    85,    86,   172,    87,
     119,   120,   124,   116,    88,   125,   121,    89,   259,   327,
     382,   328,   329,   458,   459,   102,   199,    90,   117,   358,
     359,   220,    91,   273,   268,   269,   429,   461,   336,   337,
     389,   446,   447,   448,   440,   441,   442,    97,    92,   106
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    49,    96,   131,   243,   122,   104,   302,   275,   136,
     271,   304,   292,   221,   108,   308,   224,   115,   118,   123,
     171,   367,   288,    95,   129,   130,   126,     7,   203,   -30,
     133,   135,   142,   218,   101,   194,   103,   101,   217,   157,
     218,   281,   208,     4,   174,   226,   439,   189,   255,   143,
     414,   445,   211,   315,   175,   218,   322,   311,   189,   312,
     415,    21,    22,   143,   176,   177,    23,    24,   195,   200,
      26,   282,    27,   190,   256,   257,   191,   283,   -30,   413,
     388,   357,   212,   218,    94,   143,   178,    32,    33,   439,
     365,   179,   340,   341,    38,    39,    40,   211,   180,   181,
      41,    42,   333,   240,   182,   254,   334,   209,   183,   184,
     192,     7,   371,   185,   258,   311,    94,   193,   241,     6,
     186,   392,   230,   204,    98,     9,   145,   212,   160,   161,
      11,    12,   376,   213,   466,   163,   164,   214,   467,    99,
     469,   100,   404,   107,   470,   245,    22,   316,   317,   112,
      23,    24,   399,   400,    26,   132,    27,   157,   262,   262,
     158,   395,   219,   481,   159,   223,   483,   272,   263,   263,
     227,    32,    33,   280,   173,   188,   231,   248,    38,    39,
      40,   196,   201,   265,    41,    42,   418,   206,   270,   202,
     423,   207,   210,   330,   218,   279,   360,   166,   167,   168,
     169,   225,   436,   226,   222,   291,   229,   232,   299,   431,
     237,   276,   298,   239,     7,   242,   303,   246,   444,   247,
     -11,   274,   266,   405,   410,   277,  -105,   309,   278,   287,
     189,   290,   294,   390,   472,   452,   295,   321,   454,   101,
     455,   300,   296,   305,   310,   323,   332,   101,    21,    22,
     338,   464,   326,    23,    24,   331,   339,    26,   343,    27,
     318,   345,   282,   347,   335,   352,   349,   353,   356,   473,
     361,   362,   364,   370,    32,    33,   374,   380,   477,   478,
     375,    38,    39,    40,   379,  -262,   381,    41,    42,   383,
     385,   355,   391,   475,   393,   321,   396,   397,   398,   342,
     363,   410,   401,   262,   402,   410,   369,   410,    49,   403,
     419,   410,   135,   263,   420,   422,   424,   378,   425,   426,
     432,   435,   437,   -30,   443,   137,   449,   143,   386,   387,
     410,   453,   146,   410,   457,   462,     7,   460,   394,   147,
     148,   149,  -263,   463,   150,   465,   151,   468,   324,   325,
     152,   153,   471,   138,   366,   320,   154,   155,   384,   411,
     198,   264,   433,   346,   250,   244,    49,   377,   289,   373,
      21,    22,   249,   251,   253,    23,    24,   456,   427,    26,
     252,    27,   428,   430,   139,   476,   482,   228,   480,     0,
       0,     0,     0,     0,   434,     0,    32,    33,   438,     0,
       0,     0,     0,    38,    39,    40,     0,     0,     0,    41,
      42,   451,     5,     6,     7,     0,     8,     0,     0,     9,
       0,   326,    10,     0,    11,    12,    13,     0,     0,     0,
       0,     0,    14,     0,     0,    15,     0,    16,    17,    18,
       0,     0,     0,    19,    20,     0,     0,     0,    21,    22,
       0,     0,   474,    23,    24,   335,    25,    26,     0,    27,
     479,    28,     0,     0,    29,    30,     0,    31,     0,     0,
     484,     0,     0,     0,    32,    33,    34,     0,    35,    36,
      37,    38,    39,    40,     0,     0,     0,    41,    42,     5,
       6,     7,     0,     8,     0,     0,     9,     0,     0,    10,
     412,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    15,     0,    16,    17,    18,     0,     0,     0,
      19,    20,     0,     0,     0,    21,    22,     0,     0,     0,
      23,    24,     0,     0,    26,     0,    27,     0,    28,     0,
       0,    29,    30,     0,    31,     0,     0,     0,     0,     0,
       0,    32,    33,    34,     0,    35,    36,    37,    38,    39,
      40,     0,     0,     0,    41,    42,     5,     6,     7,     0,
       8,     0,     0,     9,     0,     0,    10,     0,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,    16,    17,    18,     0,     0,     0,    19,    20,     0,
       0,     0,    21,    22,     0,     0,     0,    23,    24,     0,
       0,    26,     0,    27,     0,    28,     0,     0,    29,    30,
       0,    31,     0,     0,     0,     0,     0,     0,    32,    33,
      34,     0,    35,    36,    37,    38,    39,    40,     0,     0,
       0,    41,    42,     5,     0,     7,     0,     8,     0,     0,
       0,     0,     0,    10,     0,     0,     0,    13,     0,     0,
       0,     0,     0,     0,     0,     0,    15,     0,     0,    17,
      18,     0,     0,     0,     0,    20,     0,     0,     0,    21,
      22,     0,     0,     0,    23,    24,     0,   234,    26,     0,
      27,     0,    28,     0,     0,    29,    30,     0,    31,     0,
       0,     0,     0,     0,     0,    32,    33,     0,     0,     0,
       0,    37,    38,    39,    40,     0,     0,     0,    41,    42,
       5,     0,     7,     0,     8,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,    15,     0,     0,    17,    18,     0,     0,
       0,     0,    20,     0,     0,     0,    21,    22,     7,     0,
       0,    23,    24,     0,   319,    26,     0,    27,     0,    28,
       0,     0,    29,    30,     0,    31,     0,     7,     0,     0,
       0,     0,    32,    33,     0,     0,     0,     0,    37,    38,
      39,    40,    21,    22,     0,    41,    42,    23,    24,     0,
       0,    26,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,    23,    24,    32,    33,
      26,     7,    27,     0,    37,    38,    39,    40,     0,     0,
       0,    41,    42,     0,   325,     0,     0,    32,    33,     0,
       7,     0,     0,     0,    38,    39,    40,     0,     0,   127,
      41,    42,     0,     0,     0,    21,    22,     7,     0,     0,
      23,    24,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     7,     0,     0,    23,
      24,    32,    33,    26,     0,    27,     0,     0,    38,    39,
      40,     0,    22,     0,    41,    42,    23,    24,     0,     0,
      32,    33,    27,     0,     0,     0,     0,    38,    39,    40,
     406,    22,     0,    41,    42,    23,    24,    32,    33,    26,
       0,    27,     0,     0,    38,    39,    40,     0,     0,     0,
      41,    42,     0,     0,     0,     0,    32,    33,     0,     0,
       0,     0,     0,    38,    39,    40,     0,     0,     0,    41,
      42
};

static const yytype_int16 yycheck[] =
{
       5,     3,     7,    31,   142,    23,    16,   223,   196,    37,
     194,   227,   211,   115,    19,   231,   118,    22,    23,    24,
      85,   310,   206,     6,    29,    30,    26,     9,    22,    15,
      35,    36,    38,    32,    13,    15,    15,    16,    15,    10,
      32,    48,     6,     0,     3,    32,    38,    22,    22,    55,
       6,    38,    48,   237,    13,    32,    26,    29,    22,    31,
      16,    43,    44,    55,    23,    24,    48,    49,    48,    40,
      52,    78,    54,    48,    48,    49,    51,    84,    64,   368,
      79,   297,    78,    32,    78,    55,    45,    69,    70,    38,
     306,    50,   276,   277,    76,    77,    78,    48,    57,    58,
      82,    83,    84,    51,    63,   170,    88,   112,    67,    68,
       9,     9,    26,    72,    88,    29,    78,    16,    66,     8,
      79,   337,   127,   106,    78,    14,     5,    78,    80,    81,
      19,    20,   316,    84,   439,    82,    83,    88,   443,    78,
     445,    78,   358,    78,   449,   145,    44,    15,    16,    15,
      48,    49,    25,    26,    52,    15,    54,    10,   186,   187,
      12,   345,   115,   468,     4,   118,   471,   195,   186,   187,
     123,    69,    70,   201,    69,    16,   129,   156,    76,    77,
      78,    48,    40,   188,    82,    83,   370,    15,   193,    39,
     374,    16,    15,   258,    32,   200,   298,    84,    85,    86,
      87,    64,   401,    32,    61,   210,    65,    16,   218,   393,
      15,    15,   217,     6,     9,    16,   226,    52,   406,    40,
      64,    64,    78,   361,   362,    15,    39,   232,    16,    16,
      22,    78,    78,   335,   450,   419,    78,   242,   422,   218,
     424,    16,    79,    16,    41,    78,    64,   226,    43,    44,
      64,   435,   257,    48,    49,    79,    64,    52,    16,    54,
     239,    15,    78,     6,   269,    64,    78,    16,    16,   453,
      40,    40,    16,    15,    69,    70,    15,    22,   462,   463,
      26,    76,    77,    78,    64,    15,    65,    82,    83,    15,
      51,   296,    16,    88,    15,   300,    64,    78,    16,   278,
     305,   439,    16,   331,    88,   443,   311,   445,   310,    16,
      15,   449,   317,   331,    31,    15,    15,   322,    22,    16,
      26,    15,    78,    64,    15,    45,    16,    55,   333,   334,
     468,    15,    28,   471,    15,    15,     9,    16,   343,    35,
      36,    37,    15,    15,    40,    15,    42,    15,   256,    22,
      46,    47,    16,    45,   309,   241,    52,    53,   331,   364,
     100,   187,   398,   281,   158,   143,   368,   317,   207,   313,
      43,    44,   157,   159,   165,    48,    49,   426,   383,    52,
     162,    54,   383,   388,    45,   460,   469,   123,   466,    -1,
      -1,    -1,    -1,    -1,   399,    -1,    69,    70,   403,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      83,   416,     7,     8,     9,    -1,    11,    -1,    -1,    14,
      -1,   426,    17,    -1,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    43,    44,
      -1,    -1,   457,    48,    49,   460,    51,    52,    -1,    54,
     465,    56,    -1,    -1,    59,    60,    -1,    62,    -1,    -1,
     475,    -1,    -1,    -1,    69,    70,    71,    -1,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    82,    83,     7,
       8,     9,    -1,    11,    -1,    -1,    14,    -1,    -1,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    54,    -1,    56,    -1,
      -1,    59,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    73,    74,    75,    76,    77,
      78,    -1,    -1,    -1,    82,    83,     7,     8,     9,    -1,
      11,    -1,    -1,    14,    -1,    -1,    17,    -1,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    -1,    54,    -1,    56,    -1,    -1,    59,    60,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    73,    74,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,     7,    -1,     9,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    48,    49,    -1,    51,    52,    -1,
      54,    -1,    56,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,    -1,
      -1,    75,    76,    77,    78,    -1,    -1,    -1,    82,    83,
       7,    -1,     9,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,     9,    -1,
      -1,    48,    49,    -1,    51,    52,    -1,    54,    -1,    56,
      -1,    -1,    59,    60,    -1,    62,    -1,     9,    -1,    -1,
      -1,    -1,    69,    70,    -1,    -1,    -1,    -1,    75,    76,
      77,    78,    43,    44,    -1,    82,    83,    48,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    48,    49,    69,    70,
      52,     9,    54,    -1,    75,    76,    77,    78,    -1,    -1,
      -1,    82,    83,    -1,    22,    -1,    -1,    69,    70,    -1,
       9,    -1,    -1,    -1,    76,    77,    78,    -1,    -1,    81,
      82,    83,    -1,    -1,    -1,    43,    44,     9,    -1,    -1,
      48,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,     9,    -1,    -1,    48,
      49,    69,    70,    52,    -1,    54,    -1,    -1,    76,    77,
      78,    -1,    44,    -1,    82,    83,    48,    49,    -1,    -1,
      69,    70,    54,    -1,    -1,    -1,    -1,    76,    77,    78,
      43,    44,    -1,    82,    83,    48,    49,    69,    70,    52,
      -1,    54,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    69,    70,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    -1,    -1,    -1,    82,
      83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    90,    91,    93,     0,     7,     8,     9,    11,    14,
      17,    19,    20,    21,    27,    30,    32,    33,    34,    38,
      39,    43,    44,    48,    49,    51,    52,    54,    56,    59,
      60,    62,    69,    70,    71,    73,    74,    75,    76,    77,
      78,    82,    83,    92,    94,    96,    97,    98,   109,   110,
     112,   113,   117,   122,   123,   124,   125,   126,   127,   128,
     129,   132,   133,   134,   143,   145,   146,   147,   148,   150,
     151,   152,   156,   168,   170,   171,   172,   173,   175,   176,
     177,   178,   180,   182,   184,   185,   186,   188,   193,   196,
     206,   211,   227,   168,    78,   142,   168,   226,    78,    78,
      78,   175,   204,   175,   204,   135,   228,    78,   168,   138,
     141,   142,    15,   100,   102,   168,   192,   207,   168,   189,
     190,   195,   227,   168,   191,   194,   172,    81,   119,   168,
     168,   206,    15,   168,   158,   168,   206,    94,    98,   211,
     111,   118,    38,    55,   169,     5,    28,    35,    36,    37,
      40,    42,    46,    47,    52,    53,   174,    10,    12,     4,
      80,    81,   179,    82,    83,   181,    84,    85,    86,    87,
     183,   184,   187,    69,     3,    13,    23,    24,    45,    50,
      57,    58,    63,    67,    68,    72,    79,   116,    16,    22,
      48,    51,     9,    16,    15,    48,    48,    99,    99,   205,
      40,    40,    39,    22,   142,   144,    15,    16,     6,   168,
      15,    48,    78,    84,    88,   104,   106,    15,    32,   118,
     210,   224,    61,   118,   224,    64,    32,   118,   221,    65,
     168,   118,    16,   131,    51,   110,   162,    15,   157,     6,
      51,    66,    16,   170,   171,   172,    52,    40,   175,   176,
     177,   178,   180,   182,   184,    22,    48,    49,    88,   197,
     114,   115,   206,   227,   114,   168,    78,    95,   213,   214,
     168,   162,   206,   212,    64,   100,    15,    15,    16,   168,
     206,    48,    78,    84,   136,   137,   139,    16,   162,   138,
      78,   168,   106,   107,    78,    78,    79,   101,   168,   204,
      16,   105,   105,   204,   105,    16,   120,   121,   105,   168,
      41,    29,    31,   153,   159,   162,    15,    16,   175,    51,
     112,   168,    26,    78,    95,    22,   168,   198,   200,   201,
     184,    79,    64,    84,    88,   168,   217,   218,    64,    64,
     162,   162,   175,    16,   130,    15,   139,     6,   140,    78,
     149,   108,    64,    16,   103,   168,    16,   105,   208,   209,
     224,    40,    40,   168,    16,   105,   130,   109,   163,   168,
      15,    26,   154,   159,    15,    26,   162,   158,   168,    64,
      22,    65,   199,    15,   115,    51,   168,   168,    79,   219,
     224,    16,   105,    15,   168,   162,    64,    78,    16,    25,
      26,    16,    88,    16,   105,   170,    43,   164,   166,   167,
     170,   168,    18,   109,     6,    16,   160,   161,   162,    15,
      31,   155,    15,   162,    15,    22,    16,   168,   201,   215,
     168,   162,    26,   137,   168,    15,   106,    78,   168,    38,
     223,   224,   225,    15,   100,    38,   220,   221,   222,    16,
     165,   168,   162,    15,   162,   162,   200,    15,   202,   203,
      16,   216,    15,    15,   162,    15,   166,   166,    15,   166,
     166,    16,   105,   162,   168,    88,   218,   162,   162,   168,
     223,   166,   220,   166,   168
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   113,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   117,   117,   118,   118,   119,   119,   120,   120,
     121,   121,   122,   123,   124,   124,   124,   124,   124,   125,
     126,   127,   127,   128,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     147,   147,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   152,   153,   153,   154,   154,
     155,   155,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163,   164,   164,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   174,   174,   175,   175,
     176,   176,   177,   177,   178,   178,   179,   179,   180,   180,
     181,   181,   182,   182,   183,   183,   183,   183,   184,   184,
     185,   185,   185,   186,   186,   187,   187,   188,   188,   188,
     188,   188,   188,   188,   188,   188,   189,   189,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   194,   195,   195,
     196,   196,   197,   197,   197,   198,   198,   199,   199,   200,
     200,   200,   201,   201,   202,   202,   203,   203,   204,   204,
     205,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   211,   211,   212,   212,   213,   214,   214,   215,
     215,   216,   216,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     225,   225,   226,   226,   227,   227,   228,   228
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
       1,     1,     1,     1,     1,     2,     1,     2,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     4,     2,     2,     0,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     0,     1,     0,     2,     1,     2,     3,     2,     3,
       4,     3,     3,     3,     2,     3,     2,     3,     0,     3,
       1,     4,     1,     0,     1,     0,     2,     1,     3,     2,
       3,     0,     3,     2,     4,     2,     5,     0,     1,     2,
       1,     2,     7,     4,     1,     0,     2,     3,     0,     3,
       0,     3,     0,     2,     4,     2,     2,     3,     1,     0,
       1,     1,     5,     4,     3,     2,     1,     1,     5,     4,
       3,     2,     1,     3,     2,     1,     2,     0
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
#line 1932 "parse.tab.c"
    break;

  case 10:
#line 86 "includes/parse.y"
    { (yyval.vec) = (yyvsp[0].vec); }
#line 1938 "parse.tab.c"
    break;

  case 11:
#line 88 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1944 "parse.tab.c"
    break;

  case 16:
#line 100 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1954 "parse.tab.c"
    break;

  case 17:
#line 106 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1964 "parse.tab.c"
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
#line 1976 "parse.tab.c"
    break;

  case 19:
#line 122 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1982 "parse.tab.c"
    break;

  case 20:
#line 126 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1988 "parse.tab.c"
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
#line 2002 "parse.tab.c"
    break;

  case 22:
#line 140 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2008 "parse.tab.c"
    break;

  case 23:
#line 142 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2014 "parse.tab.c"
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
#line 2028 "parse.tab.c"
    break;

  case 25:
#line 156 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 2034 "parse.tab.c"
    break;

  case 30:
#line 168 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2040 "parse.tab.c"
    break;

  case 31:
#line 170 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2046 "parse.tab.c"
    break;

  case 32:
#line 174 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 2056 "parse.tab.c"
    break;

  case 33:
#line 180 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2062 "parse.tab.c"
    break;

  case 38:
#line 192 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2068 "parse.tab.c"
    break;

  case 39:
#line 194 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2074 "parse.tab.c"
    break;

  case 44:
#line 206 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2080 "parse.tab.c"
    break;

  case 45:
#line 208 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2086 "parse.tab.c"
    break;

  case 46:
#line 210 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2092 "parse.tab.c"
    break;

  case 47:
#line 212 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2098 "parse.tab.c"
    break;

  case 48:
#line 214 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2104 "parse.tab.c"
    break;

  case 49:
#line 216 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2110 "parse.tab.c"
    break;

  case 50:
#line 218 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2116 "parse.tab.c"
    break;

  case 51:
#line 220 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2122 "parse.tab.c"
    break;

  case 52:
#line 222 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2128 "parse.tab.c"
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
        default:
          break;
      }
    }
#line 2194 "parse.tab.c"
    break;

  case 54:
#line 288 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2203 "parse.tab.c"
    break;

  case 55:
#line 293 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2209 "parse.tab.c"
    break;

  case 56:
#line 297 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2215 "parse.tab.c"
    break;

  case 57:
#line 299 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2221 "parse.tab.c"
    break;

  case 58:
#line 303 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2230 "parse.tab.c"
    break;

  case 59:
#line 308 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2236 "parse.tab.c"
    break;

  case 60:
#line 312 "includes/parse.y"
    { (yyval.intNumber) = PLUSEQUAL; }
#line 2242 "parse.tab.c"
    break;

  case 61:
#line 314 "includes/parse.y"
    { (yyval.intNumber) = MINEQUAL; }
#line 2248 "parse.tab.c"
    break;

  case 62:
#line 316 "includes/parse.y"
    { (yyval.intNumber) = STAREQUAL; }
#line 2254 "parse.tab.c"
    break;

  case 63:
#line 318 "includes/parse.y"
    { (yyval.intNumber) = SLASHEQUAL; }
#line 2260 "parse.tab.c"
    break;

  case 64:
#line 320 "includes/parse.y"
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 2266 "parse.tab.c"
    break;

  case 65:
#line 322 "includes/parse.y"
    { (yyval.intNumber) = AMPEREQUAL; }
#line 2272 "parse.tab.c"
    break;

  case 66:
#line 324 "includes/parse.y"
    { (yyval.intNumber) = VBAREQUAL; }
#line 2278 "parse.tab.c"
    break;

  case 67:
#line 326 "includes/parse.y"
    { (yyval.intNumber) = CIRCUMFLEXEQUAL; }
#line 2284 "parse.tab.c"
    break;

  case 68:
#line 328 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFTEQUAL; }
#line 2290 "parse.tab.c"
    break;

  case 69:
#line 330 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFTEQUAL; }
#line 2296 "parse.tab.c"
    break;

  case 70:
#line 332 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 2302 "parse.tab.c"
    break;

  case 71:
#line 334 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 2308 "parse.tab.c"
    break;

  case 72:
#line 338 "includes/parse.y"
    {
      (yyval.node) = new PrintNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2317 "parse.tab.c"
    break;

  case 73:
#line 343 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2323 "parse.tab.c"
    break;

  case 74:
#line 347 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2329 "parse.tab.c"
    break;

  case 75:
#line 349 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2335 "parse.tab.c"
    break;

  case 76:
#line 353 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 2341 "parse.tab.c"
    break;

  case 77:
#line 355 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2347 "parse.tab.c"
    break;

  case 84:
#line 373 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2353 "parse.tab.c"
    break;

  case 85:
#line 375 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2359 "parse.tab.c"
    break;

  case 86:
#line 377 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2365 "parse.tab.c"
    break;

  case 87:
#line 379 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2371 "parse.tab.c"
    break;

  case 88:
#line 381 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2377 "parse.tab.c"
    break;

  case 91:
#line 391 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2386 "parse.tab.c"
    break;

  case 92:
#line 396 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode(NULL);
      pool.add((yyval.node));
    }
#line 2395 "parse.tab.c"
    break;

  case 128:
#line 476 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2401 "parse.tab.c"
    break;

  case 129:
#line 478 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2407 "parse.tab.c"
    break;

  case 130:
#line 480 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2413 "parse.tab.c"
    break;

  case 131:
#line 482 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2419 "parse.tab.c"
    break;

  case 132:
#line 484 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2425 "parse.tab.c"
    break;

  case 133:
#line 486 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2431 "parse.tab.c"
    break;

  case 134:
#line 488 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2437 "parse.tab.c"
    break;

  case 135:
#line 490 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2443 "parse.tab.c"
    break;

  case 136:
#line 494 "includes/parse.y"
    {
      if ((yyvsp[-6].node)) {
        (yyval.node) = new IfNode((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2457 "parse.tab.c"
    break;

  case 137:
#line 504 "includes/parse.y"
    {
      if ((yyvsp[-3].node)) {
        (yyval.node) = new IfNode((yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), NULL);
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2471 "parse.tab.c"
    break;

  case 138:
#line 516 "includes/parse.y"
    {
      (yyval.node) = new ElifNode((yyvsp[-2].node),(yyvsp[0].node),(yyvsp[-4].node));
      pool.add((yyval.node));
    }
#line 2480 "parse.tab.c"
    break;

  case 139:
#line 521 "includes/parse.y"
    { (yyval.node)=NULL;}
#line 2486 "parse.tab.c"
    break;

  case 140:
#line 525 "includes/parse.y"
    {
    if ((yyvsp[-5].node)) {
      (yyval.node) = new WhileNode((yyvsp[-5].node), (yyvsp[-3].node));
      pool.add((yyval.node));
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
#line 2500 "parse.tab.c"
    break;

  case 141:
#line 535 "includes/parse.y"
    {
    if ((yyvsp[-2].node)) {
      (yyval.node) = new WhileNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      //$$->eval();
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
#line 2515 "parse.tab.c"
    break;

  case 163:
#line 591 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2521 "parse.tab.c"
    break;

  case 164:
#line 593 "includes/parse.y"
    {
      (yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
      delete (yyvsp[-1].vec);
      pool.add((yyval.node));
    }
#line 2531 "parse.tab.c"
    break;

  case 165:
#line 601 "includes/parse.y"
    {
      (yyval.vec) = (yyvsp[-1].vec);
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2540 "parse.tab.c"
    break;

  case 166:
#line 606 "includes/parse.y"
    {
      (yyval.vec) = new std::vector<Node*>();
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2549 "parse.tab.c"
    break;

  case 175:
#line 629 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2555 "parse.tab.c"
    break;

  case 176:
#line 631 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2561 "parse.tab.c"
    break;

  case 177:
#line 635 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2567 "parse.tab.c"
    break;

  case 178:
#line 637 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2573 "parse.tab.c"
    break;

  case 179:
#line 641 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2579 "parse.tab.c"
    break;

  case 180:
#line 643 "includes/parse.y"
    { (yyval.node) = new OrBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2587 "parse.tab.c"
    break;

  case 181:
#line 649 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2593 "parse.tab.c"
    break;

  case 182:
#line 651 "includes/parse.y"
    { (yyval.node) = new AndBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2601 "parse.tab.c"
    break;

  case 183:
#line 657 "includes/parse.y"
    {
    (yyval.node) = new NotUnaryNode((yyvsp[0].node));
    pool.add((yyval.node)); }
#line 2609 "parse.tab.c"
    break;

  case 184:
#line 661 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2615 "parse.tab.c"
    break;

  case 185:
#line 665 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2621 "parse.tab.c"
    break;

  case 186:
#line 667 "includes/parse.y"
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
#line 2660 "parse.tab.c"
    break;

  case 187:
#line 704 "includes/parse.y"
    { (yyval.intNumber) = LESS; }
#line 2666 "parse.tab.c"
    break;

  case 188:
#line 706 "includes/parse.y"
    { (yyval.intNumber) = GREATER; }
#line 2672 "parse.tab.c"
    break;

  case 189:
#line 708 "includes/parse.y"
    { (yyval.intNumber) = EQEQUAL; }
#line 2678 "parse.tab.c"
    break;

  case 190:
#line 710 "includes/parse.y"
    { (yyval.intNumber) = GREATEREQUAL; }
#line 2684 "parse.tab.c"
    break;

  case 191:
#line 712 "includes/parse.y"
    { (yyval.intNumber) = LESSEQUAL; }
#line 2690 "parse.tab.c"
    break;

  case 192:
#line 714 "includes/parse.y"
    { (yyval.intNumber) = GRLT; }
#line 2696 "parse.tab.c"
    break;

  case 193:
#line 716 "includes/parse.y"
    { (yyval.intNumber) = NOTEQUAL; }
#line 2702 "parse.tab.c"
    break;

  case 194:
#line 718 "includes/parse.y"
    { (yyval.intNumber) = IN; }
#line 2708 "parse.tab.c"
    break;

  case 195:
#line 720 "includes/parse.y"
    { (yyval.intNumber) = 0; }
#line 2714 "parse.tab.c"
    break;

  case 196:
#line 722 "includes/parse.y"
    { (yyval.intNumber) = IS; }
#line 2720 "parse.tab.c"
    break;

  case 197:
#line 724 "includes/parse.y"
    { (yyval.intNumber) = 0; }
#line 2726 "parse.tab.c"
    break;

  case 198:
#line 728 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2732 "parse.tab.c"
    break;

  case 199:
#line 730 "includes/parse.y"
    {
      (yyval.node) = new BarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2741 "parse.tab.c"
    break;

  case 200:
#line 737 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2747 "parse.tab.c"
    break;

  case 201:
#line 739 "includes/parse.y"
    {
      (yyval.node) = new XorBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2756 "parse.tab.c"
    break;

  case 202:
#line 746 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2762 "parse.tab.c"
    break;

  case 203:
#line 748 "includes/parse.y"
    {
      (yyval.node) = new AmpersandBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2771 "parse.tab.c"
    break;

  case 204:
#line 755 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2777 "parse.tab.c"
    break;

  case 205:
#line 757 "includes/parse.y"
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
#line 2792 "parse.tab.c"
    break;

  case 206:
#line 770 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFT; }
#line 2798 "parse.tab.c"
    break;

  case 207:
#line 772 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFT; }
#line 2804 "parse.tab.c"
    break;

  case 208:
#line 776 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2810 "parse.tab.c"
    break;

  case 209:
#line 778 "includes/parse.y"
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
#line 2825 "parse.tab.c"
    break;

  case 210:
#line 791 "includes/parse.y"
    {
      (yyval.intNumber) = PLUS;
    }
#line 2833 "parse.tab.c"
    break;

  case 211:
#line 795 "includes/parse.y"
    {
      (yyval.intNumber) = MINUS;
    }
#line 2841 "parse.tab.c"
    break;

  case 212:
#line 801 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2849 "parse.tab.c"
    break;

  case 213:
#line 805 "includes/parse.y"
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
#line 2876 "parse.tab.c"
    break;

  case 214:
#line 830 "includes/parse.y"
    { (yyval.intNumber) = STAR; }
#line 2882 "parse.tab.c"
    break;

  case 215:
#line 832 "includes/parse.y"
    { (yyval.intNumber) = SLASH; }
#line 2888 "parse.tab.c"
    break;

  case 216:
#line 834 "includes/parse.y"
    { (yyval.intNumber) = PERCENT; }
#line 2894 "parse.tab.c"
    break;

  case 217:
#line 836 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASH; }
#line 2900 "parse.tab.c"
    break;

  case 218:
#line 840 "includes/parse.y"
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
#line 2918 "parse.tab.c"
    break;

  case 219:
#line 854 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2926 "parse.tab.c"
    break;

  case 220:
#line 860 "includes/parse.y"
    { (yyval.intNumber) = PLUS; }
#line 2932 "parse.tab.c"
    break;

  case 221:
#line 862 "includes/parse.y"
    { (yyval.intNumber) = MINUS; }
#line 2938 "parse.tab.c"
    break;

  case 222:
#line 864 "includes/parse.y"
    { (yyval.intNumber) = TILDE; }
#line 2944 "parse.tab.c"
    break;

  case 223:
#line 868 "includes/parse.y"
    {
      (yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2953 "parse.tab.c"
    break;

  case 224:
#line 873 "includes/parse.y"
    {
      if ((yyvsp[0].node) == NULL) {
        (yyval.node) = (yyvsp[-1].node);
      }
      else {
        (yyval.node) = new CallNode(reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent(), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2967 "parse.tab.c"
    break;

  case 225:
#line 885 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2973 "parse.tab.c"
    break;

  case 226:
#line 887 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2979 "parse.tab.c"
    break;

  case 227:
#line 891 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2985 "parse.tab.c"
    break;

  case 228:
#line 893 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2991 "parse.tab.c"
    break;

  case 229:
#line 895 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2997 "parse.tab.c"
    break;

  case 230:
#line 897 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3003 "parse.tab.c"
    break;

  case 231:
#line 899 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 3013 "parse.tab.c"
    break;

  case 232:
#line 905 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3019 "parse.tab.c"
    break;

  case 233:
#line 907 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3025 "parse.tab.c"
    break;

  case 234:
#line 909 "includes/parse.y"
    {
      (yyval.node) = new IntLiteral((yyvsp[0].intNumber));
      pool.add((yyval.node));
    }
#line 3034 "parse.tab.c"
    break;

  case 235:
#line 914 "includes/parse.y"
    {
      (yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
      pool.add((yyval.node));
    }
#line 3043 "parse.tab.c"
    break;

  case 236:
#line 921 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3049 "parse.tab.c"
    break;

  case 237:
#line 923 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3055 "parse.tab.c"
    break;

  case 238:
#line 927 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3061 "parse.tab.c"
    break;

  case 239:
#line 929 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3067 "parse.tab.c"
    break;

  case 245:
#line 942 "includes/parse.y"
    {
    //$$ = new StringLiteral($1);
    //pool.add($$);
  }
#line 3076 "parse.tab.c"
    break;

  case 248:
#line 953 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3082 "parse.tab.c"
    break;

  case 249:
#line 955 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 3088 "parse.tab.c"
    break;

  case 252:
#line 963 "includes/parse.y"
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ArgNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node)); 
      }
    }
#line 3100 "parse.tab.c"
    break;

  case 253:
#line 971 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3106 "parse.tab.c"
    break;

  case 254:
#line 973 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3112 "parse.tab.c"
    break;

  case 272:
#line 1010 "includes/parse.y"
    { (yyval.node) = (yyvsp[-2].node); }
#line 3118 "parse.tab.c"
    break;

  case 273:
#line 1012 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3124 "parse.tab.c"
    break;

  case 286:
#line 1040 "includes/parse.y"
    {
      if ((yyvsp[-1].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-1].vec);
      }
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 3138 "parse.tab.c"
    break;

  case 287:
#line 1052 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 3152 "parse.tab.c"
    break;

  case 288:
#line 1062 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 3158 "parse.tab.c"
    break;

  case 290:
#line 1067 "includes/parse.y"
    {}
#line 3164 "parse.tab.c"
    break;

  case 293:
#line 1075 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3170 "parse.tab.c"
    break;

  case 294:
#line 1077 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3176 "parse.tab.c"
    break;

  case 295:
#line 1079 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3182 "parse.tab.c"
    break;

  case 296:
#line 1083 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 3188 "parse.tab.c"
    break;

  case 297:
#line 1085 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3194 "parse.tab.c"
    break;

  case 308:
#line 1109 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3200 "parse.tab.c"
    break;

  case 309:
#line 1111 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3206 "parse.tab.c"
    break;

  case 314:
#line 1123 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 3212 "parse.tab.c"
    break;

  case 315:
#line 1125 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 3218 "parse.tab.c"
    break;


#line 3222 "parse.tab.c"

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
#line 1132 "includes/parse.y"


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
