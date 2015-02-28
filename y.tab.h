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
    PLUS = 258,
    MINUS = 259,
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
    DOT = 275,
    QUOTE = 276,
    SEMICOLON = 277,
    COMMA = 278,
    OBRACES = 279,
    CBRACES = 280,
    OPAR = 281,
    CPAR = 282,
    OBRACKET = 283,
    CBRACKET = 284,
    IF = 285,
    ELSE = 286,
    FOR = 287,
    WHILE = 288,
    RETURN = 289,
    VOID = 290,
    STRUCT = 291,
    INT = 292,
    FLOAT = 293,
    CHAR = 294,
    NAME = 295,
    THEN = 296,
    UNMINUS = 297,
    UNPLUS = 298
  };
#endif
/* Tokens.  */
#define PLUS 258
#define MINUS 259
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
#define DOT 275
#define QUOTE 276
#define SEMICOLON 277
#define COMMA 278
#define OBRACES 279
#define CBRACES 280
#define OPAR 281
#define CPAR 282
#define OBRACKET 283
#define CBRACKET 284
#define IF 285
#define ELSE 286
#define FOR 287
#define WHILE 288
#define RETURN 289
#define VOID 290
#define STRUCT 291
#define INT 292
#define FLOAT 293
#define CHAR 294
#define NAME 295
#define THEN 296
#define UNMINUS 297
#define UNPLUS 298

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 10 "pbison" /* yacc.c:1909  */

	int ival;
	float fval;
	char cval;
	char *sval;

#line 147 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
