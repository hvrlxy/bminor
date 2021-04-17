#include <stdlib.h>
#include<string.h>
#include <stdio.h>

struct decl {
	struct expr *name;
	struct type *type;
	struct expr *value;
	struct stmt *code;
	struct decl *next;
};

struct decl * decl_create( struct expr *name,
							struct type *type,
							struct expr *value,
							struct stmt *code,
							struct decl *next )
{
	struct decl *d = malloc(sizeof(*d));
	d->name = name;
	d->type = type;
	d->value = value;
	d->code = code;
	d->next = next;
	return d;
}

typedef enum {
	STMT_DECL,
	STMT_EXPR,
	STMT_IF_ELSE,
	STMT_IF,
	STMT_FOR,
	STMT_PRINT,
	STMT_RETURN,
	STMT_BLOCK
} stmt_t;

//convert stmt types to strings
const char* stmt_name[] =
{
	"STMT_DECL",
	"STMT_EXPR",
	"STMT_IF_ELSE",
	"STMT_IF",
	"STMT_FOR",
	"STMT_PRINT",
	"STMT_RETURN",
	"STMT_BLOCK"
};

struct stmt {
	stmt_t kind;
	struct decl *decl;
	struct expr *init_expr;
	struct expr *expr;
	struct expr *next_expr;
	struct stmt *body;
	struct stmt *else_body;
	struct stmt *next;
};

struct stmt * stmt_create( stmt_t kind,
	struct decl *decl, struct expr *init_expr,
	struct expr *expr, struct expr *next_expr,
	struct stmt *body, struct stmt *else_body,
	struct stmt *next ){

	struct stmt *s = malloc(sizeof(*s));
	s->kind = kind;
	s->decl = decl;
	s->init_expr = expr;
	s->expr = expr;
	s->next_expr = next_expr;
	s->body = body;
	s->else_body = else_body;
	s->next = next;
	return s;
}

typedef enum {
	EXPR_ADD,
	EXPR_SUB,
	EXPR_MUL,
	EXPR_DIV,
	EXPR_MOD,
	EXPR_POW,
	EXPR_EQUAL,
	EXPR_GTE,
	EXPR_LTE,
	EXPR_LT,
	EXPR_GT,
	EXPR_COMP,
	EXPR_ADDSUB,
	EXPR_MULTDIV,
	EXPR_NEGATE,
	EXPR_INCDEC,
	EXPR_NOT,
	EXPR_PLUSPLUS,
	EXPR_MINUSMINUS,
	EXPR_GENERAL,
	EXPR_NAME,
	EXPR_FACTOR,
	EXPR_CHARACTER_LITERAL,
	EXPR_STRING_LITERAL,
	EXPR_INTEGER,
	EXPR_BOOLEAN,
	EXPR_LOGICAL
} expr_t;

//convert expr type to strings
const char* expr_name[] =
{
	"EXPR_ADD",
	"EXPR_SUB",
	"EXPR_MUL",
	"EXPR_DIV",
	"EXPR_MOD",
	"EXPR_POW",
	"EXPR_EQUAL",
	"EXPR_GTE",
	"EXPR_LTE",
	"EXPR_LT",
	"EXPR_GT",
	"EXPR_COMP",
	"EXPR_ADDSUB",
	"EXPR_MULTDIV",
	"EXPR_NEGATE",
	"EXPR_INCDEC",
	"EXPR_NOT",
	"EXPR_PLUSPLUS",
	"EXPR_MINUSMINUS",
	"EXPR_GENERAL",
	"EXPR_NAME",
	"EXPR_FACTOR",
	"EXPR_CHARACTER_LITERAL",
	"EXPR_STRING_LITERAL",
	"EXPR_INTEGER",
	"EXPR_BOOLEAN",
	"EXPR_LOGICAL"
};

struct expr {
	expr_t kind;
	struct expr *left;
	struct expr *right;
	struct expr *name;
	int integer_value;
	const char *string_literal;
	char char_literal;
	int boolean_value;
};

struct expr * expr_create( expr_t kind, struct expr *L, struct expr *R ){
	struct expr *e = malloc(sizeof(*e));
	e->kind = kind;
	e->left = L;
	e->right = R;
	return e;
}
struct expr * expr_create_name( struct expr *name ){
	struct expr *e = malloc(sizeof(*e));
	e->name = name;
	return e;
}
struct expr * expr_create_integer_literal( int i ){
	struct expr *e = malloc(sizeof(*e));
	e->integer_value = i;
	return e;
}
struct expr * expr_create_boolean_literal( int b ){
	struct expr *e = malloc(sizeof(*e));
	e->boolean_value = b;
	return e;
}
struct expr * expr_create_char_literal( char c ){
	struct expr *e = malloc(sizeof(*e));
	e->char_literal = c;
	return e;
}
struct expr * expr_create_string_literal ( const char *str ){
	struct expr *e = malloc(sizeof(*e));
	e->string_literal = str;

	return e;
}

typedef enum {
	TYPE_VOID,
	TYPE_BOOLEAN,
	TYPE_CHARACTER,
	TYPE_INTEGER,
	TYPE_ARRAY,
	TYPE_STRING,
	TYPE_FUNCTION
} type_t;

//convert type types to strings
const char* type_name[] = 
{
	"TYPE_VOID",
	"TYPE_BOOLEAN",
	"TYPE_CHARACTER",
	"TYPE_INTEGER",
	"TYPE_ARRAY",
	"TYPE_STRING",
	"TYPE_FUNCTION"
};

struct type {
	type_t kind;
	struct type *subtype;
	struct param_list *params;
};

struct type * create_type(type_t kind, struct type *subtype, struct param_list *params){
	struct type *t = malloc(sizeof(*t));
	t->kind = kind;
	t->subtype = subtype;
	t->params = params;
	return t;
};

struct param_list {
	struct expr *name;
	struct type *type;
	struct param_list *next;
};

struct param_list * create_param_list(struct expr *name, struct type *type, struct param_list *next)
{
	struct param_list *p = malloc(sizeof(*p));
	p->name = name;
	p->type = type;
	p->next = next;
	return p;
}

void print_param_list(struct param_list *p, int*current_tab);
void print_type(struct type *t, int*current_tab);
void print_expr(struct expr *e, int *current_tab);
void print_stmt(struct stmt * stmt, int * current_tab);
void print_decl(struct decl *decl, int *current_tab);

//print the ast
void print_decl(struct decl *decl, int *current_tab){
	char tab[80] = "";
	for(int j = 0;j<*current_tab;j++) {
		strcat(tab, "\t");
	}
	printf("%s%s\n", tab,"decl:");
	if (decl->name != NULL){
		*current_tab = *current_tab + 1;
		print_expr(decl->name, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (decl->type != NULL){
		*current_tab = *current_tab + 1;
		print_type(decl->type, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (decl->value != NULL){
		*current_tab = *current_tab + 1;
		print_expr(decl->value, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (decl->code != NULL){
		*current_tab = *current_tab + 1;
		print_stmt(decl->code, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (decl->next != NULL){
		*current_tab = *current_tab + 1;
		print_decl(decl->next, current_tab);
		*current_tab = *current_tab - 1;
	}
}

void print_stmt(struct stmt * stmt, int * current_tab){
	char tab[80] = "";
	for(int j = 0;j<*current_tab;j++) {
		strcat(tab, "\t");
	}
	printf("%s %s %s \n", tab, "stmt:", stmt_name[stmt->kind]);
	if (stmt->decl != NULL){
		*current_tab = *current_tab + 1;
		print_decl(stmt->decl, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->init_expr != NULL){
		*current_tab = *current_tab + 1;
		print_expr(stmt->init_expr, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->expr != NULL){
		*current_tab = *current_tab + 1;
		print_expr(stmt->expr, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->next_expr != NULL){
		*current_tab = *current_tab + 1;
		print_expr(stmt->next_expr, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->body != NULL){
		*current_tab = *current_tab + 1;
		print_stmt(stmt->body, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->else_body != NULL){
		*current_tab = *current_tab + 1;
		print_stmt(stmt->else_body, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (stmt->next != NULL){
		*current_tab = *current_tab + 1;
		print_stmt(stmt->next, current_tab);
		*current_tab = *current_tab - 1;
	}
}

void print_expr(struct expr *e, int *current_tab){
	char tab[80] = "";
	for(int j = 0;j<*current_tab;j++) {
		strcat(tab, "\t");
	}
	printf("%s %s %s \n", tab, "expr:", expr_name[e->kind]);
	if (e->left != NULL){
		*current_tab = *current_tab + 1;
		print_expr(e->left, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (e->right != NULL){
		*current_tab = *current_tab + 1;
		print_expr(e->right, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (e->name != NULL){
		*current_tab = *current_tab + 1;
		print_expr(e->name, current_tab);
		*current_tab = *current_tab - 1;
	}
	printf("%s\t%s %d \n", tab, "integer_value:", e->integer_value);
	printf("%s\t%s %s \n", tab, "string_literal:", e->string_literal);
	printf("%s\t%s %c \n", tab, "char_literal:", e->char_literal);
	printf("%s\t%s %d \n", tab, "boolean_value:", e->boolean_value);
}

void print_type(struct type *t, int*current_tab){
	char tab[80] = "";
	for(int j = 0;j<*current_tab;j++) {
		strcat(tab, "\t");
	}
	printf("%s %s %s \n", tab, "type:", type_name[t->kind]);
	if (t->subtype != NULL){
		*current_tab = *current_tab + 1;
		print_type(t->subtype, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (t->params != NULL){
		*current_tab = *current_tab + 1;
		print_param_list(t->params, current_tab);
		*current_tab = *current_tab - 1;
	}
}

void print_param_list(struct param_list *p, int*current_tab){
	char tab[80] = "";
	for(int j = 0;j<*current_tab;j++) {
		strcat(tab, "\t");
	}
	printf("%s %s\n", tab, "params:");
	if (p->name != NULL){
		*current_tab = *current_tab + 1;
		print_expr(p->name, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (p->type != NULL){
		*current_tab = *current_tab + 1;
		print_type(p->type, current_tab);
		*current_tab = *current_tab - 1;
	}
	if (p->next != NULL){
		*current_tab = *current_tab + 1;
		print_param_list(p->next, current_tab);
		*current_tab = *current_tab - 1;
	}
}
