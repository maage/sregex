/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 10 "src/sregex/sre_yyparser.y"


#ifndef DDEBUG
#define DDEBUG 0
#endif
#include <sregex/ddebug.h>


#include <sregex/sre_palloc.h>
#include <sregex/sre_capture.h>
#include <sregex/sre_regex.h>


#define YYLTYPE YYLTYPE
typedef struct YYLTYPE {
    sre_char  *pos;
    sre_char  *last;
} YYLTYPE;


#define YYLLOC_DEFAULT(Cur, Rhs, N)                                          \
    do {                                                                     \
        if (N) {                                                             \
            (Cur).pos = YYRHSLOC(Rhs, 1).pos;                                \
            (Cur).last = YYRHSLOC(Rhs, N).last;                              \
        } else {                                                             \
            (Cur).pos = YYRHSLOC(Rhs, 0).last;                               \
            (Cur).last = (Cur).pos;                                          \
        }                                                                    \
    } while (0)


#include <sregex/sre_yyparser.h>
#include <ctype.h>


#define sre_read_char(sp)  *(*(sp))++


static int yylex(YYSTYPE *lvalp, YYLTYPE *locp, sre_pool_t *pool, sre_char **src);
static void yyerror(YYLTYPE *locp, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags,
    sre_regex_t **parsed, sre_char **err_pos, char *s);
static sre_regex_t *sre_regex_desugar_counted_repetition(sre_pool_t *pool,
    sre_regex_t *subj, sre_regex_cquant_t *cquant, unsigned greedy);


/* Line 371 of yacc.c  */
#line 115 "src/sregex/sre_yyparser.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "sre_yyparser.h".  */
#ifndef YY_YY_SRC_SREGEX_SRE_YYPARSER_H_INCLUDED
# define YY_YY_SRC_SREGEX_SRE_YYPARSER_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     SRE_REGEX_TOKEN_CHAR = 258,
     SRE_REGEX_TOKEN_EOF = 259,
     SRE_REGEX_TOKEN_BAD = 260,
     SRE_REGEX_TOKEN_CQUANT = 261,
     SRE_REGEX_TOKEN_CHAR_CLASS = 262,
     SRE_REGEX_TOKEN_ASSERTION = 263
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 80 "src/sregex/sre_yyparser.y"

    sre_regex_t         *re;
    sre_char             ch;
    sre_uint_t           group;
    sre_regex_cquant_t   cquant;


/* Line 387 of yacc.c  */
#line 174 "src/sregex/sre_yyparser.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_SRC_SREGEX_SRE_YYPARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 214 "src/sregex/sre_yyparser.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   30

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  19
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  7
/* YYNRULES -- Number of rules.  */
#define YYNRULES  26
/* YYNRULES -- Number of states.  */
#define YYNSTATES  34

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   263

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    18,     2,     2,     2,
      13,    14,    10,    12,     2,     2,    16,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    15,     2,
       2,     2,     2,    11,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    17,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     9,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    14,    17,    18,    20,
      23,    27,    30,    34,    37,    41,    44,    48,    49,    54,
      60,    62,    64,    66,    68,    70,    72
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      20,     0,    -1,    21,     4,    -1,    22,    -1,    21,     9,
      22,    -1,    23,    -1,    22,    23,    -1,    -1,    25,    -1,
      25,    10,    -1,    25,    10,    11,    -1,    25,    12,    -1,
      25,    12,    11,    -1,    25,    11,    -1,    25,    11,    11,
      -1,    25,     6,    -1,    25,     6,    11,    -1,    -1,    13,
      24,    21,    14,    -1,    13,    11,    15,    21,    14,    -1,
       3,    -1,    16,    -1,    17,    -1,    18,    -1,     8,    -1,
       7,    -1,    15,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   109,   110,   120,   121,   129,   138,   139,
     150,   159,   170,   179,   190,   199,   207,   217,   221,   231,
     236,   285,   293,   303,   313,   314,   324
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SRE_REGEX_TOKEN_CHAR",
  "SRE_REGEX_TOKEN_EOF", "SRE_REGEX_TOKEN_BAD", "SRE_REGEX_TOKEN_CQUANT",
  "SRE_REGEX_TOKEN_CHAR_CLASS", "SRE_REGEX_TOKEN_ASSERTION", "'|'", "'*'",
  "'?'", "'+'", "'('", "')'", "':'", "'.'", "'^'", "'$'", "$accept",
  "regex", "alt", "concat", "repeat", "count", "atom", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   124,
      42,    63,    43,    40,    41,    58,    46,    94,    36
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    19,    20,    21,    21,    22,    22,    22,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    24,    25,    25,
      25,    25,    25,    25,    25,    25,    25
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     2,     0,     1,     2,
       3,     2,     3,     2,     3,     2,     3,     0,     4,     5,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,    20,    25,    24,    17,    26,    21,    22,    23,     0,
       0,     3,     5,     8,     0,     7,     1,     2,     7,     6,
      15,     9,    13,    11,     7,     0,     4,    16,    10,    14,
      12,     0,    18,    19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     9,    10,    11,    12,    15,    13
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -14
static const yytype_int8 yypact[] =
{
      -3,   -14,   -14,   -14,    -5,   -14,   -14,   -14,   -14,     7,
      -1,    -3,   -14,    11,    -6,    -3,   -14,   -14,    -3,   -14,
       9,    15,    17,    18,    -3,    10,    -3,   -14,   -14,   -14,
     -14,    16,   -14,   -14
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -14,   -14,   -13,     0,   -10,   -14,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
       1,    19,    25,    17,     2,     3,    14,    16,    18,    24,
       4,    31,     5,     6,     7,     8,    19,    20,    26,    18,
      27,    21,    22,    23,    32,    18,    28,     0,    29,    30,
      33
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-14)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int8 yycheck[] =
{
       3,    11,    15,     4,     7,     8,    11,     0,     9,    15,
      13,    24,    15,    16,    17,    18,    26,     6,    18,     9,
      11,    10,    11,    12,    14,     9,    11,    -1,    11,    11,
      14
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     7,     8,    13,    15,    16,    17,    18,    20,
      21,    22,    23,    25,    11,    24,     0,     4,     9,    23,
       6,    10,    11,    12,    15,    21,    22,    11,    11,    11,
      11,    21,    14,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      yyerror (&yylloc, pool, src, ncaps, flags, parsed, err_pos, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
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
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, &yylloc, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, &yylloc, pool, src)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location, pool, src, ncaps, flags, parsed, err_pos); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, pool, src, ncaps, flags, parsed, err_pos)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    sre_pool_t *pool;
    sre_char **src;
    sre_uint_t *ncaps;
    int flags;
    sre_regex_t **parsed;
    sre_char **err_pos;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
  YYUSE (pool);
  YYUSE (src);
  YYUSE (ncaps);
  YYUSE (flags);
  YYUSE (parsed);
  YYUSE (err_pos);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp, pool, src, ncaps, flags, parsed, err_pos)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
    sre_pool_t *pool;
    sre_char **src;
    sre_uint_t *ncaps;
    int flags;
    sre_regex_t **parsed;
    sre_char **err_pos;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, pool, src, ncaps, flags, parsed, err_pos);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule, pool, src, ncaps, flags, parsed, err_pos)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
    sre_pool_t *pool;
    sre_char **src;
    sre_uint_t *ncaps;
    int flags;
    sre_regex_t **parsed;
    sre_char **err_pos;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       , pool, src, ncaps, flags, parsed, err_pos);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule, pool, src, ncaps, flags, parsed, err_pos); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp, pool, src, ncaps, flags, parsed, err_pos)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
    sre_pool_t *pool;
    sre_char **src;
    sre_uint_t *ncaps;
    int flags;
    sre_regex_t **parsed;
    sre_char **err_pos;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (pool);
  YYUSE (src);
  YYUSE (ncaps);
  YYUSE (flags);
  YYUSE (parsed);
  YYUSE (err_pos);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags, sre_regex_t **parsed, sre_char **err_pos)
#else
int
yyparse (pool, src, ncaps, flags, parsed, err_pos)
    sre_pool_t *pool;
    sre_char **src;
    sre_uint_t *ncaps;
    int flags;
    sre_regex_t **parsed;
    sre_char **err_pos;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;


#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
static YYSTYPE yyval_default;
# define YY_INITIAL_VALUE(Value) = Value
#endif
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc = yyloc_default;


    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

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
      yychar = YYLEX;
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
     `$$ = $1'.

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
        case 2:
/* Line 1792 of yacc.c  */
#line 102 "src/sregex/sre_yyparser.y"
    {
        *parsed = (yyvsp[(1) - (2)].re);
        return SRE_OK;
      }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 111 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_ALT, (yyvsp[(1) - (3)].re), (yyvsp[(3) - (3)].re));
        if ((yyval.re) == NULL) {
            YYABORT;
        }
     }
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 122 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_CAT, (yyvsp[(1) - (2)].re), (yyvsp[(2) - (2)].re));
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 129 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_NIL, NULL, NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }
      }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 140 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_STAR, (yyvsp[(1) - (2)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }

            (yyval.re)->greedy = 1;
        }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 151 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_STAR, (yyvsp[(1) - (3)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 160 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_PLUS, (yyvsp[(1) - (2)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }

            (yyval.re)->greedy = 1;
        }
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 171 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_PLUS, (yyvsp[(1) - (3)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 180 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_QUEST, (yyvsp[(1) - (2)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }

            (yyval.re)->greedy = 1;
        }
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 191 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_QUEST, (yyvsp[(1) - (3)].re),
                                  NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 200 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_desugar_counted_repetition(pool, (yyvsp[(1) - (2)].re), &(yyvsp[(2) - (2)].cquant), 1 /* greedy */);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 208 "src/sregex/sre_yyparser.y"
    {
            (yyval.re) = sre_regex_desugar_counted_repetition(pool, (yyvsp[(1) - (3)].re), &(yyvsp[(2) - (3)].cquant), 0 /* greedy */);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 217 "src/sregex/sre_yyparser.y"
    { (yyval.group) = ++(*ncaps); }
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 222 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_PAREN, (yyvsp[(3) - (4)].re), NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }

        (yyval.re)->group = (yyvsp[(2) - (4)].group);
      }
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 232 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = (yyvsp[(4) - (5)].re);
      }
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 237 "src/sregex/sre_yyparser.y"
    {
        if ((flags & SRE_REGEX_CASELESS)
            && (((yyvsp[(1) - (1)].ch) >= 'A' && (yyvsp[(1) - (1)].ch) <= 'Z')
                || ((yyvsp[(1) - (1)].ch) >= 'a' && (yyvsp[(1) - (1)].ch) <= 'z')))
        {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }

            (yyval.re)->range = sre_palloc(pool, sizeof(sre_regex_range_t));
            if ((yyval.re)->range == NULL) {
                YYABORT;
            }

            (yyval.re)->range->from = (yyvsp[(1) - (1)].ch);
            (yyval.re)->range->to = (yyvsp[(1) - (1)].ch);

            (yyval.re)->range->next = sre_palloc(pool, sizeof(sre_regex_range_t));
            if ((yyval.re)->range->next == NULL) {
                YYABORT;
            }

            if ((yyvsp[(1) - (1)].ch) <= 'Z') {
                /* upper case */
                (yyval.re)->range->next->from = (yyvsp[(1) - (1)].ch) + 32;
                (yyval.re)->range->next->to = (yyvsp[(1) - (1)].ch) + 32;

            } else {
                /* lower case */

                (yyval.re)->range->next->from = (yyvsp[(1) - (1)].ch) - 32;
                (yyval.re)->range->next->to = (yyvsp[(1) - (1)].ch) - 32;
            }

            (yyval.re)->range->next->next = NULL;

        } else {
            (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_LIT, NULL, NULL);
            if ((yyval.re) == NULL) {
                YYABORT;
            }

            (yyval.re)->ch = (yyvsp[(1) - (1)].ch);
        }
      }
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 286 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_DOT, NULL, NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }
      }
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 294 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL, NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }

        (yyval.re)->assertion_type = SRE_REGEX_ASSERTION_CARET;
      }
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 304 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL, NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }

        (yyval.re)->assertion_type = SRE_REGEX_ASSERTION_DOLLAR;
      }
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 315 "src/sregex/sre_yyparser.y"
    {
        if (flags & SRE_REGEX_CASELESS) {
            (yyval.re)->range = sre_regex_turn_char_class_caseless(pool, (yyvsp[(1) - (1)].re)->range);
            if ((yyval.re) == NULL) {
                YYABORT;
            }
        }
      }
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 325 "src/sregex/sre_yyparser.y"
    {
        (yyval.re) = sre_regex_create(pool, SRE_REGEX_TYPE_LIT, NULL, NULL);
        if ((yyval.re) == NULL) {
            YYABORT;
        }

        (yyval.re)->ch = ':';
      }
    break;


/* Line 1792 of yacc.c  */
#line 1872 "src/sregex/sre_yyparser.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, pool, src, ncaps, flags, parsed, err_pos, YY_("syntax error"));
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
        yyerror (&yylloc, pool, src, ncaps, flags, parsed, err_pos, yymsgp);
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
		      yytoken, &yylval, &yylloc, pool, src, ncaps, flags, parsed, err_pos);
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
		  yystos[yystate], yyvsp, yylsp, pool, src, ncaps, flags, parsed, err_pos);
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
  yyerror (&yylloc, pool, src, ncaps, flags, parsed, err_pos, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, pool, src, ncaps, flags, parsed, err_pos);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp, pool, src, ncaps, flags, parsed, err_pos);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 335 "src/sregex/sre_yyparser.y"



static int
yylex(YYSTYPE *lvalp, YYLTYPE *locp, sre_pool_t *pool, sre_char **src)
{
    sre_char             c;
    int                  from, to;
    sre_uint_t           i, n, num;
    unsigned             seen_dash, no_dash, seen_curly_bracket;
    sre_regex_t         *r;
    sre_regex_range_t   *range, *last = NULL;
    sre_regex_type_t     type;

    static sre_char      esc_D_ranges[] = { 0, 47, 58, 255 };

    static sre_char      esc_w_ranges[] = { 'A', 'Z', 'a', 'z', '0', '9',
                                          '_', '_' };

    static sre_char      esc_W_ranges[] = { 0, 47, 58, 64, 91, 94, 96, 96,
                                          123, 255 };

    static sre_char      esc_s_ranges[] = { ' ', ' ', '\f', '\f', '\n', '\n',
                                          '\r', '\r', '\t', '\t' };

    static sre_char      esc_S_ranges[] = { 0, 8, 11, 11, 14, 31, 33, 255 };

    static sre_char      esc_h_ranges[] = { 0x09, 0x09, 0x20, 0x20, 0xa0, 0xa0 };

    static sre_char      esc_H_ranges[] = { 0x00, 0x08, 0x0a, 0x1f, 0x21, 0x9f,
                                          0xa1, 0xff };

    static sre_char      esc_v_ranges[] = { 0x0a, 0x0a, 0x0b, 0x0b, 0x0c, 0x0c,
                                          0x0d, 0x0d, 0x85, 0x85 };

    static sre_char      esc_V_ranges[] = { 0x00, 0x09, 0x0e, 0x84, 0x86, 0xff };

    locp->pos = *src;

    if (*src == NULL || **src == '\0') {
        locp->last = *src;
        return SRE_REGEX_TOKEN_EOF;
    }

    c = sre_read_char(src);
    if (strchr("|*+?():.^$", (int) c)) {
        locp->last = *src;
        return c;
    }

    if (c == '\\') {
        c = sre_read_char(src);

        if (c == '\0') {
            locp->last = *src;
            return SRE_REGEX_TOKEN_BAD;
        }

        if (!isprint(c)) {
            lvalp->ch = c;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;
        }

        if (strchr("'\" iM%@!,_-|*+?():.^$\\/[]{}", (int) c)) {
            lvalp->ch = c;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;
        }

        if (c >= '0' && c <= '7') {

            num = c - '0';
            i = 1;

            for (;;) {
                c = **src;

                if (c < '0' || c > '7') {
                    lvalp->ch = (sre_char) num;
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_CHAR;
                }

                num = (c - '0') + (num << 3);

                (*src)++;

                if (++i == 3) {
                    lvalp->ch = (sre_char) num;
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_CHAR;
                }
            }
        }

        switch (c) {
        case 'c':
            c = sre_read_char(src);
            if (c == '\0') {
                locp->last = *src;
                locp->last = *src;
                return SRE_REGEX_TOKEN_BAD;
            }

            if (c >= 'a' && c <= 'z') {
                c -= 32;
            }

            lvalp->ch = (sre_char) (c ^ 64);

            dd("\\cK: %d", lvalp->ch);

            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'o':
            c = sre_read_char(src);
            if (c != '{') {
                locp->last = *src;
                return SRE_REGEX_TOKEN_BAD;
            }

            c = sre_read_char(src);

            num = 0;
            i = 0;

            for (;;) {
                dd("%d: hex digit: %c (%d)", (int) i, (int) c, c);

                if (c >= '0' && c <= '7') {
                    num = (c - '0') + (num << 3);

                } else if (c == '}') {
                    lvalp->ch = (sre_char) num;
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_CHAR;

                } else if (c == '\0') {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;

                } else {
                    (*src)--;
                    break;
                }

                if (++i == 3) {
                    dd("cur: '%c' (%d)", **src, **src);

                    if (sre_read_char(src) != '}') {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    break;
                }

                c = sre_read_char(src);
            }

            dd("\\o{...}: %u, next: %c", num, **src);

            lvalp->ch = (sre_char) num;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'x':
            c = sre_read_char(src);
            if (c == '{') {
                c = sre_read_char(src);
                seen_curly_bracket = 1;

            } else {
                seen_curly_bracket = 0;
            }

            num = 0;
            i = 0;

            for (;;) {
                dd("%d: hex digit: %c (%d)", (int) i, (int) c, c);

                if (c >= '0' && c <= '9') {
                    num = (c - '0') + (num << 4);

                } else if (c >= 'A' && c <= 'F') {
                    num = (c - 'A' + 10) + (num << 4);

                } else if (c >= 'a' && c <= 'f') {
                    num = (c - 'a' + 10) + (num << 4);

                } else if (seen_curly_bracket) {
                    if (c != '}') {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    lvalp->ch = (sre_char) num;
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_CHAR;

                } else {
                    (*src)--;
                    break;
                }

                if (++i == 2) {
                    if (seen_curly_bracket) {
                        dd("cur: '%c' (%d)", **src, **src);

                        if (sre_read_char(src) != '}') {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }
                    }

                    break;
                }

                c = sre_read_char(src);
            }

            dd("\\x{...}: %u, next: %c", num, **src);

            lvalp->ch = (sre_char) num;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'B':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            r->assertion_type = SRE_REGEX_ASSERTION_BIG_B;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_ASSERTION;

        case 'b':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            r->assertion_type = SRE_REGEX_ASSERTION_SMALL_B;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_ASSERTION;

        case 'z':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            r->assertion_type = SRE_REGEX_ASSERTION_SMALL_Z;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_ASSERTION;

        case 'A':

            r = sre_regex_create(pool, SRE_REGEX_TYPE_ASSERT, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            r->assertion_type = SRE_REGEX_ASSERTION_BIG_A;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_ASSERTION;

        case 'd':
            /* \d is defined as [0-9] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            range = sre_palloc(pool, sizeof(sre_regex_range_t));
            if (range == NULL) {
                break;
            }

            range->from = '0';
            range->to = '9';
            range->next = NULL;

            r->range = range;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'D':
            /* \D is defined as [^0-9] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            range = sre_palloc(pool, sizeof(sre_regex_range_t));
            if (range == NULL) {
                break;
            }

            range->from = '0';
            range->to = '9';
            range->next = NULL;

            r->range = range;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'w':
            /* \w is defined as [A-Za-z0-9_] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_w_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_w_ranges[i];
                range->to = esc_w_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_w_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'W':
            /* \W is defined as [^A-Za-z0-9_] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_w_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    lvalp->ch = 0;
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_w_ranges[i];
                range->to = esc_w_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_w_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 's':
            /* \s is defined as [ \f\n\r\t] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_s_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_s_ranges[i];
                range->to = esc_s_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_s_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'S':
            /* \S is defined as [^ \f\n\r\t] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_s_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_s_ranges[i];
                range->to = esc_s_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_s_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'N':
            /* \N is defined as [^\n] */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            range = sre_palloc(pool, sizeof(sre_regex_range_t));
            if (range == NULL) {
                break;
            }

            range->from = '\n';
            range->to = '\n';
            range->next = NULL;

            r->range = range;

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'C':
            /* \C is defined as . */

            r = sre_regex_create(pool, SRE_REGEX_TYPE_DOT, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'h':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_h_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_h_ranges[i];
                range->to = esc_h_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_h_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'H':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_h_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_h_ranges[i];
                range->to = esc_h_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_h_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'v':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_CLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_v_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_v_ranges[i];
                range->to = esc_v_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_v_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 'V':
            r = sre_regex_create(pool, SRE_REGEX_TYPE_NCLASS, NULL,
                                 NULL);
            if (r == NULL) {
                break;
            }

            for (i = 0; i < sre_nelems(esc_v_ranges); i += 2) {
                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = esc_v_ranges[i];
                range->to = esc_v_ranges[i + 1];

                if (i == 0) {
                    r->range = range;

                } else {
                    last->next = range;
                }

                if (i == sre_nelems(esc_v_ranges) - 2) {
                    range->next = NULL;

                } else {
                    last = range;
                }
            }

            lvalp->re = r;
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR_CLASS;

        case 't':
            lvalp->ch = '\t';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'n':
            lvalp->ch = '\n';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'r':
            lvalp->ch = '\r';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'f':
            lvalp->ch = '\f';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'a':
            lvalp->ch = '\a';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        case 'e':
            lvalp->ch = '\e';
            locp->last = *src;
            return SRE_REGEX_TOKEN_CHAR;

        default:
            break;
        }

        locp->last = *src;
        return SRE_REGEX_TOKEN_BAD;
    }

    switch (c) {
    case '[':
        /* get character class */

        if (**src == '^') {
            type = SRE_REGEX_TYPE_NCLASS;
            (*src)++;

        } else {
            type = SRE_REGEX_TYPE_CLASS;
        }

        r = sre_regex_create(pool, type, NULL, NULL);
        if (r == NULL) {
            locp->last = *src;
            return SRE_REGEX_TOKEN_BAD;
        }

        last = NULL;
        seen_dash = 0;
        no_dash = 0;
        n = 0;

        for ( ;; ) {
            n++;

            c = sre_read_char(src);

            dd("read char: %d", c);

            switch (c) {
            case '\0':
                locp->last = *src;
                return SRE_REGEX_TOKEN_BAD;

            case ']':
                dd("n == %d", n);

                if (n == 1) {
                    goto process_char;
                }

                if (seen_dash) {
                    range = sre_palloc(pool, sizeof(sre_regex_range_t));
                    if (range == NULL) {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    range->from = '-';
                    range->to = '-';
                    range->next = NULL;

                    if (last) {
                        last->next = range;

                    } else {
                        r->range = range;
                    }
                }

                lvalp->re = r;
                locp->last = *src;
                return SRE_REGEX_TOKEN_CHAR_CLASS;

            case '\\':
                c = sre_read_char(src);

                if (c >= '0' && c <= '7') {

                    num = c - '0';
                    i = 1;

                    dd("\\ddd: %d", num);

                    for (;;) {
                        c = **src;

                        if (c < '0' || c > '7') {
                            dd("c before: %d", c);

                            c = (sre_char) num;

                            dd("c after: %d", c);
                            goto process_char;
                        }

                        num = (c - '0') + (num << 3);

                        (*src)++;

                        if (++i == 3) {
                            c = (sre_char) num;
                            goto process_char;
                        }
                    }
                }

                switch (c) {
                case 'c':
                    c = sre_read_char(src);

                    if (c == '\0') {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    if (c >= 'a' && c <= 'z') {
                        c -= 32;
                    }

                    c = (sre_char) (c ^ 64);

                    dd("\\cK: %d", lvalp->ch);

                    goto process_char;

                case 'o':
                    c = sre_read_char(src);
                    if (c != '{') {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    c = sre_read_char(src);

                    num = 0;
                    i = 0;

                    for (;;) {
                        dd("%d: oct digit: %c (%d)", (int) i, (int) c, c);

                        if (c >= '0' && c <= '7') {
                            num = (c - '0') + (num << 3);

                        } else if (c == '}') {
                            c = (sre_char) num;
                            goto process_char;

                        } else {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        if (++i == 3) {
                            dd("cur: '%c' (%d)", **src, **src);

                            if (sre_read_char(src) != '}') {
                                locp->last = *src;
                                return SRE_REGEX_TOKEN_BAD;
                            }

                            break;
                        }

                        c = sre_read_char(src);
                    }

                    dd("\\x{...}: %u, next: %c", num, **src);

                    c = (sre_char) num;
                    goto process_char;

                case 'x':
                    c = sre_read_char(src);
                    if (c == '{') {
                        c = sre_read_char(src);
                        seen_curly_bracket = 1;

                    } else {
                        seen_curly_bracket = 0;
                    }

                    num = 0;
                    i = 0;

                    for (;;) {
                        dd("%d: hex digit: %c (%d)", (int) i, (int) c, c);

                        if (c >= '0' && c <= '9') {
                            num = (c - '0') + (num << 4);

                        } else if (c >= 'A' && c <= 'F') {
                            num = (c - 'A' + 10) + (num << 4);

                        } else if (c >= 'a' && c <= 'f') {
                            num = (c - 'a' + 10) + (num << 4);

                        } else if (seen_curly_bracket) {
                            if (c != '}') {
                                locp->last = *src;
                                return SRE_REGEX_TOKEN_BAD;
                            }

                            c = (sre_char) num;
                            goto process_char;

                        } else if (c == '\0') {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;

                        } else {
                            (*src)--;
                            break;
                        }

                        if (++i == 2) {
                            if (seen_curly_bracket) {
                                dd("cur: '%c' (%d)", **src, **src);

                                if (sre_read_char(src) != '}') {
                                    locp->last = *src;
                                    return SRE_REGEX_TOKEN_BAD;
                                }
                            }

                            break;
                        }

                        c = sre_read_char(src);
                    }

                    dd("\\x{...}: %u, next: %c", num, **src);

                    c = (sre_char) num;
                    goto process_char;

                case 't':
                    c = '\t';
                    goto process_char;

                case 'n':
                    c = '\n';
                    goto process_char;

                case 'r':
                    c = '\r';
                    goto process_char;

                case 'f':
                    c = '\f';
                    goto process_char;

                case 'a':
                    c = '\a';
                    goto process_char;

                case 'e':
                    c = '\e';
                    goto process_char;

                case 'b':
                    c = '\b';
                    goto process_char;

                case '\0':
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;

                default:
                    break;
                }

                if (!isprint(c)) {
                    goto process_char;
                }

                if (strchr("'\" iMzC%@!,_-|*+?():.^$\\/[]{}", (int) c)) {
                    goto process_char;
                }

                if (seen_dash) {
                    range = sre_palloc(pool, sizeof(sre_regex_range_t));
                    if (range == NULL) {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    range->from = '-';
                    range->to = '-';
                    range->next = NULL;

                    if (last) {
                        last->next = range;

                    } else {
                        r->range = range;
                    }

                    last = range;
                    seen_dash = 0;
                }

                switch (c) {
                case 'd':
                    range = sre_palloc(pool, sizeof(sre_regex_range_t));
                    if (range == NULL) {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    range->from = '0';
                    range->to = '9';
                    range->next = NULL;

                    if (last) {
                        last->next = range;

                    } else {
                        r->range = range;
                    }

                    last = range;

                    break;

                case 'D':
                    for (i = 0; i < sre_nelems(esc_D_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_D_ranges[i];
                        range->to = esc_D_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'w':
                    for (i = 0; i < sre_nelems(esc_w_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_w_ranges[i];
                        range->to = esc_w_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'W':
                    for (i = 0; i < sre_nelems(esc_W_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_W_ranges[i];
                        range->to = esc_W_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 's':
                    for (i = 0; i < sre_nelems(esc_s_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_s_ranges[i];
                        range->to = esc_s_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'S':
                    for (i = 0; i < sre_nelems(esc_S_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_S_ranges[i];
                        range->to = esc_S_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'v':
                    for (i = 0; i < sre_nelems(esc_v_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_v_ranges[i];
                        range->to = esc_v_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'V':
                    for (i = 0; i < sre_nelems(esc_V_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_V_ranges[i];
                        range->to = esc_V_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'h':
                    for (i = 0; i < sre_nelems(esc_h_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_h_ranges[i];
                        range->to = esc_h_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                case 'H':
                    for (i = 0; i < sre_nelems(esc_H_ranges); i += 2) {
                        range = sre_palloc(pool, sizeof(sre_regex_range_t));
                        if (range == NULL) {
                            locp->last = *src;
                            return SRE_REGEX_TOKEN_BAD;
                        }

                        range->from = esc_H_ranges[i];
                        range->to = esc_H_ranges[i + 1];

                        if (last) {
                            last->next = range;

                        } else {
                            r->range = range;
                        }

                        range->next = NULL;
                        last = range;
                    }

                    break;

                default:
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                no_dash = 1;
                break;

            case '-':
                if (!seen_dash && last && !no_dash) {
                    seen_dash = 1;
                    break;
                }

            default:
process_char:
                dd("next: %d", **src);

                if (seen_dash) {
                    last->to = c;

                    if (last->to < last->from) {
                        locp->last = *src;
                        return SRE_REGEX_TOKEN_BAD;
                    }

                    seen_dash = 0;
                    no_dash = 1;
                    break;
                }

                if (no_dash) {
                    no_dash = 0;
                }

                range = sre_palloc(pool, sizeof(sre_regex_range_t));
                if (range == NULL) {
                    locp->last = *src;
                    return SRE_REGEX_TOKEN_BAD;
                }

                range->from = c;
                range->to = c;
                range->next = NULL;

                if (last) {
                    last->next = range;

                } else {
                    r->range = range;
                }

                last = range;
                break;
            }
        }

        break;

    case '{':
        /* quantifier for counted repetition */

        c = **src;
        if (c < '0' || c > '9') {
            c = (*src)[-1];
            break;
        }

        i = 0;
        from = 0;
        do {
            from = c - '0' + from * 10;
            c = (*src)[++i];
        } while (c >= '0' && c <= '9');

        dd("from parsed: %d, next: %c", from, (*src)[i]);

        if (c == '}') {
            to = from;
            (*src) += i + 1;
            goto cquant_parsed;
        }

        if (c != ',') {
            dd("',' expected but got %c", c);
            c = (*src)[-1];
            break;
        }

        c = (*src)[++i];

        if (c == '}') {
            to = -1;
            (*src) += i + 1;
            goto cquant_parsed;
        }

        if (c < '0' || c > '9') {
            c = (*src)[-1];
            break;
        }

        to = 0;
        do {
            to = c - '0' + to * 10;
            c = (*src)[++i];
        } while (c >= '0' && c <= '9');

        if (c != '}') {
            c = (*src)[-1];
            break;
        }

        (*src) += i + 1;

cquant_parsed:
        dd("from = %d, to = %d, next: %d", from, to, (*src)[0]);

        if (from >= 500 || to >= 500) {
            dd("from or to too large: %d %d", from, to);
            locp->last = *src;
            return SRE_REGEX_TOKEN_BAD;
        }

        if (to >= 0 && from > to) {
            locp->last = *src;
            return SRE_REGEX_TOKEN_BAD;
        }

        if (from == 0) {
            if (to == 1) {
                locp->last = *src;
                return '?';
            }

            if (to == -1) {
                locp->last = *src;
                return '*';
            }

        } else if (from == 1) {
            if (to == -1) {
                locp->last = *src;
                return '+';
            }
        }

        lvalp->cquant.from = from;
        lvalp->cquant.to = to;
        locp->last = *src;
        return SRE_REGEX_TOKEN_CQUANT;

    default:
        break;
    }

    dd("token char: %c(%d)", c, c);

    lvalp->ch = c;
    locp->last = *src;
    return SRE_REGEX_TOKEN_CHAR;
}


static void
yyerror(YYLTYPE *locp, sre_pool_t *pool, sre_char **src, sre_uint_t *ncaps, int flags,
    sre_regex_t **parsed, sre_char **err_pos, char *msg)
{
    *err_pos = locp->pos;
}


SRE_API sre_regex_t *
sre_regex_parse(sre_pool_t *pool, sre_char *src, sre_uint_t *ncaps, int flags,
    sre_int_t *err_offset)
{
    sre_char        *start, *err_pos = NULL;
    sre_regex_t     *re, *r;
    sre_regex_t     *parsed = NULL;

    start = src;
    *ncaps = 0;
    *err_offset = -1;

    if (yyparse(pool, &src, ncaps, flags, &parsed, &err_pos) != SRE_OK) {
        if (err_pos) {
            *err_offset = (sre_int_t) (err_pos - start);
        }

        return NULL;
    }

    if (parsed == NULL) {
        return NULL;
    }

    /* assemble the regex ".*?(regex)" */

    re = sre_regex_create(pool, SRE_REGEX_TYPE_PAREN, parsed, NULL);
            /* $0 capture */

    if (re == NULL) {
        return NULL;
    }

    r = sre_regex_create(pool, SRE_REGEX_TYPE_DOT, NULL, NULL);
    if (r == NULL) {
        return NULL;
    }

    r = sre_regex_create(pool, SRE_REGEX_TYPE_STAR, r, NULL);
    if (r == NULL) {
        return NULL;
    }

    return sre_regex_create(pool, SRE_REGEX_TYPE_CAT, r, re);
}


static sre_regex_t *
sre_regex_desugar_counted_repetition(sre_pool_t *pool, sre_regex_t *subj,
    sre_regex_cquant_t *cquant, unsigned greedy)
{
    int                  i;
    sre_regex_t         *concat, *quest, *star;

    if (cquant->from == 1 && cquant->to == 1) {
        return subj;
    }

    /* generate subj{from} first */

    if (cquant->from == 0) {
        concat = sre_regex_create(pool, SRE_REGEX_TYPE_NIL, NULL, NULL);
        if (concat == NULL) {
            return NULL;
        }

        i = 0;

    } else {
        concat = subj;

        for (i = 1; i < cquant->from; i++) {
            concat = sre_regex_create(pool, SRE_REGEX_TYPE_CAT, concat, subj);
            if (concat == NULL) {
                return NULL;
            }
        }
    }

    if (cquant->from == cquant->to) {
        return concat;
    }

    if (cquant->to == -1) {
        /* append subj* to concat */

        star = sre_regex_create(pool, SRE_REGEX_TYPE_STAR, subj,
                                NULL);
        if (star == NULL) {
            return NULL;
        }

        star->greedy = greedy;

        concat = sre_regex_create(pool, SRE_REGEX_TYPE_CAT, concat, star);
        if (concat == NULL) {
            return NULL;
        }

        return concat;
    }

    /* append (?:subj?){to - from} */

    quest = sre_regex_create(pool, SRE_REGEX_TYPE_QUEST, subj,
                             NULL);
    if (quest == NULL) {
        return NULL;
    }

    quest->greedy = greedy;

    for ( ; i < cquant->to; i++) {
        concat = sre_regex_create(pool, SRE_REGEX_TYPE_CAT, concat, quest);
        if (concat == NULL) {
            return NULL;
        }
    }

    return concat;
}

