/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_TOKEN_H_INCLUDED
# define YY_YY_TOKEN_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_IDENT = 258,             /* TOKEN_IDENT  */
    TOKEN_EOF = 259,               /* TOKEN_EOF  */
    TOKEN_INT = 260,               /* TOKEN_INT  */
    TOKEN_PLUS = 261,              /* TOKEN_PLUS  */
    TOKEN_PLUSPLUS = 262,          /* TOKEN_PLUSPLUS  */
    TOKEN_MINUSMINUS = 263,        /* TOKEN_MINUSMINUS  */
    TOKEN_MINUS = 264,             /* TOKEN_MINUS  */
    TOKEN_GT = 265,                /* TOKEN_GT  */
    TOKEN_GTE = 266,               /* TOKEN_GTE  */
    TOKEN_LT = 267,                /* TOKEN_LT  */
    TOKEN_LTE = 268,               /* TOKEN_LTE  */
    TOKEN_EQUALITY = 269,          /* TOKEN_EQUALITY  */
    TOKEN_LOGICAL_OR = 270,        /* TOKEN_LOGICAL_OR  */
    TOKEN_LOGICAL_AND = 271,       /* TOKEN_LOGICAL_AND  */
    TOKEN_NOT = 272,               /* TOKEN_NOT  */
    TOKEN_MUL = 273,               /* TOKEN_MUL  */
    TOKEN_MOD = 274,               /* TOKEN_MOD  */
    TOKEN_DIV = 275,               /* TOKEN_DIV  */
    TOKEN_EXPO = 276,              /* TOKEN_EXPO  */
    TOKEN_LPAREN = 277,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 278,            /* TOKEN_RPAREN  */
    TOKEN_LSQUARE = 279,           /* TOKEN_LSQUARE  */
    TOKEN_RSQUARE = 280,           /* TOKEN_RSQUARE  */
    TOKEN_LCURLY = 281,            /* TOKEN_LCURLY  */
    TOKEN_RCURLY = 282,            /* TOKEN_RCURLY  */
    TOKEN_SEMI = 283,              /* TOKEN_SEMI  */
    TOKEN_COMMA = 284,             /* TOKEN_COMMA  */
    TOKEN_COMMENT = 285,           /* TOKEN_COMMENT  */
    TOKEN_COLON = 286,             /* TOKEN_COLON  */
    TOKEN_EQUAL = 287,             /* TOKEN_EQUAL  */
    TOKEN_BOOL = 288,              /* TOKEN_BOOL  */
    TOKEN_CHAR = 289,              /* TOKEN_CHAR  */
    TOKEN_STRING = 290,            /* TOKEN_STRING  */
    TOKEN_IF = 291,                /* TOKEN_IF  */
    TOKEN_ELSE = 292,              /* TOKEN_ELSE  */
    TOKEN_FOR = 293,               /* TOKEN_FOR  */
    TOKEN_WHILE = 294,             /* TOKEN_WHILE  */
    TOKEN_RETURN = 295,            /* TOKEN_RETURN  */
    TOKEN_VOID = 296,              /* TOKEN_VOID  */
    TOKEN_ARRAY = 297,             /* TOKEN_ARRAY  */
    TOKEN_FUNCTION = 298,          /* TOKEN_FUNCTION  */
    TOKEN_PRINT = 299,             /* TOKEN_PRINT  */
    TOKEN_NUMBER = 300,            /* TOKEN_NUMBER  */
    TOKEN_TRUE = 301,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 302,             /* TOKEN_FALSE  */
    TOKEN_ACTUALCHAR = 303,        /* TOKEN_ACTUALCHAR  */
    TOKEN_ACTUALSTRING = 304,      /* TOKEN_ACTUALSTRING  */
    TOKEN_ERROR = 305              /* TOKEN_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "bminor.bison"

	struct decl *decl;
	struct stmt *stmt;
	struct expr *expr;
	struct type *type;
	struct param_list *param_list;
	char *string;
	int integer;
	char character;

#line 125 "token.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOKEN_H_INCLUDED  */
