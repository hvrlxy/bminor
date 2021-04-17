%{
#define DEBUG 1
#include <stdio.h>
#include "ast.h"
struct decl *parser_result = 0;
extern int  yylex() ; 
int tab = 0;
int *current_tab = &tab;
%}

%union {
	struct decl *decl;
	struct stmt *stmt;
	struct expr *expr;
	struct type *type;
	struct param_list *param_list;
	char *string;
	int integer;
	char character;
};

%type <decl> prog 
%type <decl> decls 
%type <decl> fuctionDecls 
%type <decl>variableDecls
%type <stmt> statement bodyWithScope
%type <param_list> functionArgs
%type <expr> int_list 
%type <expr> bool_list 
%type <expr> bool_type
%type <expr> char_list
%type <expr> string_list
%type <expr> commaExprList
%type <expr> comparison
%type <expr> multdiv
%type <expr> exponent
%type <expr> expr
%type <expr> logical
%type <expr> addsub
%type <expr> factor
%type <expr> negation
%type <expr> incdec
%type <type> type
%type <expr> name
%type <expr> int_literal
%type <expr> char_literal
%type <expr> string_literal

%token <expr> TOKEN_IDENT
%token TOKEN_EOF
%token TOKEN_INT
%token TOKEN_PLUS
%token TOKEN_PLUSPLUS
%token TOKEN_MINUSMINUS
%token TOKEN_MINUS
%token TOKEN_GT
%token TOKEN_GTE
%token TOKEN_LT
%token TOKEN_LTE
%token TOKEN_EQUALITY
%token TOKEN_LOGICAL_OR
%token TOKEN_LOGICAL_AND
%token TOKEN_NOT
%token TOKEN_MUL
%token TOKEN_MOD
%token TOKEN_DIV
%token TOKEN_EXPO
%token TOKEN_LPAREN
%token TOKEN_RPAREN
%token TOKEN_LSQUARE
%token TOKEN_RSQUARE
%token TOKEN_LCURLY
%token TOKEN_RCURLY
%token TOKEN_SEMI
%token TOKEN_COMMA
%token TOKEN_COMMENT
%token TOKEN_COLON
%token TOKEN_EQUAL
%token TOKEN_BOOL
%token TOKEN_CHAR
%token TOKEN_STRING
%token TOKEN_IF
%token TOKEN_ELSE
%token TOKEN_FOR
%token TOKEN_WHILE
%token TOKEN_RETURN
%token TOKEN_VOID
%token TOKEN_ARRAY
%token TOKEN_FUNCTION
%token TOKEN_PRINT
%token <integer> TOKEN_NUMBER
%token TOKEN_TRUE
%token TOKEN_FALSE
%token <character> TOKEN_ACTUALCHAR
%token <string> TOKEN_ACTUALSTRING
%token TOKEN_ERROR

%%

prog : decls {parser_result = $1; print_decl(parser_result, current_tab);}

decls : fuctionDecls decls {$$ = decl_create(0,0,0,0, $2);}
      | variableDecls decls {$$ = decl_create(0,0,0,0, $2);}
      | %empty

// Still need to add function arguments to this
fuctionDecls  : name TOKEN_COLON TOKEN_FUNCTION TOKEN_VOID TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_INT TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI	{$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_BOOL TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_CHAR TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_STRING TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_VOID TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_INT TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_BOOL TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_CHAR TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL
	      	TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}
	      | name TOKEN_COLON TOKEN_FUNCTION TOKEN_STRING TOKEN_LPAREN functionArgs TOKEN_RPAREN TOKEN_EQUAL
	      	TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = decl_create($1, create_type(TYPE_FUNCTION,0,0),0,0,0);}

functionArgs : name TOKEN_COLON type TOKEN_COMMA functionArgs {$$ = create_param_list($1, $3, $5);}
				| name TOKEN_COLON type {$$ = create_param_list($1, $3, 0);}
				| %empty


type : TOKEN_INT {$$ = create_type(TYPE_INTEGER,0,0);}
     | TOKEN_BOOL {$$ = create_type(TYPE_BOOLEAN,0,0);}
     | TOKEN_CHAR {$$ = create_type(TYPE_CHARACTER,0,0);}
     | TOKEN_STRING {$$ = create_type(TYPE_STRING,0,0);}

// bodyWithScope is a hunk of code that could exist as a block for a function, for, if, {}
bodyWithScope : variableDecls bodyWithScope {$$ = stmt_create(STMT_BLOCK,$1,0,0,0,0,0,$2);}
	      | statement bodyWithScope {$$ = stmt_create(STMT_BLOCK,0,0,0,0,$1,0,$2);}
	      | %empty

	      
variableDecls : name TOKEN_COLON TOKEN_INT TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_INTEGER,0,0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_INT TOKEN_EQUAL int_literal TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_INTEGER,0,0), $5,0,0) ;}
	      | name TOKEN_COLON TOKEN_BOOL TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_BOOLEAN,0,0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_BOOL TOKEN_EQUAL TOKEN_TRUE TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_BOOLEAN,0,0), expr_create_boolean_literal(1),0,0) ;}
	      | name TOKEN_COLON TOKEN_BOOL TOKEN_EQUAL TOKEN_FALSE TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_BOOLEAN,0,0), expr_create_boolean_literal(0),0,0) ;}
	      | name TOKEN_COLON TOKEN_CHAR TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_CHARACTER,0,0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_CHAR TOKEN_EQUAL char_literal TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_BOOLEAN,0,0), $5,0,0) ;}
	      | name TOKEN_COLON TOKEN_STRING TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_STRING,0,0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_STRING TOKEN_EQUAL string_literal TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_BOOLEAN,0,0), $5,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_INT TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_INTEGER,0,0),0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_BOOL TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_BOOLEAN,0,0),0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_CHAR TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_CHARACTER,0,0),0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_STRING TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_STRING,0,0),0), 0,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_INT  TOKEN_EQUAL
	            TOKEN_LCURLY int_list TOKEN_RCURLY TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_INTEGER,0,0),0), $10,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_BOOL 
	            TOKEN_LCURLY bool_list TOKEN_RCURLY TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_BOOLEAN,0,0),0), $9,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_CHAR 
	            TOKEN_LCURLY char_list TOKEN_RCURLY TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_CHARACTER,0,0),0), $9,0,0) ;}
	      | name TOKEN_COLON TOKEN_ARRAY TOKEN_LSQUARE int_literal TOKEN_RSQUARE TOKEN_STRING 
	            TOKEN_LCURLY string_list TOKEN_RCURLY TOKEN_SEMI {$$ = decl_create($1, create_type(TYPE_ARRAY,create_type(TYPE_STRING,0,0),0), $9,0,0) ;}


int_list  : int_literal TOKEN_COMMA int_list {$$ = expr_create(EXPR_INTEGER, $1, $3);}
			| int_literal {$$ = $1;}
			| %empty
	  
bool_list : bool_type TOKEN_COMMA bool_list {$$ = expr_create(EXPR_BOOLEAN, $1, $3);}
			| bool_type {$$ = $1;}
			| %empty

bool_type: TOKEN_TRUE {$$ = expr_create_boolean_literal(1);}
			| TOKEN_FALSE {$$ = expr_create_boolean_literal(0);}


char_list : char_literal TOKEN_COMMA char_list {$$ = expr_create(EXPR_CHARACTER_LITERAL, $1, $3);}
			| char_literal {$$ = $1;}
			| %empty	  

string_list : string_literal TOKEN_COMMA string_list {$$ = expr_create(EXPR_STRING_LITERAL, $1, $3);}
			| string_literal {$$ = $1;}
			| %empty	


statement :  expr TOKEN_SEMI  {$$ = stmt_create(STMT_DECL,0,$1,0,0,0,0,0); }
	  | TOKEN_RETURN TOKEN_SEMI {$$ = stmt_create(STMT_RETURN,0,0,0,0,0,0,0); }
	  | TOKEN_RETURN statement  {$$ = stmt_create(STMT_RETURN,0,0,0,0,0,0,$2); }
	  | TOKEN_PRINT commaExprList TOKEN_SEMI {$$ = stmt_create(STMT_PRINT,0,0,$2,0,0,0,0); }
	  | TOKEN_IF TOKEN_LPAREN statement TOKEN_RPAREN statement TOKEN_SEMI {$$ = stmt_create(STMT_IF_ELSE,0,0,0,0,$3,$5,0); }
	  | TOKEN_IF TOKEN_LPAREN statement TOKEN_RPAREN statement TOKEN_ELSE TOKEN_SEMI {$$ = stmt_create(STMT_IF_ELSE,0,0,0,0,$3,$5,0); }
	  | TOKEN_FOR TOKEN_LPAREN expr TOKEN_SEMI expr TOKEN_SEMI expr TOKEN_RPAREN
	    TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = stmt_create(STMT_FOR,0,$3,$5,$7,0,0,$10); }
	  | TOKEN_LCURLY bodyWithScope TOKEN_RCURLY {$$ = stmt_create(STMT_BLOCK,0,0,0,0,0,0,$2); }
	  
	  
commaExprList :expr TOKEN_COMMA commaExprList {$$ = expr_create(EXPR_GENERAL,$1,$3);}
				| expr {$$ = expr_create(EXPR_GENERAL,$1,0);}
				| %empty

expr : expr TOKEN_EQUAL logical {$$ = expr_create(EXPR_EQUAL, $1, $3);}
     | logical {$$ = expr_create(EXPR_LOGICAL, $1, 0);}

logical : logical TOKEN_LOGICAL_AND comparison {$$ = expr_create(EXPR_LOGICAL, $1, $3);}
	| logical TOKEN_LOGICAL_OR comparison {$$ = expr_create(EXPR_LOGICAL, $1, $3);}
	| comparison {$$ = expr_create(EXPR_COMP, $1, 0);}


comparison : comparison TOKEN_LT addsub {$$ = expr_create(EXPR_LT, $1, $3);}
     | comparison TOKEN_LTE addsub {$$ = expr_create(EXPR_LTE, $1, $3);}
     | comparison TOKEN_GT addsub {$$ = expr_create(EXPR_GT, $1, $3);}
     | comparison TOKEN_GTE addsub {$$ = expr_create(EXPR_GTE, $1, $3);}
     | addsub {$$ = expr_create(EXPR_ADDSUB, $1, 0);}

addsub : addsub TOKEN_PLUS multdiv {$$ = expr_create(EXPR_ADD, $1, $3);}
     | addsub TOKEN_MINUS multdiv {$$ = expr_create(EXPR_SUB, $1, $3);}
     | multdiv {$$ = expr_create(EXPR_MULTDIV, $1, 0);}


multdiv : multdiv TOKEN_MUL exponent {$$ = expr_create(EXPR_MUL, $1, $3);}
     | multdiv TOKEN_DIV exponent {$$ = expr_create(EXPR_DIV, $1, $3);}
     | multdiv TOKEN_MOD exponent {$$ = expr_create(EXPR_MOD, $1, $3);}
     | exponent {$$ = expr_create(EXPR_POW, $1, 0);}

exponent : exponent TOKEN_EXPO negation {$$ = expr_create(EXPR_POW, $1, $3);}
	 | negation {$$ = expr_create(EXPR_LT, $1, 0);}

negation : TOKEN_NOT incdec {$$ = expr_create(EXPR_NOT, 0, $2);}
	 | incdec {$$ = expr_create(EXPR_INCDEC, 0, 0);}

incdec : expr TOKEN_MINUSMINUS {$$ = expr_create(EXPR_MINUSMINUS, $1, 0);}
	| expr TOKEN_PLUSPLUS {$$ = expr_create(EXPR_PLUSPLUS, $1, 0);}
     	| factor   {$$ = expr_create(EXPR_FACTOR, $1, 0);}


factor: TOKEN_LPAREN expr TOKEN_RPAREN {$$ = expr_create(EXPR_GENERAL, $2, 0);}
	| name TOKEN_LPAREN commaExprList TOKEN_RPAREN {$$ = expr_create(EXPR_GENERAL, $3, $1);}
	| int_literal {$$ = $1;}
	| name {$$ = $1;}
	| string_literal {$$ = $1;}
	| char_literal {$$ = $1;}

name: TOKEN_IDENT {$$ = expr_create_name($1);}
int_literal: TOKEN_NUMBER {$$ = expr_create_integer_literal($1);}
char_literal: TOKEN_ACTUALCHAR {$$ = expr_create_char_literal($1);}
string_literal: TOKEN_ACTUALSTRING {$$ = expr_create_string_literal($1);}
%%

int yywrap() { return 0; }
