/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 23 "pbison" /* yacc.c:1909  */

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
	

#line 137 "y.tab.h" /* yacc.c:1909  */
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
