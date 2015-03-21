#pragma once

struct Program_t
{
	List *type_decl;
	List *var_decl;
	List *function_def;
};

struct VarDecl_t
{
	TypeName *type_name;	
	List *id_list;
		
	int line;
};	

struct TypeDecl_t
{
	enum { TYPE_T, STRUCT_T } kind;
	union
	{
		struct { TypeName *type; char *name; } type_def;
		struct { List *var_decl; char *name; } struct_def;
	}u;
		
	int line;
};

struct IdName_t
{
	enum { SIMPLE_ID, SUBSCRIPT_ID } kind;
	union
	{
		struct { char *name; } simple;
		struct { char *name; int size; } subscript;
	}u;
		
	int line;
};

struct TypeName_t
{
	enum { PRIMITIVE, USER } kind;
	
	union
	{
		struct { types_t type; } primitive;
		struct { char *type_name; } user;
	}u;
		
	int line;
};

struct Stmt_t
{
	enum { EXPRS, IFS, RETURNS, ITERS, COMPOUNDS } kind;
	union
	{
		struct { Expr *expr; } exprs;
		struct { Expr *test; Stmt *thenpart, *elsepart; } ifs;
		struct { Expr *value; } returns;
		struct { Expr *init; Expr *cond; Expr *incr; Stmt *body; } iters;
		struct { List *stmt_list; } compounds;
	}u;
	
	int line;
};

struct Expr_t
{
	enum 	{	BEXPR, UEXPR, 
				PREOPEXPR, POSTOPEXPR, 
				CALLEXPR, ASSIGNEXPR, SIZEOFEXPR, SIZEOFTYPEEXPR,
				VAREXPR, INTEXPR, FLOATEXPR, CHAREXPR
			} kind;
	union
	{
		struct { Expr *operand1; bin_operator_t op; Expr *operand2; } bexpr;
		struct { un_operator_t op; Expr *operand; } uexpr;
		struct { un_operator_t op; Expr *operand; } preopexpr;
		struct { Expr *operand; un_operator_t op; } postopexpr;
		
		struct { char *id; List *param_list; } callexpr;
		struct { Var *var; Expr *expr; } assignexpr;
		struct { Expr *size; } sizeofexpr;
		struct { types_t type; } sizeoftypeexpr;
		
		struct { Var *var; } varexpr;
		struct { int value; } intexpr;
		struct { float value; } floatexpr;
		struct { char value; } charexpr;
	}u;
		
	int line;
};

struct Var_t
{
	enum {SIMPLE, SUBSCRIPT, FIELD} kind;
	union
	{
		struct { char *name; } simple;
		struct { Var *var; Expr *subscript; } subscript;
		struct { Var *var; Var *field; } field;
	}u;
		
	int line;
};

struct Function_t
{
	TypeName *type;
	char *name;
	
	List *param_list;
	FunctionBody *body;
		
	int line;
};

struct FunctionBody_t
{
	List *varDecl_list;
	List *stmt_list;
		
	int line;
};

struct Param_t
{
	TypeName *type;
	IdName *id;
		
	int line;
};

/* Lists */

struct List_t
{
	enum {EXPR_LIST, STMT_LIST, VAR_DECL_LIST, TYPE_DECL_LIST, ID_LIST, 
			PARAM_LIST, FUNC_LIST} kind;
	union
	{
		struct { Expr *expr; } expr_list; 
		struct { Stmt *stmt; } stmt_list;
		struct { VarDecl *varDecl; } varDecl_list; 
		struct { TypeDecl *type; } typeDecl_list;
		struct { IdName *id; } id_list;
		struct { Param *param; } param_list;
		struct { Function *function; } func_list;
	}u;
	
	List *next;
		
	int line;
};
