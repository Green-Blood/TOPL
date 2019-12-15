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
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  176

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
       0,    69,    69,    73,    77,    78,    84,    85,    89,    91,
      96,   102,   110,   118,   122,   135,   145,   150,   152,   156,
     162,   166,   167,   170,   171,   174,   176,   180,   181,   184,
     185,   188,   190,   192,   194,   198,   278,   283,   287,   292,
     296,   298,   300,   302,   304,   306,   308,   310,   312,   314,
     316,   318,   322,   330,   335,   343,   346,   347,   351,   353,
     355,   359,   369,   381,   386,   390,   403,   405,   413,   418,
     426,   430,   432,   438,   440,   446,   450,   454,   456,   497,
     499,   501,   503,   505,   507,   509,   511,   515,   517,   524,
     526,   533,   535,   542,   544,   557,   559,   563,   565,   578,
     582,   588,   592,   617,   619,   621,   623,   627,   641,   647,
     649,   651,   655,   660,   672,   674,   678,   680,   686,   692,
     697,   705,   707,   713,   724,   736,   746
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AS", "ASSERT", "AT", "BACKQUOTE",
  "CLASS", "CONTINUE", "DEL", "DOT", "EXCEPT", "EXEC", "FINALLY", "FROM",
  "IMPORT", "IN", "IS", "LAMBDA", "LBRACE", "LSQB", "PASS", "RAISE",
  "RBRACE", "RSQB", "TRY", "WITH", "YIELD", "AMPEREQUAL", "AMPERSAND",
  "AND", "BAR", "BREAK", "CIRCUMFLEX", "CIRCUMFLEXEQUAL", "COLON", "COMMA",
  "DEDENT", "DEF", "COMPONENT", "DOUBLESLASHEQUAL", "DOUBLESTAREQUAL",
  "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQEQEQUAL", "FOR", "GLOBAL",
  "GREATER", "GREATEREQUAL", "GRLT", "IF", "INDENT", "LEFTSHIFTEQUAL",
  "LESS", "LESSEQUAL", "LPAR", "MINEQUAL", "NEWLINE", "NOT", "NOTEQUAL",
  "OR", "PERCENTEQUAL", "PLUSEQUAL", "PRINT", "RETURN", "RIGHTSHIFTEQUAL",
  "RPAR", "SEMI", "SLASHEQUAL", "STAREQUAL", "TILDE", "VBAREQUAL", "WHILE",
  "INT", "FLOAT", "NAME", "STRING", "EQUAL", "LEFTSHIFT", "RIGHTSHIFT",
  "PLUS", "MINUS", "STAR", "SLASH", "PERCENT", "DOUBLESLASH", "DOUBLESTAR",
  "$accept", "start", "file_input", "pick_NEWLINE_stmt",
  "star_NEWLINE_stmt", "opt_arglist", "funcdef", "parameters",
  "varargslist", "star_fpdef_COMMA", "opt_COMMA", "fpdef", "fplist",
  "star_fpdef_notest", "stmt", "simple_stmt", "star_SEMI_small_stmt",
  "small_stmt", "expr_stmt", "star_EQUAL", "augassign", "print_stmt",
  "return_stmt", "global_stmt", "star_COMMA_NAME", "compound_stmt",
  "if_stmt", "star_ELIF", "while_stmt", "suite", "plus_stmt", "test",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom", "opt_test", "trailer",
  "arglist", "star_argument_COMMA", YY_NULLPTR
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

#define YYPACT_NINF -141

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-141)))

#define YYTABLE_NINF -18

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -141,    14,  -141,    66,  -141,   -50,   -47,  -141,   -39,    10,
      10,  -141,    10,    10,    10,  -141,    10,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,   -19,   -22,    11,  -141,   191,
      12,    13,    18,   -56,   -49,   -67,  -141,   156,  -141,  -141,
      -7,    -7,  -141,    21,  -141,   -15,  -141,  -141,  -141,    22,
     -43,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,  -141,    10,    10,    10,    10,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,   156,   156,   156,   156,  -141,
    -141,   156,  -141,  -141,   156,  -141,  -141,  -141,  -141,   156,
    -141,   -46,   -10,    29,    33,    23,   129,  -141,   129,  -141,
     143,  -141,   -30,  -141,    11,  -141,    12,    13,    18,   -56,
     -49,   -67,  -141,     5,   156,  -141,  -141,     7,   -45,   129,
     129,     0,    25,  -141,  -141,  -141,  -141,  -141,    10,    15,
    -141,    10,  -141,  -141,   -45,  -141,    43,  -141,  -141,  -141,
      98,    -6,  -141,  -141,    55,  -141,    26,    27,  -141,  -141,
      24,    10,    62,    27,  -141,    67,  -141,  -141,  -141,    73,
     129,   -45,   129,  -141,  -141,  -141
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     0,     1,     0,     0,     3,     0,     0,
     122,     4,     0,     0,    54,   111,     0,   119,   120,   117,
     118,   109,   110,     6,    60,     5,    25,    30,    31,    32,
      33,    34,    26,    58,    59,    37,    70,    71,    73,    76,
      77,    87,    89,    91,    93,    97,   101,     0,   108,   115,
       0,     0,    57,     0,   121,     0,    75,    52,    53,     0,
       0,    45,    47,    51,    50,    48,    41,    44,    40,    49,
      43,    42,    46,     0,     0,     0,     0,    81,    82,    80,
      83,    85,    79,    84,    86,     0,     0,     0,     0,    95,
      96,     0,    99,   100,     0,   103,   104,   105,   106,     0,
     107,   113,    16,     0,     0,    55,     0,   116,     0,    28,
       0,    36,    39,    35,    72,    74,    78,    88,    90,    92,
      94,    98,   102,   126,     0,   114,    13,     0,     0,     0,
       0,     0,     0,    66,    64,    65,    27,    29,     0,     0,
       8,     0,   112,    12,     0,    19,    18,    10,    11,    56,
       0,    62,    38,   123,    18,    24,     0,    15,    14,    69,
       0,     0,     0,   125,   124,    22,    20,    67,    68,     0,
       0,    21,     0,    61,    23,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,  -141,  -141,  -141,    58,  -141,  -141,
     -42,  -140,  -141,  -141,  -137,    -3,  -141,     1,  -141,   -25,
    -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -101,
    -141,    -8,  -141,    40,    -2,  -141,  -141,    31,    34,    30,
      36,  -141,    28,  -141,    35,  -141,   -44,  -141,  -141,  -141,
    -141,  -141,  -141,  -141,  -141
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    23,     3,   139,    24,   103,   127,   128,
     158,   146,   156,   165,    25,   133,    60,    27,    28,   111,
      74,    29,    30,    31,   105,    32,    33,   151,    34,   134,
     160,    35,    36,    37,    38,    39,    85,    40,    41,    42,
      43,    91,    44,    94,    45,    99,    46,    47,    48,   101,
      49,    55,   125,   140,   141
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,    53,    54,   100,   155,    57,    58,   135,    59,    61,
      56,   123,   144,   159,     4,    62,   109,    95,    96,    97,
      98,    63,    64,   168,    89,    90,   110,    50,   147,   148,
      51,   174,   145,    92,    93,    65,   161,   162,    52,    66,
      75,    76,   124,    86,    67,    68,    87,    88,    69,   138,
     102,    70,    71,   107,    72,   122,   106,   108,   126,   131,
      73,   167,     5,     6,   129,   112,   113,    10,   130,   173,
      12,   175,     8,    -9,   115,   143,     9,   149,   150,   157,
     142,    10,    15,   153,    12,    17,    18,    19,    20,    13,
      14,   163,    21,    22,   166,   -17,    15,   170,    16,    17,
      18,    19,    20,   171,     5,     6,    21,    22,   172,   104,
       7,   137,   164,   152,     8,   114,   116,   118,     9,   120,
     117,     0,     0,    10,   119,    11,    12,     0,     0,   121,
     112,    13,    14,   154,     0,     0,     5,     6,    15,     0,
      16,    17,    18,    19,    20,     0,     8,    26,    21,    22,
       9,     0,     0,   169,     0,    10,     0,    26,    12,     0,
       0,     0,     0,    13,    14,     0,     0,     0,     0,     0,
      15,     0,    16,    17,    18,    19,    20,     8,     0,     0,
      21,    22,     0,     0,     0,     0,    10,     0,   132,    12,
       0,     8,     0,     0,    13,    14,     0,     0,     0,     0,
      10,    15,   136,    12,    17,    18,    19,    20,    13,    14,
       0,    21,    22,    10,     0,    15,     0,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,     0,    15,     0,
       0,    17,    18,    19,    20,     0,    77,    78,    21,    22,
      79,    80,    81,     0,     0,     0,    82,    83,     0,     0,
       0,     0,    84
};

static const yytype_int16 yycheck[] =
{
       3,     9,    10,    47,   144,    13,    14,   108,    16,    28,
      12,    57,    57,   150,     0,    34,    59,    84,    85,    86,
      87,    40,    41,   160,    80,    81,    69,    77,   129,   130,
      77,   171,    77,    82,    83,    54,    42,    43,    77,    58,
      62,    30,    88,    31,    63,    64,    33,    29,    67,    79,
      57,    70,    71,    68,    73,    99,    35,    35,    68,    36,
      79,    37,    38,    39,    35,    73,    74,    57,    35,   170,
      60,   172,    48,    68,    76,    68,    52,    77,    53,    36,
     124,    57,    72,    68,    60,    75,    76,    77,    78,    65,
      66,    36,    82,    83,    68,    68,    72,    35,    74,    75,
      76,    77,    78,    36,    38,    39,    82,    83,    35,    51,
      44,   110,   154,   138,    48,    75,    85,    87,    52,    91,
      86,    -1,    -1,    57,    88,    59,    60,    -1,    -1,    94,
     138,    65,    66,   141,    -1,    -1,    38,    39,    72,    -1,
      74,    75,    76,    77,    78,    -1,    48,   150,    82,    83,
      52,    -1,    -1,   161,    -1,    57,    -1,   160,    60,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    48,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,
      -1,    48,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      57,    72,    59,    60,    75,    76,    77,    78,    65,    66,
      -1,    82,    83,    57,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    -1,    -1,    -1,    82,    83,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    -1,    45,    46,    82,    83,
      49,    50,    51,    -1,    -1,    -1,    55,    56,    -1,    -1,
      -1,    -1,    61
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    90,    91,    93,     0,    38,    39,    44,    48,    52,
      57,    59,    60,    65,    66,    72,    74,    75,    76,    77,
      78,    82,    83,    92,    95,   103,   104,   106,   107,   110,
     111,   112,   114,   115,   117,   120,   121,   122,   123,   124,
     126,   127,   128,   129,   131,   133,   135,   136,   137,   139,
      77,    77,    77,   120,   120,   140,   123,   120,   120,   120,
     105,    28,    34,    40,    41,    54,    58,    63,    64,    67,
      70,    71,    73,    79,   109,    62,    30,    45,    46,    49,
      50,    51,    55,    56,    61,   125,    31,    33,    29,    80,
      81,   130,    82,    83,   132,    84,    85,    86,    87,   134,
     135,   138,    57,    96,    96,   113,    35,    68,    35,    59,
      69,   108,   120,   120,   122,   123,   126,   127,   128,   129,
     131,   133,   135,    57,    88,   141,    68,    97,    98,    35,
      35,    36,    59,   104,   118,   118,    59,   106,    79,    94,
     142,   143,   135,    68,    57,    77,   100,   118,   118,    77,
      53,   116,   108,    68,   120,   100,   101,    36,    99,   103,
     119,    42,    43,    36,    99,   102,    68,    37,   103,   120,
      35,    36,    35,   118,   100,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   106,   106,   106,   107,   107,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   111,   111,   112,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   121,   121,   122,   122,   123,   123,   124,   124,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   133,   134,   134,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   138,   138,   139,   139,   139,   139,
     139,   140,   140,   141,   142,   143,   143
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     2,     0,     1,     0,
       5,     5,     3,     2,     3,     3,     0,     1,     0,     1,
       3,     3,     2,     3,     0,     1,     1,     4,     3,     3,
       0,     1,     1,     1,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     3,     3,     0,     1,     1,
       1,     8,     5,     5,     0,     4,     1,     4,     2,     1,
       1,     1,     3,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     4,     2,     2,     0,     3,     1,     1,     1,
       1,     1,     0,     3,     3,     3,     0
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
#line 79 "includes/parse.y"
    { (yyvsp[0].node)->eval(); }
#line 1605 "parse.tab.c"
    break;

  case 8:
#line 90 "includes/parse.y"
    { (yyval.vec) = (yyvsp[0].vec); }
#line 1611 "parse.tab.c"
    break;

  case 9:
#line 92 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1617 "parse.tab.c"
    break;

  case 10:
#line 97 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1627 "parse.tab.c"
    break;

  case 11:
#line 103 "includes/parse.y"
    {
      (yyval.node) = new FuncNode((yyvsp[-3].name), (yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
      delete [] (yyvsp[-3].name);
    }
#line 1637 "parse.tab.c"
    break;

  case 12:
#line 111 "includes/parse.y"
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ParaNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node));
      }
    }
#line 1649 "parse.tab.c"
    break;

  case 13:
#line 119 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1655 "parse.tab.c"
    break;

  case 14:
#line 123 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 1669 "parse.tab.c"
    break;

  case 15:
#line 136 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 1683 "parse.tab.c"
    break;

  case 16:
#line 146 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 1689 "parse.tab.c"
    break;

  case 17:
#line 151 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1695 "parse.tab.c"
    break;

  case 18:
#line 153 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1701 "parse.tab.c"
    break;

  case 19:
#line 157 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 1711 "parse.tab.c"
    break;

  case 20:
#line 163 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1717 "parse.tab.c"
    break;

  case 25:
#line 175 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1723 "parse.tab.c"
    break;

  case 26:
#line 177 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1729 "parse.tab.c"
    break;

  case 31:
#line 189 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1735 "parse.tab.c"
    break;

  case 32:
#line 191 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1741 "parse.tab.c"
    break;

  case 33:
#line 193 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1747 "parse.tab.c"
    break;

  case 34:
#line 195 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 1753 "parse.tab.c"
    break;

  case 35:
#line 199 "includes/parse.y"
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
#line 1837 "parse.tab.c"
    break;

  case 36:
#line 279 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 1846 "parse.tab.c"
    break;

  case 37:
#line 284 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1852 "parse.tab.c"
    break;

  case 38:
#line 288 "includes/parse.y"
    {
      (yyval.node) = new AsgBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 1861 "parse.tab.c"
    break;

  case 39:
#line 293 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1867 "parse.tab.c"
    break;

  case 40:
#line 297 "includes/parse.y"
    { (yyval.intNumber) = PLUSEQUAL; }
#line 1873 "parse.tab.c"
    break;

  case 41:
#line 299 "includes/parse.y"
    { (yyval.intNumber) = MINEQUAL; }
#line 1879 "parse.tab.c"
    break;

  case 42:
#line 301 "includes/parse.y"
    { (yyval.intNumber) = STAREQUAL; }
#line 1885 "parse.tab.c"
    break;

  case 43:
#line 303 "includes/parse.y"
    { (yyval.intNumber) = SLASHEQUAL; }
#line 1891 "parse.tab.c"
    break;

  case 44:
#line 305 "includes/parse.y"
    { (yyval.intNumber) = PERCENTEQUAL; }
#line 1897 "parse.tab.c"
    break;

  case 45:
#line 307 "includes/parse.y"
    { (yyval.intNumber) = AMPEREQUAL; }
#line 1903 "parse.tab.c"
    break;

  case 46:
#line 309 "includes/parse.y"
    { (yyval.intNumber) = VBAREQUAL; }
#line 1909 "parse.tab.c"
    break;

  case 47:
#line 311 "includes/parse.y"
    { (yyval.intNumber) = CIRCUMFLEXEQUAL; }
#line 1915 "parse.tab.c"
    break;

  case 48:
#line 313 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFTEQUAL; }
#line 1921 "parse.tab.c"
    break;

  case 49:
#line 315 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFTEQUAL; }
#line 1927 "parse.tab.c"
    break;

  case 50:
#line 317 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESTAREQUAL; }
#line 1933 "parse.tab.c"
    break;

  case 51:
#line 319 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASHEQUAL; }
#line 1939 "parse.tab.c"
    break;

  case 52:
#line 323 "includes/parse.y"
    {
      (yyval.node) = new PrintNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 1948 "parse.tab.c"
    break;

  case 53:
#line 331 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode((yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 1957 "parse.tab.c"
    break;

  case 54:
#line 336 "includes/parse.y"
    {
      (yyval.node) = new ReturnNode(NULL);
      pool.add((yyval.node));
    }
#line 1966 "parse.tab.c"
    break;

  case 58:
#line 352 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1972 "parse.tab.c"
    break;

  case 59:
#line 354 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1978 "parse.tab.c"
    break;

  case 60:
#line 356 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 1984 "parse.tab.c"
    break;

  case 61:
#line 360 "includes/parse.y"
    {
      if ((yyvsp[-6].node)) {
        (yyval.node) = new IfNode((yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[0].node));
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 1998 "parse.tab.c"
    break;

  case 62:
#line 370 "includes/parse.y"
    {
      if ((yyvsp[-3].node)) {
        (yyval.node) = new IfNode((yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), NULL);
        pool.add((yyval.node));
      }
      else {
        std::cout << "SyntaxError: invalid syntax" << std::endl;
      }
    }
#line 2012 "parse.tab.c"
    break;

  case 63:
#line 382 "includes/parse.y"
    {
      (yyval.node) = new ElifNode((yyvsp[-2].node),(yyvsp[0].node),(yyvsp[-4].node));
      pool.add((yyval.node));
    }
#line 2021 "parse.tab.c"
    break;

  case 64:
#line 387 "includes/parse.y"
    { (yyval.node)=NULL;}
#line 2027 "parse.tab.c"
    break;

  case 65:
#line 391 "includes/parse.y"
    {
    if ((yyvsp[-2].node)) {
      (yyval.node) = new WhileNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
    else {
      std::cout << "SyntaxError: invalid syntax" << std::endl;
    }
  }
#line 2041 "parse.tab.c"
    break;

  case 66:
#line 404 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2047 "parse.tab.c"
    break;

  case 67:
#line 406 "includes/parse.y"
    {
      (yyval.node) = new SuiteNode(*(yyvsp[-1].vec));
      delete (yyvsp[-1].vec);
      pool.add((yyval.node));
    }
#line 2057 "parse.tab.c"
    break;

  case 68:
#line 414 "includes/parse.y"
    {
      (yyval.vec) = (yyvsp[-1].vec);
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2066 "parse.tab.c"
    break;

  case 69:
#line 419 "includes/parse.y"
    {
      (yyval.vec) = new std::vector<Node*>();
      (yyval.vec)->push_back((yyvsp[0].node));
    }
#line 2075 "parse.tab.c"
    break;

  case 70:
#line 427 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2081 "parse.tab.c"
    break;

  case 71:
#line 431 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2087 "parse.tab.c"
    break;

  case 72:
#line 433 "includes/parse.y"
    { (yyval.node) = new OrBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2095 "parse.tab.c"
    break;

  case 73:
#line 439 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2101 "parse.tab.c"
    break;

  case 74:
#line 441 "includes/parse.y"
    { (yyval.node) = new AndBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2109 "parse.tab.c"
    break;

  case 75:
#line 447 "includes/parse.y"
    {
    (yyval.node) = new NotUnaryNode((yyvsp[0].node));
    pool.add((yyval.node)); }
#line 2117 "parse.tab.c"
    break;

  case 76:
#line 451 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2123 "parse.tab.c"
    break;

  case 77:
#line 455 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2129 "parse.tab.c"
    break;

  case 78:
#line 457 "includes/parse.y"
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
#line 2172 "parse.tab.c"
    break;

  case 79:
#line 498 "includes/parse.y"
    { (yyval.intNumber) = LESS; }
#line 2178 "parse.tab.c"
    break;

  case 80:
#line 500 "includes/parse.y"
    { (yyval.intNumber) = GREATER; }
#line 2184 "parse.tab.c"
    break;

  case 81:
#line 502 "includes/parse.y"
    { (yyval.intNumber) = EQEQUAL; }
#line 2190 "parse.tab.c"
    break;

  case 82:
#line 504 "includes/parse.y"
    { (yyval.intNumber) = EQEQEQUAL; }
#line 2196 "parse.tab.c"
    break;

  case 83:
#line 506 "includes/parse.y"
    { (yyval.intNumber) = GREATEREQUAL; }
#line 2202 "parse.tab.c"
    break;

  case 84:
#line 508 "includes/parse.y"
    { (yyval.intNumber) = LESSEQUAL; }
#line 2208 "parse.tab.c"
    break;

  case 85:
#line 510 "includes/parse.y"
    { (yyval.intNumber) = GRLT; }
#line 2214 "parse.tab.c"
    break;

  case 86:
#line 512 "includes/parse.y"
    { (yyval.intNumber) = NOTEQUAL; }
#line 2220 "parse.tab.c"
    break;

  case 87:
#line 516 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2226 "parse.tab.c"
    break;

  case 88:
#line 518 "includes/parse.y"
    {
      (yyval.node) = new BarBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2235 "parse.tab.c"
    break;

  case 89:
#line 525 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2241 "parse.tab.c"
    break;

  case 90:
#line 527 "includes/parse.y"
    {
      (yyval.node) = new XorBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2250 "parse.tab.c"
    break;

  case 91:
#line 534 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2256 "parse.tab.c"
    break;

  case 92:
#line 536 "includes/parse.y"
    {
      (yyval.node) = new AmpersandBinaryNode((yyvsp[-2].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2265 "parse.tab.c"
    break;

  case 93:
#line 543 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2271 "parse.tab.c"
    break;

  case 94:
#line 545 "includes/parse.y"
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
#line 2286 "parse.tab.c"
    break;

  case 95:
#line 558 "includes/parse.y"
    { (yyval.intNumber) = LEFTSHIFT; }
#line 2292 "parse.tab.c"
    break;

  case 96:
#line 560 "includes/parse.y"
    { (yyval.intNumber) = RIGHTSHIFT; }
#line 2298 "parse.tab.c"
    break;

  case 97:
#line 564 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2304 "parse.tab.c"
    break;

  case 98:
#line 566 "includes/parse.y"
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
#line 2319 "parse.tab.c"
    break;

  case 99:
#line 579 "includes/parse.y"
    {
      (yyval.intNumber) = PLUS;
    }
#line 2327 "parse.tab.c"
    break;

  case 100:
#line 583 "includes/parse.y"
    {
      (yyval.intNumber) = MINUS;
    }
#line 2335 "parse.tab.c"
    break;

  case 101:
#line 589 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2343 "parse.tab.c"
    break;

  case 102:
#line 593 "includes/parse.y"
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
#line 2370 "parse.tab.c"
    break;

  case 103:
#line 618 "includes/parse.y"
    { (yyval.intNumber) = STAR; }
#line 2376 "parse.tab.c"
    break;

  case 104:
#line 620 "includes/parse.y"
    { (yyval.intNumber) = SLASH; }
#line 2382 "parse.tab.c"
    break;

  case 105:
#line 622 "includes/parse.y"
    { (yyval.intNumber) = PERCENT; }
#line 2388 "parse.tab.c"
    break;

  case 106:
#line 624 "includes/parse.y"
    { (yyval.intNumber) = DOUBLESLASH; }
#line 2394 "parse.tab.c"
    break;

  case 107:
#line 628 "includes/parse.y"
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
#line 2412 "parse.tab.c"
    break;

  case 108:
#line 642 "includes/parse.y"
    {
      (yyval.node) = (yyvsp[0].node);
    }
#line 2420 "parse.tab.c"
    break;

  case 109:
#line 648 "includes/parse.y"
    { (yyval.intNumber) = PLUS; }
#line 2426 "parse.tab.c"
    break;

  case 110:
#line 650 "includes/parse.y"
    { (yyval.intNumber) = MINUS; }
#line 2432 "parse.tab.c"
    break;

  case 111:
#line 652 "includes/parse.y"
    { (yyval.intNumber) = TILDE; }
#line 2438 "parse.tab.c"
    break;

  case 112:
#line 656 "includes/parse.y"
    {
      (yyval.node) = new PowBinaryNode((yyvsp[-3].node), (yyvsp[0].node));
      pool.add((yyval.node));
    }
#line 2447 "parse.tab.c"
    break;

  case 113:
#line 661 "includes/parse.y"
    {
      if ((yyvsp[0].node) == NULL) {
        (yyval.node) = (yyvsp[-1].node);
      }
      else {
        (yyval.node) = new CallNode(reinterpret_cast<IdentNode*>((yyvsp[-1].node))->getIdent(), (yyvsp[0].node));
        pool.add((yyval.node));
      }
    }
#line 2461 "parse.tab.c"
    break;

  case 114:
#line 673 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2467 "parse.tab.c"
    break;

  case 115:
#line 675 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2473 "parse.tab.c"
    break;

  case 116:
#line 679 "includes/parse.y"
    { (yyval.node) = (yyvsp[-1].node); }
#line 2479 "parse.tab.c"
    break;

  case 117:
#line 681 "includes/parse.y"
    {
      (yyval.node) = new IdentNode((yyvsp[0].name));
      delete [] (yyvsp[0].name);
      pool.add((yyval.node));
    }
#line 2489 "parse.tab.c"
    break;

  case 118:
#line 687 "includes/parse.y"
    {
    (yyval.node) = new StringLiteral((yyvsp[0].str));
    pool.add((yyval.node));

  }
#line 2499 "parse.tab.c"
    break;

  case 119:
#line 693 "includes/parse.y"
    {
      (yyval.node) = new IntLiteral((yyvsp[0].intNumber));
      pool.add((yyval.node));
    }
#line 2508 "parse.tab.c"
    break;

  case 120:
#line 698 "includes/parse.y"
    {
      (yyval.node) = new FloatLiteral((yyvsp[0].fltNumber));
      pool.add((yyval.node));
    }
#line 2517 "parse.tab.c"
    break;

  case 121:
#line 706 "includes/parse.y"
    { (yyval.node) = (yyvsp[0].node); }
#line 2523 "parse.tab.c"
    break;

  case 122:
#line 708 "includes/parse.y"
    { (yyval.node) = NULL; }
#line 2529 "parse.tab.c"
    break;

  case 123:
#line 714 "includes/parse.y"
    {
      if ((yyvsp[-1].vec)) {
        (yyval.node) = new ArgNode((yyvsp[-1].vec));
        delete (yyvsp[-1].vec);
        pool.add((yyval.node)); 
      }
    }
#line 2541 "parse.tab.c"
    break;

  case 124:
#line 725 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 2555 "parse.tab.c"
    break;

  case 125:
#line 737 "includes/parse.y"
    {
      if ((yyvsp[-2].vec) == NULL) {
        (yyval.vec) = new std::vector<Node*>();
      }
      else {
        (yyval.vec) = (yyvsp[-2].vec);
      }
      (yyval.vec)->push_back((yyvsp[-1].node));
    }
#line 2569 "parse.tab.c"
    break;

  case 126:
#line 747 "includes/parse.y"
    { (yyval.vec) = NULL; }
#line 2575 "parse.tab.c"
    break;


#line 2579 "parse.tab.c"

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
#line 749 "includes/parse.y"


#include <stdio.h>
void yyerror (const char *s)
{
    if(yylloc.first_line > 0) {
        fprintf (stderr, "%d.%d-%d.%d:", yylloc.first_line, yylloc.first_column,
                                       yylloc.last_line,  yylloc.last_column);
    }
    fprintf(stderr, " %s with [%s]\n", s, yytext);
}
