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
#line 3 "pbison" /* yacc.c:339  */

	#include <stdlib.h>
	#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	
	#include "nodes.h"
	#include "nodeStructs.h"	
	#include "toXml.h"
	
	extern int yylineno;
	extern char *yytext;
	extern char linebuf[150];
	extern int tokenpos;
	extern FILE * yyin;
	
	Program *root;

#line 85 "y.tab.c" /* yacc.c:339  */

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
#line 22 "pbison" /* yacc.c:355  */

	int ival;
	float fval;
	char cval;
	char *sval;
	
	Program *programval;
	VarDecl *vardeclval;
	TypeDecl *typedeclval;
	List *listval;
	Stmt *stmtval;
	Expr *exprval;
	Var *varval;
	IdName *idval;
	TypeName *typeval;
	Function *funcval;
	FunctionBody *funcbodyval;
	Param *paramval;
	

#line 208 "y.tab.c" /* yacc.c:355  */
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

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   509

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  174

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
       0,    91,    91,    93,    95,    97,   102,   104,   106,   108,
     112,   115,   118,   120,   124,   127,   132,   136,   139,   142,
     144,   148,   153,   155,   159,   162,   166,   168,   172,   175,
     181,   184,   187,   189,   193,   200,   202,   204,   207,   211,
     213,   218,   221,   223,   225,   227,   231,   233,   237,   241,
     248,   252,   257,   260,   263,   266,   270,   274,   277,   280,
     282,   286,   289,   292,   295,   298,   301,   304,   307,   310,
     313,   316,   319,   322,   325,   328,   331,   334,   336,   338,
     341,   344,   347,   350,   353,   356,   359,   363,   365,   367,
     371,   373,   375
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
  "type_name", "type_decl_list_start", "type_decl_list", "type_decl",
  "struct_decl", "var_decl_list_start", "var_decl_list", "var_decl",
  "id_list", "id_name", "function_def_list", "function_def",
  "param_list_start", "param_list", "param_decl", "func_body", "stmt_list",
  "stmt", "compound_stmt", "if_stmt", "iter_stmt", "iter_expr",
  "return_stmt", "function_call", "call_param_list_start",
  "call_param_list", "expr", "var", "constant", YY_NULLPTR
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

#define YYPACT_NINF -147

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-147)))

#define YYTABLE_NINF -10

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,     4,    45,   465,     6,    31,  -147,  -147,  -147,    36,
    -147,    50,  -147,  -147,    57,    61,   465,    39,   465,  -147,
      53,  -147,   249,  -147,    88,   -25,    74,  -147,    80,   465,
    -147,    96,  -147,  -147,    97,    81,   249,   249,   249,   112,
      97,  -147,   111,   117,   132,    97,   113,   116,  -147,   115,
     119,  -147,  -147,  -147,   123,   249,   124,  -147,   274,  -147,
     274,  -147,  -147,   475,   156,   475,   475,   157,   158,   159,
     330,   -21,  -147,   475,   475,   475,   180,   274,   146,   302,
    -147,  -147,  -147,  -147,  -147,  -147,   360,    -5,  -147,   149,
     165,    68,   475,  -147,  -147,   475,   475,   475,  -147,   380,
     475,    95,    68,    68,  -147,   208,   302,  -147,  -147,   475,
     475,   475,   475,   475,   475,  -147,  -147,   475,   475,   475,
     475,   475,   475,   475,  -147,   475,   141,   475,  -147,   102,
     138,   154,   400,   145,  -147,   150,   160,   400,  -147,  -147,
       7,     7,    34,    34,   440,   420,    34,    34,    56,    56,
      68,    68,    68,   400,  -147,   168,   238,  -147,   302,   475,
     302,  -147,   475,  -147,   185,   173,  -147,   400,   302,   475,
    -147,   169,   302,  -147
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      11,     0,     0,     2,    10,     0,     6,     7,     8,     0,
       9,     0,    15,     1,     0,     0,     4,     0,     5,    26,
       0,    12,    18,    14,     0,    24,    21,    22,     0,     3,
      19,     0,    27,    13,     0,     0,    17,    31,    31,     0,
       0,    20,     0,    24,     0,     0,     0,    30,    32,     0,
       0,    23,    16,    34,     0,     0,     0,    25,    38,    33,
      38,    91,    92,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    90,     0,     0,     0,     0,    36,     0,    37,
      39,    42,    43,    44,    45,    78,     0,    80,    86,     0,
      87,    74,     0,    83,    84,     0,    53,     0,    55,     0,
      58,     0,    76,    75,    47,     0,    35,    29,    40,     0,
       0,     0,     0,     0,     0,    81,    82,     0,     0,     0,
       0,     0,     0,     0,    41,     0,     0,     0,    28,     0,
       0,     0,    52,     0,    54,     0,    57,    59,    77,    46,
      71,    70,    68,    69,    73,    72,    67,    66,    61,    62,
      63,    64,    65,    79,    87,    89,     0,    85,     0,    53,
       0,    56,     0,    88,    48,     0,    50,    60,     0,    53,
      49,     0,     0,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,    60,  -147,  -147,   197,  -147,  -147,    63,   -12,
    -147,   -23,   201,    54,   182,  -147,   163,   161,    40,   -78,
    -147,  -147,  -147,  -146,  -147,  -147,  -147,  -147,   -63,    99,
    -147
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    34,     3,     4,     5,    12,    35,    77,    17,
      26,    27,    18,    19,    46,    47,    48,    78,    79,    80,
      81,    82,    83,   131,    84,    85,   135,   136,    86,    87,
      88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,   108,    93,    94,    28,    38,    -9,    99,   125,   100,
     101,   102,   103,   165,   111,   112,    39,    51,     1,     6,
       7,     8,    53,   171,    28,   115,   116,   108,   108,   129,
       9,    10,   130,   132,   133,   126,   127,   137,   117,   118,
     119,   120,   121,   122,   123,    13,   140,   141,   142,   143,
     144,   145,   115,   116,   146,   147,   148,   149,   150,   151,
     152,    11,   153,    15,   156,    28,    16,   119,   120,   121,
     122,   123,    32,    21,   115,   116,    15,    23,    31,    22,
     164,    30,   166,    32,    24,    36,   115,   116,    25,    31,
     170,   121,   122,   123,   173,    33,   132,    45,    45,   167,
     109,   110,   111,   112,   113,   114,   132,   109,   110,   111,
     112,   113,   114,   115,   116,    45,   105,   106,    37,    40,
     115,   116,    41,    42,    43,    44,   117,   118,   119,   120,
     121,   122,   123,   117,   118,   119,   120,   121,   122,   123,
      50,    38,   138,   109,   110,   111,   112,   113,   114,   157,
     109,   110,   111,   112,   113,   114,   115,   116,    39,    52,
      54,    55,    56,   115,   116,    57,    58,    60,   154,   117,
     118,   119,   120,   121,   122,   123,   117,   118,   119,   120,
     121,   122,   123,    61,    62,   158,    92,    95,    96,    97,
     107,    63,   160,   128,    64,   100,   159,   161,    65,    66,
      67,    20,    68,    69,    70,   162,   168,    90,    72,   127,
      73,    61,    62,    74,    75,   169,   172,    29,    59,    63,
      49,    89,    64,    76,   104,   155,    65,    66,    67,     0,
      68,    69,    70,     0,     0,    90,    72,     0,    73,     0,
       0,    74,    75,   109,   110,   111,   112,   113,   114,     0,
       0,    76,   139,     0,     0,     0,   115,   116,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     0,     0,   117,
     118,   119,   120,   121,   122,   123,    10,    61,    62,     0,
       0,     0,     0,     0,   163,    63,     0,     0,    64,     6,
       7,     8,    65,    66,    67,     0,    68,    69,    70,     0,
       0,    71,    72,     0,    73,    61,    62,    74,    75,     0,
       0,     0,     0,    63,     0,     0,    64,    76,     0,     0,
      65,    66,    67,     0,    68,    69,    70,     0,     0,    90,
      72,     0,    73,    61,    62,    74,    75,     0,     0,     0,
       0,    63,     0,     0,    64,    76,     0,     0,    65,    66,
       0,     0,     0,     0,     0,     0,     0,    90,    72,     0,
      73,     0,     0,    74,    75,   109,   110,   111,   112,   113,
     114,     0,    98,     0,     0,     0,     0,     0,   115,   116,
       0,     0,     0,     0,     0,   109,   110,   111,   112,   113,
     114,   117,   118,   119,   120,   121,   122,   123,   115,   116,
       0,     0,   124,     0,     0,   109,   110,   111,   112,   113,
     114,   117,   118,   119,   120,   121,   122,   123,   115,   116,
       0,     0,   134,     0,     0,   109,   110,   111,   112,   113,
       0,   117,   118,   119,   120,   121,   122,   123,   115,   116,
       0,     0,     0,     0,     0,   109,   110,   111,   112,     0,
       0,   117,   118,   119,   120,   121,   122,   123,   115,   116,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,   118,   119,   120,   121,   122,   123,    61,    62,
       6,     7,     8,     0,     0,     0,    63,     0,     0,    64,
      14,     0,    10,    65,    66,     0,     0,     0,     0,     0,
       0,     0,    90,    72,     0,    73,     0,     0,    74,    75
};

static const yytype_int16 yycheck[] =
{
      63,    79,    65,    66,    16,    30,    27,    70,    13,    30,
      73,    74,    75,   159,     7,     8,    41,    40,    12,    15,
      16,    17,    45,   169,    36,    18,    19,   105,   106,    92,
      26,    27,    95,    96,    97,    40,    41,   100,    31,    32,
      33,    34,    35,    36,    37,     0,   109,   110,   111,   112,
     113,   114,    18,    19,   117,   118,   119,   120,   121,   122,
     123,     1,   125,     3,   127,    77,     3,    33,    34,    35,
      36,    37,    18,    42,    18,    19,    16,    27,    18,    43,
     158,    42,   160,    29,    27,    22,    18,    19,    27,    29,
     168,    35,    36,    37,   172,    42,   159,    37,    38,   162,
       5,     6,     7,     8,     9,    10,   169,     5,     6,     7,
       8,     9,    10,    18,    19,    55,    76,    77,    30,    45,
      18,    19,    42,    27,    27,    44,    31,    32,    33,    34,
      35,    36,    37,    31,    32,    33,    34,    35,    36,    37,
      28,    30,    47,     5,     6,     7,     8,     9,    10,    47,
       5,     6,     7,     8,     9,    10,    18,    19,    41,    27,
      47,    45,    47,    18,    19,    46,    43,    43,    27,    31,
      32,    33,    34,    35,    36,    37,    31,    32,    33,    34,
      35,    36,    37,     3,     4,    47,    30,    30,    30,    30,
      44,    11,    47,    44,    14,    30,    42,    47,    18,    19,
      20,     4,    22,    23,    24,    45,    21,    27,    28,    41,
      30,     3,     4,    33,    34,    42,    47,    16,    55,    11,
      38,    60,    14,    43,    44,   126,    18,    19,    20,    -1,
      22,    23,    24,    -1,    -1,    27,    28,    -1,    30,    -1,
      -1,    33,    34,     5,     6,     7,     8,     9,    10,    -1,
      -1,    43,    44,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    27,     3,     4,    -1,
      -1,    -1,    -1,    -1,    46,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    24,    -1,
      -1,    27,    28,    -1,    30,     3,     4,    33,    34,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    14,    43,    -1,    -1,
      18,    19,    20,    -1,    22,    23,    24,    -1,    -1,    27,
      28,    -1,    30,     3,     4,    33,    34,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    14,    43,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    -1,
      30,    -1,    -1,    33,    34,     5,     6,     7,     8,     9,
      10,    -1,    42,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    31,    32,    33,    34,    35,    36,    37,    18,    19,
      -1,    -1,    42,    -1,    -1,     5,     6,     7,     8,     9,
      10,    31,    32,    33,    34,    35,    36,    37,    18,    19,
      -1,    -1,    42,    -1,    -1,     5,     6,     7,     8,     9,
      -1,    31,    32,    33,    34,    35,    36,    37,    18,    19,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    34,    35,    36,    37,     3,     4,
      15,    16,    17,    -1,    -1,    -1,    11,    -1,    -1,    14,
      25,    -1,    27,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    -1,    30,    -1,    -1,    33,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    49,    51,    52,    53,    15,    16,    17,    26,
      27,    50,    54,     0,    25,    50,    56,    57,    60,    61,
      53,    42,    43,    27,    27,    27,    58,    59,    57,    60,
      42,    50,    61,    42,    50,    55,    56,    30,    30,    41,
      45,    42,    27,    27,    44,    50,    62,    63,    64,    62,
      28,    59,    27,    59,    47,    45,    47,    46,    43,    64,
      43,     3,     4,    11,    14,    18,    19,    20,    22,    23,
      24,    27,    28,    30,    33,    34,    43,    56,    65,    66,
      67,    68,    69,    70,    72,    73,    76,    77,    78,    65,
      27,    76,    30,    76,    76,    30,    30,    30,    42,    76,
      30,    76,    76,    76,    44,    66,    66,    44,    67,     5,
       6,     7,     8,     9,    10,    18,    19,    31,    32,    33,
      34,    35,    36,    37,    42,    13,    40,    41,    44,    76,
      76,    71,    76,    76,    42,    74,    75,    76,    47,    44,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    27,    77,    76,    47,    47,    42,
      47,    47,    45,    46,    67,    71,    67,    76,    21,    42,
      67,    71,    47,    67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    49,    49,    50,    50,    50,    50,
      51,    51,    52,    52,    53,    53,    54,    55,    55,    56,
      56,    57,    58,    58,    59,    59,    60,    60,    61,    61,
      62,    62,    63,    63,    64,    65,    65,    65,    65,    66,
      66,    67,    67,    67,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    73,    74,    74,    75,
      75,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    77,    77,    77,
      78,    78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     2,     1,     1,     1,     1,
       1,     0,     2,     3,     3,     2,     5,     1,     0,     2,
       3,     2,     1,     3,     1,     4,     1,     2,     8,     8,
       1,     0,     1,     3,     2,     2,     1,     1,     0,     1,
       2,     2,     1,     1,     1,     1,     3,     2,     5,     7,
       5,     9,     1,     0,     3,     2,     4,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     3,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     4,     3,
       1,     1,     1
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
        case 2:
#line 92 "pbison" /* yacc.c:1646  */
    { (yyval.programval) = Program_create((yyvsp[0].listval), NULL, NULL); root = (yyval.programval); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 94 "pbison" /* yacc.c:1646  */
    { (yyval.programval) = Program_create((yyvsp[-2].listval), (yyvsp[-1].listval), (yyvsp[0].listval)); root = (yyval.programval); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 96 "pbison" /* yacc.c:1646  */
    { (yyval.programval) = Program_create((yyvsp[-1].listval), (yyvsp[0].listval), NULL); root = (yyval.programval); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 98 "pbison" /* yacc.c:1646  */
    { (yyval.programval) = Program_create((yyvsp[-1].listval), NULL, (yyvsp[0].listval)); root = (yyval.programval); }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 103 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = PrimitiveTypeName_create(yylineno, TYPE_INT); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = PrimitiveTypeName_create(yylineno, TYPE_FLOAT); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 107 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = PrimitiveTypeName_create(yylineno, TYPE_FLOAT); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 109 "pbison" /* yacc.c:1646  */
    { (yyval.typeval) = UserTypeName_create(yylineno, (yyvsp[0].sval)); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 113 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 115 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = NULL; }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 119 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[-1].listval); }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 121 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-2].listval), (yyvsp[-1].listval)); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 125 "pbison" /* yacc.c:1646  */
    { TypeDecl *aux = Typedef_create(yylineno, (yyvsp[-1].typeval), (yyvsp[0].sval));
				  (yyval.listval) = TypeDeclList_create(yylineno, aux, NULL); }
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 128 "pbison" /* yacc.c:1646  */
    { TypeDecl *aux = (yyvsp[0].typedeclval); 
				  (yyval.listval) = TypeDeclList_create(yylineno, aux, NULL); }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "pbison" /* yacc.c:1646  */
    { (yyval.typedeclval) = Struct_create(yylineno, (yyvsp[-2].listval), (yyvsp[0].sval)); }
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 137 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 139 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = NULL; }
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 143 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[-1].listval); }
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 145 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-2].listval), (yyvsp[-1].listval)); }
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 149 "pbison" /* yacc.c:1646  */
    { VarDecl *aux = VarDecl_create(yylineno, (yyvsp[-1].typeval), (yyvsp[0].listval));
				  (yyval.listval) = VarDeclList_create(yylineno, aux, NULL); }
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 154 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 156 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-2].listval), (yyvsp[0].listval)); }
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 160 "pbison" /* yacc.c:1646  */
    { IdName *aux = SimpleIdName_create(yylineno, (yyvsp[0].sval));
  			  (yyval.listval) = IdList_create(yylineno, aux, NULL); }
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 163 "pbison" /* yacc.c:1646  */
    { IdName *aux = SubscriptIdName_create(yylineno, (yyvsp[-3].sval), (yyvsp[-1].ival)); 
			  (yyval.listval) = IdList_create(yylineno, aux, NULL); }
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 167 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 169 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-1].listval), (yyvsp[0].listval)); }
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 173 "pbison" /* yacc.c:1646  */
    { Function *aux = Function_create(yylineno, (yyvsp[-7].typeval), (yyvsp[-6].sval), (yyvsp[-4].listval), (yyvsp[-1].funcbodyval));
					  (yyval.listval) = FunctionList_create(yylineno, aux, NULL);  }
#line 1761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 176 "pbison" /* yacc.c:1646  */
    { TypeName *new = PrimitiveTypeName_create(yylineno, TYPE_VOID);
		   			  Function *aux = Function_create(yylineno, new, (yyvsp[-6].sval), (yyvsp[-4].listval), (yyvsp[-1].funcbodyval)); 
					  (yyval.listval) = FunctionList_create(yylineno, aux, NULL);  }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 182 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 184 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = NULL; }
#line 1781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 188 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 190 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-2].listval), (yyvsp[0].listval)); }
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 194 "pbison" /* yacc.c:1646  */
    { List *aux = (yyvsp[0].listval);
				  IdName *aux2 = aux->u.id_list.id; 
   				  Param *aux3 = Param_create(yylineno, (yyvsp[-1].typeval), aux2);
   				  (yyval.listval) =  ParamList_create(yylineno, aux3, NULL); }
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 201 "pbison" /* yacc.c:1646  */
    { (yyval.funcbodyval) = FunctionBody_create(yylineno, (yyvsp[-1].listval), (yyvsp[0].listval)); }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 203 "pbison" /* yacc.c:1646  */
    { (yyval.funcbodyval) = FunctionBody_create(yylineno, (yyvsp[0].listval), NULL); }
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 205 "pbison" /* yacc.c:1646  */
    { (yyval.funcbodyval) = FunctionBody_create(yylineno, NULL, (yyvsp[0].listval)); }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 207 "pbison" /* yacc.c:1646  */
    { (yyval.funcbodyval) = FunctionBody_create(yylineno, NULL, NULL); }
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 212 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 214 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-1].listval), (yyvsp[0].listval)); }
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 219 "pbison" /* yacc.c:1646  */
    { Stmt *aux = ExpressionStmt_create(yylineno, (yyvsp[-1].listval)->u.expr_list.expr); 
			  (yyval.listval) = StmtList_create(yylineno, aux, NULL); }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 222 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = StmtList_create(yylineno, (yyvsp[0].stmtval), NULL); }
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 224 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = StmtList_create(yylineno, (yyvsp[0].stmtval), NULL); }
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 226 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = StmtList_create(yylineno, (yyvsp[0].stmtval), NULL); }
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 228 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = StmtList_create(yylineno, (yyvsp[0].stmtval), NULL); }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 232 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = CompoundStmt_create(yylineno, (yyvsp[-1].listval)); }
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 234 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = NULL; }
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 238 "pbison" /* yacc.c:1646  */
    { Expr *aux = (yyvsp[-2].listval)->u.expr_list.expr;  
				  Stmt *aux2 = (yyvsp[0].listval)->u.stmt_list.stmt; 
				  (yyval.stmtval) = IfStmt_create(yylineno, aux, aux2, NULL); }
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 242 "pbison" /* yacc.c:1646  */
    { Expr *aux = (yyvsp[-4].listval)->u.expr_list.expr;  
				  Stmt *aux2 = (yyvsp[-2].listval)->u.stmt_list.stmt;
				  Stmt *aux3 = (yyvsp[0].listval)->u.stmt_list.stmt;
				  (yyval.stmtval) = IfStmt_create(yylineno, aux, aux2, aux3); }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 249 "pbison" /* yacc.c:1646  */
    { Expr *aux = (yyvsp[-2].listval)->u.expr_list.expr;  
				  Stmt *aux2 = (yyvsp[0].listval)->u.stmt_list.stmt; 
   				  (yyval.stmtval) = IterativeStmt_create(yylineno, NULL, aux, NULL, aux2); }
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 253 "pbison" /* yacc.c:1646  */
    { Stmt *aux = (yyvsp[0].listval)->u.stmt_list.stmt;
				  (yyval.stmtval) = IterativeStmt_create(yylineno, (yyvsp[-6].exprval), (yyvsp[-4].exprval), (yyvsp[-2].exprval), aux); }
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 258 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = (yyvsp[0].listval)->u.expr_list.expr; }
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 260 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = NULL; }
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 264 "pbison" /* yacc.c:1646  */
    { Expr *aux = (yyvsp[-1].listval)->u.expr_list.expr;   
   				  (yyval.stmtval) = ReturnStmt_create(yylineno, aux); }
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 267 "pbison" /* yacc.c:1646  */
    { (yyval.stmtval) = ReturnStmt_create(yylineno, NULL); }
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 271 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = CallExpr_create(yylineno, (yyvsp[-3].sval), (yyvsp[-1].listval)); }
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 275 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 277 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = NULL; }
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 281 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = (yyvsp[0].listval); }
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 283 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = Append((yyvsp[-2].listval), (yyvsp[0].listval)); }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 287 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_ADD, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 290 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_SUB, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 293 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_MULT, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 296 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_DIV, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 299 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_MOD, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 302 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_GT, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 305 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_LT, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 308 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_GE, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 311 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_LE, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 314 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_DIFF, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 317 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_EQUAL, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 320 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_OR, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 323 "pbison" /* yacc.c:1646  */
    { Expr *aux = BinaryExpr_create(yylineno, (yyvsp[-2].listval)->u.expr_list.expr, OP_AND, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 326 "pbison" /* yacc.c:1646  */
    { Expr *aux = UnaryExpr_create(yylineno, OP_NOT, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 329 "pbison" /* yacc.c:1646  */
    { Expr *aux = UnaryExpr_create(yylineno, OP_MINUS, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 332 "pbison" /* yacc.c:1646  */
    { Expr *aux = UnaryExpr_create(yylineno, OP_PLUS, (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 335 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = ExprList_create(yylineno, (yyvsp[-1].listval)->u.expr_list.expr, NULL); }
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 337 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = ExprList_create(yylineno, (yyvsp[0].exprval), NULL); }
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 339 "pbison" /* yacc.c:1646  */
    { Expr *aux = AssignExpr_create(yylineno, (yyvsp[-2].varval), (yyvsp[0].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 342 "pbison" /* yacc.c:1646  */
    { Expr *aux = VarExpr_create(yylineno, (yyvsp[0].varval)); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 345 "pbison" /* yacc.c:1646  */
    { Expr *aux = PreOpExpr_create(yylineno, OP_INC, (yyvsp[-1].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 348 "pbison" /* yacc.c:1646  */
    { Expr *aux = PreOpExpr_create(yylineno, OP_DEC, (yyvsp[-1].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 351 "pbison" /* yacc.c:1646  */
    { Expr *aux = PostOpExpr_create(yylineno, (yyvsp[0].listval)->u.expr_list.expr, OP_INC); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 354 "pbison" /* yacc.c:1646  */
    { Expr *aux = PostOpExpr_create(yylineno, (yyvsp[0].listval)->u.expr_list.expr, OP_DEC); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 357 "pbison" /* yacc.c:1646  */
    { Expr *aux = SizeOfExpr_create(yylineno, (yyvsp[-1].listval)->u.expr_list.expr); 
			  (yyval.listval) = ExprList_create(yylineno, aux, NULL); }
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 360 "pbison" /* yacc.c:1646  */
    { (yyval.listval) = ExprList_create(yylineno, (yyvsp[0].exprval), NULL); }
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 364 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = SimpleVar_create(yylineno, (yyvsp[0].sval)); }
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 366 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = SubscriptVar_create(yylineno, (yyvsp[-3].varval), (yyvsp[-1].listval)->u.expr_list.expr); }
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 368 "pbison" /* yacc.c:1646  */
    { (yyval.varval) = FieldVar_create(yylineno, (yyvsp[-2].varval), (yyvsp[0].varval)); }
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 372 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = IntExpr_create(yylineno, (yyvsp[0].ival)); }
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 374 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = FloatExpr_create(yylineno, (yyvsp[0].fval)); }
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 376 "pbison" /* yacc.c:1646  */
    { (yyval.exprval) = CharExpr_create(yylineno, (yyvsp[0].cval)); }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2187 "y.tab.c" /* yacc.c:1646  */
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
#line 379 "pbison" /* yacc.c:1906  */


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

int main(int argc, char *argv[])
{
	int result;
	
	if(argc < 3)
	{
		printf("Insufficient program arguments\n");
		return;
	}
	
	yyin = fopen(argv[2], "r");
	if(yyin == NULL)
	{
		printf("Error opening input file\n");
		return;
	}
	
	result = yyparse();
	
	if(result == 0)
	{
		char file_name[20];
		int i = 0;
		
		while(argv[2][i] != '.')
		{
			file_name[i] = argv[2][i];
			i++;
		}
		file_name[i] = '\0';
	
		FILE *tty = fopen("/dev/tty", "r");
		printf("Syntax analysis complete. No errors found\n");
		
		setPrinter("tree.xml");
		printf("Setted\n");
		printProgram(root);
		closePrinter();
		
		processProgram(root);
		return 0;
	}
		
	return 0;
}

