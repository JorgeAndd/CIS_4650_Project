/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 8 "pbison" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	
	#include "nodes.h"
	
	extern int yylineno;
	extern char *yytext;
	extern char linebuf[150];
	extern int tokenpos;
	
	

#line 82 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FLOAT = 258,
    CHAR = 259,
    EQUAL = 260,
    DIFF = 261,
    GE = 262,
    LE = 263,
    AND = 264,
    OR = 265,
    NOT = 266,
    TYPEDEF = 267,
    ASSIGN = 268,
    SIZEOF = 269,
    TKINT = 270,
    TKFLOAT = 271,
    TKCHAR = 272,
    INC = 273,
    DEC = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    WHILE = 278,
    RETURN = 279,
    VOID = 280,
    STRUCT = 281,
    NAME = 282,
    INT = 283,
    THEN = 284,
    UNMINUS = 285,
    UNPLUS = 286
  };
#endif
/* Tokens.  */
#define FLOAT 258
#define CHAR 259
#define EQUAL 260
#define DIFF 261
#define GE 262
#define LE 263
#define AND 264
#define OR 265
#define NOT 266
#define TYPEDEF 267
#define ASSIGN 268
#define SIZEOF 269
#define TKINT 270
#define TKFLOAT 271
#define TKCHAR 272
#define INC 273
#define DEC 274
#define IF 275
#define ELSE 276
#define FOR 277
#define WHILE 278
#define RETURN 279
#define VOID 280
#define STRUCT 281
#define NAME 282
#define INT 283
#define THEN 284
#define UNMINUS 285
#define UNPLUS 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 24 "pbison" /* yacc.c:355  */

	int ival;
	float fval;
	char cval;
	char *sval;
	
	types_t typeval;
	
	TypeDecl *typedeclval;
	TypeDeclList *typelistval;
	Stmt *stmtval;
	Expr *exprval;
	ExprList *exprlistval;
	Var *varval;
	

#line 201 "y.tab.c" /* yacc.c:355  */
};
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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   610

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  186

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    37,     2,     2,
      30,    47,    35,    33,    45,    34,    40,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    42,
      31,     2,    32,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    41,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    85,    86,    87,    91,    93,    95,    99,
     100,   103,   104,   107,   110,   111,   114,   115,   118,   119,
     122,   123,   125,   126,   129,   130,   133,   134,   135,   138,
     139,   140,   143,   144,   145,   146,   150,   151,   155,   156,
     157,   159,   160,   163,   166,   167,   170,   172,   176,   177,
     180,   181,   184,   185,   188,   192,   196,   199,   202,   204,
     206,   208,   210,   212,   214,   216,   218,   220,   222,   224,
     226,   228,   230,   232,   234,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   254,   258,   260,   262,   266,   268,
     270
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT", "CHAR", "EQUAL", "DIFF", "GE",
  "LE", "AND", "OR", "NOT", "TYPEDEF", "ASSIGN", "SIZEOF", "TKINT",
  "TKFLOAT", "TKCHAR", "INC", "DEC", "IF", "ELSE", "FOR", "WHILE",
  "RETURN", "VOID", "STRUCT", "NAME", "INT", "THEN", "'('", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "UNMINUS", "UNPLUS", "'.'", "'['",
  "';'", "'{'", "'}'", "','", "']'", "')'", "$accept", "program",
  "type_name", "type_decl_list", "type_decl", "struct_decl",
  "var_decl_list", "var_decl", "id_list", "id_name", "function_def_list",
  "function_def", "param_list", "param_decl", "func_body", "stmt_list",
  "stmt", "expr_stmt", "compound_stmt", "select_stmt", "iter_stmt",
  "iter_expr", "return_stmt", "function_call", "call_param_list",
  "call_param", "expr", "var", "constant", YY_NULLPTR
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
      40,    60,    62,    43,    45,    42,    47,    37,   285,   286,
      46,    91,    59,   123,   125,    44,    93,    41
};
# endif

#define YYPACT_NINF -151

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-151)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     361,   201,  -151,  -151,  -151,   -26,   -18,    27,     4,   279,
     -13,   387,    22,   173,  -151,    13,    17,    39,    43,    34,
    -151,    31,  -151,   -15,  -151,   -18,    37,   387,  -151,    48,
     173,  -151,    65,  -151,   402,  -151,  -151,   520,    69,   -18,
     520,  -151,   173,  -151,    71,     1,   -18,   -18,    56,    53,
    -151,    57,  -151,    61,    61,    68,  -151,    72,   535,  -151,
    -151,   304,   304,   -18,   -18,  -151,  -151,   560,    78,   560,
     560,    82,    86,    88,   397,    -6,  -151,   560,   560,   560,
     210,   304,    75,   332,  -151,  -151,  -151,  -151,  -151,  -151,
    -151,   427,    28,  -151,    77,    61,    61,    99,    15,   542,
    -151,  -151,   560,   560,   560,  -151,   447,   560,   118,    15,
      15,  -151,   238,   332,  -151,  -151,   560,   560,   560,   560,
     560,   560,  -151,  -151,   560,   560,   560,   560,   560,   560,
     560,  -151,   560,   112,   560,  -151,  -151,  -151,    93,   125,
     168,   103,   467,   175,  -151,    94,   362,  -151,  -151,   573,
     573,    52,    52,   507,   487,    52,    52,    59,    59,    15,
      15,    15,   467,  -151,   101,   268,  -151,  -151,   332,   560,
     332,  -151,   560,  -151,  -151,   127,   124,  -151,   362,   332,
     560,  -151,  -151,   120,   332,  -151
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     6,     7,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     4,    22,     0,     0,     0,     0,    20,
      17,    18,     1,    20,    16,     0,     0,     0,     9,     0,
       3,    14,     0,    23,     0,    11,    12,    28,     0,     0,
      28,    10,     2,    15,     0,     0,     0,     0,     0,     0,
      19,     0,    13,    31,    31,     0,    21,     0,     0,    27,
      26,    35,    35,     0,     0,    89,    90,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    88,     0,     0,     0,
       0,    33,     0,    34,    36,    38,    39,    40,    41,    42,
      75,     0,    77,    84,     0,    31,    31,    85,    71,     0,
      80,    81,     0,    51,     0,    53,     0,     0,     0,    73,
      72,    45,     0,    32,    25,    37,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,    24,    30,    29,     0,     0,
       0,     0,    50,     0,    52,     0,    57,    74,    44,    68,
      67,    65,    66,    70,    69,    64,    63,    58,    59,    60,
      61,    62,    76,    85,    87,     0,    83,    82,     0,    51,
       0,    54,     0,    55,    86,    46,     0,    48,    57,     0,
      51,    56,    47,     0,     0,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -151,  -151,    80,  -151,   159,  -151,    14,    -7,     0,   100,
      -5,    42,   129,   -49,   108,     2,   -70,  -151,  -151,  -151,
    -151,  -150,  -151,  -151,  -151,    18,   -67,    38,  -151
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    25,     9,    10,    17,    81,    12,    20,    21,
      13,    14,    48,    59,    82,    83,    84,    85,    86,    87,
      88,   141,    89,    90,   145,   173,    91,    92,    93
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      98,    18,   100,   101,    29,    60,    30,   106,    24,    19,
     108,   109,   110,   115,    11,    40,     2,     3,     4,   176,
      29,    19,    42,    27,   107,    24,    38,    22,     6,    28,
     183,    23,   139,   122,   123,   140,   142,   143,    29,    50,
     146,   132,   115,   115,    35,    52,   136,   137,    45,   149,
     150,   151,   152,   153,   154,    33,    34,   155,   156,   157,
     158,   159,   160,   161,    31,   162,    36,   165,   133,   134,
     122,   123,    33,    37,    29,    38,    39,   122,   123,    41,
       8,    16,   112,   113,    33,   126,   127,   128,   129,   130,
      43,     8,    44,    32,   128,   129,   130,    49,   175,    56,
     177,    40,   142,    55,    57,   178,    58,     8,    99,   182,
      32,    61,   102,   142,   185,    62,   103,    47,   104,   114,
      47,   135,    32,   116,   117,   118,   119,   120,   121,   107,
     116,   117,   118,   119,   120,   121,   122,   123,    64,   163,
     166,   171,   134,   122,   123,   169,    53,    54,   179,   124,
     125,   126,   127,   128,   129,   130,   124,   125,   126,   127,
     128,   129,   130,    95,    96,   147,   180,   184,    26,    51,
      94,   164,   167,   116,   117,   118,   119,   120,   121,   138,
     116,   117,   118,   119,   120,   121,   122,   123,     2,     3,
       4,     0,     0,   122,   123,     0,   181,     0,     5,   124,
     125,   126,   127,   128,   129,   130,   124,   125,   126,   127,
     128,   129,   130,    65,    66,   168,     2,     3,     4,     0,
       0,    67,   170,     0,    68,     0,     0,    15,    69,    70,
      71,     0,    72,    73,    74,     0,     0,    97,    76,     0,
      77,    65,    66,    78,    79,     0,     0,     0,     0,    67,
       0,     0,    68,    80,   111,     0,    69,    70,    71,     0,
      72,    73,    74,     0,     0,    97,    76,     0,    77,     0,
       0,    78,    79,   116,   117,   118,   119,   120,   121,     0,
       0,    80,   148,     0,     0,     0,   122,   123,     0,     0,
       0,     1,     0,     0,     2,     3,     4,     0,     0,   124,
     125,   126,   127,   128,   129,   130,     6,    65,    66,     0,
       0,     0,     0,     0,   174,    67,     0,     0,    68,     2,
       3,     4,    69,    70,    71,     0,    72,    73,    74,     0,
       0,    75,    76,     0,    77,    65,    66,    78,    79,     0,
       0,     0,     0,    67,     0,     0,    68,    80,     0,     0,
      69,    70,    71,     0,    72,    73,    74,     0,     0,    97,
      76,     0,    77,     0,     0,    78,    79,   116,   117,   118,
     119,   120,   121,     1,     0,    80,     2,     3,     4,     0,
     122,   123,     0,     0,     0,     0,     5,     0,     6,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
      65,    66,     2,     3,     4,     0,     0,   172,    67,     0,
       0,    68,     5,     0,     6,    69,    70,     2,     3,     4,
       0,     0,     0,     0,    97,    76,     0,    77,     0,     6,
      78,    79,   116,   117,   118,   119,   120,   121,     0,   105,
       0,     0,     0,     0,     0,   122,   123,     0,     0,     0,
       0,     0,   116,   117,   118,   119,   120,   121,   124,   125,
     126,   127,   128,   129,   130,   122,   123,     0,     0,   131,
       0,     0,   116,   117,   118,   119,   120,   121,   124,   125,
     126,   127,   128,   129,   130,   122,   123,     0,     0,   144,
       0,     0,   116,   117,   118,   119,   120,     0,   124,   125,
     126,   127,   128,   129,   130,   122,   123,     0,     0,     0,
       0,     0,   116,   117,   118,   119,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   122,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,   124,   125,
     126,   127,   128,   129,   130,    65,    66,    46,     0,     0,
       2,     3,     4,    67,     0,     0,    68,     2,     3,     4,
      69,    70,    63,    65,    66,     0,     0,     0,     0,    97,
      76,    67,    77,     0,    68,    78,    79,     0,    69,    70,
     118,   119,     0,     0,     0,     0,     0,    97,    76,     0,
      77,   122,   123,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130
};

static const yytype_int16 yycheck[] =
{
      67,    27,    69,    70,    11,    54,    11,    74,     8,    27,
      77,    78,    79,    83,     0,    30,    15,    16,    17,   169,
      27,    27,    27,     9,    30,    25,    41,     0,    27,    42,
     180,    27,    99,    18,    19,   102,   103,   104,    45,    39,
     107,    13,   112,   113,    27,    44,    95,    96,    34,   116,
     117,   118,   119,   120,   121,    13,    43,   124,   125,   126,
     127,   128,   129,   130,    42,   132,    27,   134,    40,    41,
      18,    19,    30,    30,    81,    41,    45,    18,    19,    42,
       0,     1,    80,    81,    42,    33,    34,    35,    36,    37,
      42,    11,    27,    13,    35,    36,    37,    28,   168,    46,
     170,    30,   169,    47,    47,   172,    45,    27,    30,   179,
      30,    43,    30,   180,   184,    43,    30,    37,    30,    44,
      40,    44,    42,     5,     6,     7,     8,     9,    10,    30,
       5,     6,     7,     8,     9,    10,    18,    19,    58,    27,
      47,    47,    41,    18,    19,    42,    46,    47,    21,    31,
      32,    33,    34,    35,    36,    37,    31,    32,    33,    34,
      35,    36,    37,    63,    64,    47,    42,    47,     9,    40,
      62,   133,    47,     5,     6,     7,     8,     9,    10,    99,
       5,     6,     7,     8,     9,    10,    18,    19,    15,    16,
      17,    -1,    -1,    18,    19,    -1,   178,    -1,    25,    31,
      32,    33,    34,    35,    36,    37,    31,    32,    33,    34,
      35,    36,    37,     3,     4,    47,    15,    16,    17,    -1,
      -1,    11,    47,    -1,    14,    -1,    -1,    26,    18,    19,
      20,    -1,    22,    23,    24,    -1,    -1,    27,    28,    -1,
      30,     3,     4,    33,    34,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    14,    43,    44,    -1,    18,    19,    20,    -1,
      22,    23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      -1,    33,    34,     5,     6,     7,     8,     9,    10,    -1,
      -1,    43,    44,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    12,    -1,    -1,    15,    16,    17,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    27,     3,     4,    -1,
      -1,    -1,    -1,    -1,    46,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,     3,     4,    33,    34,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    14,    43,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    -1,    -1,    27,
      28,    -1,    30,    -1,    -1,    33,    34,     5,     6,     7,
       8,     9,    10,    12,    -1,    43,    15,    16,    17,    -1,
      18,    19,    -1,    -1,    -1,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
       3,     4,    15,    16,    17,    -1,    -1,    45,    11,    -1,
      -1,    14,    25,    -1,    27,    18,    19,    15,    16,    17,
      -1,    -1,    -1,    -1,    27,    28,    -1,    30,    -1,    27,
      33,    34,     5,     6,     7,     8,     9,    10,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    10,    31,    32,
      33,    34,    35,    36,    37,    18,    19,    -1,    -1,    42,
      -1,    -1,     5,     6,     7,     8,     9,    10,    31,    32,
      33,    34,    35,    36,    37,    18,    19,    -1,    -1,    42,
      -1,    -1,     5,     6,     7,     8,     9,    -1,    31,    32,
      33,    34,    35,    36,    37,    18,    19,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,    -1,    -1,    31,    32,
      33,    34,    35,    36,    37,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    31,    32,
      33,    34,    35,    36,    37,     3,     4,    27,    -1,    -1,
      15,    16,    17,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    27,     3,     4,    -1,    -1,    -1,    -1,    27,
      28,    11,    30,    -1,    14,    33,    34,    -1,    18,    19,
       7,     8,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      30,    18,    19,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    15,    16,    17,    25,    27,    49,    50,    51,
      52,    54,    55,    58,    59,    26,    50,    53,    27,    27,
      56,    57,     0,    27,    56,    50,    52,    54,    42,    55,
      58,    42,    50,    59,    43,    27,    27,    30,    41,    45,
      30,    42,    58,    42,    27,    54,    27,    50,    60,    28,
      56,    60,    44,    57,    57,    47,    46,    47,    45,    61,
      61,    43,    43,    27,    50,     3,     4,    11,    14,    18,
      19,    20,    22,    23,    24,    27,    28,    30,    33,    34,
      43,    54,    62,    63,    64,    65,    66,    67,    68,    70,
      71,    74,    75,    76,    62,    57,    57,    27,    74,    30,
      74,    74,    30,    30,    30,    42,    74,    30,    74,    74,
      74,    44,    63,    63,    44,    64,     5,     6,     7,     8,
       9,    10,    18,    19,    31,    32,    33,    34,    35,    36,
      37,    42,    13,    40,    41,    44,    61,    61,    50,    74,
      74,    69,    74,    74,    42,    72,    74,    47,    44,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    27,    75,    74,    47,    47,    47,    42,
      47,    47,    45,    73,    46,    64,    69,    64,    74,    21,
      42,    73,    64,    69,    47,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    50,    50,    51,
      51,    52,    52,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    61,    62,    62,    62,    62,    63,    63,    64,    64,
      64,    64,    64,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    71,    72,    73,    73,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    76,    76,
      76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     2,     1,     0,     1,     1,     1,     2,
       3,     3,     3,     4,     2,     3,     2,     2,     1,     3,
       1,     4,     1,     2,     8,     8,     3,     3,     0,     4,
       4,     0,     2,     1,     1,     0,     1,     2,     1,     1,
       1,     1,     1,     2,     3,     2,     5,     7,     5,     9,
       1,     0,     3,     2,     4,     2,     3,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     3,     1,     3,     1,     2,     2,
       2,     2,     4,     4,     1,     1,     4,     3,     1,     1,
       1
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
        case 6:
#line 92 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = TYPE_INT; }
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 94 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = TYPE_FLOAT; }
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 96 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = TYPE_FLOAT; }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 158 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = (yyvsp[0].stmtval); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 171 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = IfStmt_create((yyvsp[-2].exprval), (yyvsp[0].stmtval), NULL); }
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 173 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = IfStmt_create((yyvsp[-4].exprval), (yyvsp[-2].stmtval), (yyvsp[0].stmtval)); }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 189 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = CallExpr_create((yyvsp[-3].sval), (yyvsp[-1].exprlistval)); }
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "pbison" /* yacc.c:1646  */
    { (yyval.exprlistval) = ExprList_create((yyvsp[-1].exprval), (yyvsp[0].exprlistval)); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 197 "pbison" /* yacc.c:1646  */
    { (yyval.exprlistval) = ExprList_create((yyvsp[-1].exprval), (yyvsp[0].exprlistval)); }
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 199 "pbison" /* yacc.c:1646  */
    { (yyval.exprlistval) = ExprList_create((yyvsp[0].exprval), NULL); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 203 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_ADD, (yyvsp[0].exprval)); }
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 205 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_SUB, (yyvsp[0].exprval)); }
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 207 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_MULT, (yyvsp[0].exprval)); }
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 209 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_DIV, (yyvsp[0].exprval)); }
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 211 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_MOD, (yyvsp[0].exprval)); }
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 213 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_GT, (yyvsp[0].exprval)); }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 215 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_LT, (yyvsp[0].exprval)); }
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 217 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_GE, (yyvsp[0].exprval)); }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 219 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_LE, (yyvsp[0].exprval)); }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 221 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_DIFF, (yyvsp[0].exprval)); }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 223 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_EQUAL, (yyvsp[0].exprval)); }
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 225 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_OR, (yyvsp[0].exprval)); }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 227 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = BinaryExpr_create((yyvsp[-2].exprval), OP_AND, (yyvsp[0].exprval)); }
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 229 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = UnaryExpr_create(OP_NOT, (yyvsp[0].exprval)); }
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 231 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = UnaryExpr_create(OP_MINUS, (yyvsp[0].exprval)); }
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 233 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = UnaryExpr_create(OP_PLUS, (yyvsp[0].exprval)); }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 235 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = (yyvsp[-1].exprval); }
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 237 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = (yyvsp[0].exprval); }
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 239 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = AssignExpr_create((yyvsp[-2].varval), (yyvsp[0].exprval)); }
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 241 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = VarExpr_create((yyvsp[0].varval)); }
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 243 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = PreOpExpr_create(OP_INC, (yyvsp[-1].exprval)); }
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 245 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = PreOpExpr_create(OP_DEC, (yyvsp[-1].exprval)); }
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 247 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = PostOpExpr_create((yyvsp[0].exprval), OP_INC); }
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 249 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = PostOpExpr_create((yyvsp[0].exprval), OP_DEC); }
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 251 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = SizeOfExpr_create((yyvsp[-1].exprval)); }
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 253 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = SizeOfTypeExpr_create((yyvsp[-1].typeval)); }
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 255 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = (yyvsp[0].exprval); }
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 259 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = SimpleVar_create((yyvsp[0].sval)); }
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 261 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = SubscriptVar_create((yyvsp[-3].varval), (yyvsp[-1].exprval)); }
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 263 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = FieldVar_create((yyvsp[-2].varval), (yyvsp[0].varval)); }
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 267 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = IntExpr_create((yyvsp[0].ival)); }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = FloatExpr_create((yyvsp[0].fval)); }
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 271 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = CharExpr_create((yyvsp[0].cval)); }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1870 "y.tab.c" /* yacc.c:1646  */
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
#line 274 "pbison" /* yacc.c:1906  */


extern FILE *yyin;

void warning(char *s, int line)
{
	fprintf(stderr, "Warning:\t%d: %s\n", line, s);
}

int yyerror(char *s)
{
	int token_start;
	int token_size;
	
	token_size = strlen(yytext);
	token_start = tokenpos - token_size;

	fprintf(stderr, "%d: %s:\n%s\n", yylineno, s, linebuf);
	fprintf(stderr, "%*s", token_start, " ");
	do
	{
		fprintf(stderr, "^");
	}
	while(--token_size > 0);
	
	fprintf(stderr, "\n");
} 

int yywrap()
{
        return 1;
} 

main()
{
	int result;
	
	result = yyparse();
	
	if(result == 0)
		printf("Syntax analysis complete. No errors found\n");
		
	return 0;
}

