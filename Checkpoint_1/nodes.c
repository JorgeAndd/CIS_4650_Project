/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */
 
#include <stdlib.h>

#include "nodes.h"

typedef struct VarDecl_t
{
	enum { PRIMITIVE, USER } kind;
	union
	{
		struct { types_t type; char *name; } primitive;
		struct { types_t type; char *name; } user;
	}u;
};	

typedef struct TypeDecl_t
{
	enum { TYPE, STRUCT } kind;
	union
	{
		struct { types_t type; char *name; } type_def;
		//struct { StructDecl structdecl; char *name; } struct_def;
	}u;
};

typedef struct IdName_t
{
	enum { SIMPLE_ID, SUBSCRIPT_ID } kind;
	union
	{
		struct { char *name; } simple;
		struct { char *name; int size; } subscript;
	}u;
};

typedef struct Stmt_t
{
	enum { ASSIGN, IF, EXPR } kind;
	union
	{
		struct { Expr *test; Stmt *thenpart, *elsepart; } iff;
	}u;
};

typedef struct Expr_t
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
		
		struct { char *id; ExprList *param_list; } callexpr;
		struct { Var *var; Expr *expr; } assignexpr;
		struct { Expr *size; } sizeofexpr;
		struct { types_t type; } sizeoftypeexpr;
		
		struct { Var *var; } varexpr;
		struct { int value; } intexpr;
		struct { float value; } floatexpr;
		struct { char value; } charexpr;
	}u;
};

typedef struct Var_t
{
	enum {SIMPLE, SUBSCRIPT, FIELD} kind;
	union
	{
		struct { char *name; } simple;
		struct { Var *var; Expr *subscript; } subscript;
		struct { Var *var; Var *field; } field;
	}u;
};

/* Lists */

typedef struct ExprList_t
{
	Expr *expr;
	ExprList *next;
};

typedef struct VarDeclList_t
{
	types_t type;
	IdList *idlist;
	VarDeclList *next;
};


typedef struct TypeDeclList_t
{
	TypeDecl *type;
	TypeDeclList *next;
};

typedef struct IdList_t
{
	VarDecl *id;
	IdList *next;
};

/* Constructors */

IdName *SimpleIdName_create(char *name)
{
	IdName *new = calloc(1, sizeof(IdName));
	
	new->kind = SIMPLE_ID;
	new->u.simple.name = name;
	
	return new;
}

IdName *SubscriptIdName_create(char *name, int size)
{
	IdName *new = calloc(1, sizeof(IdName));
	
	new->kind = SUBSCRIPT_ID;
	new->u.subscript.name = name;
	new->u.subscript.size = size;
	
	return new;
}

Var *SimpleVar_create(char *name)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SIMPLE;
	new->u.simple.name = name;
	
	return new;
}

Var *SubscriptVar_create(Var *var, Expr *subscript)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SUBSCRIPT;
	new->u.subscript.var = var;
	new->u.subscript.subscript = subscript;
	
	return new;
}

Var *FieldVar_create(Var *var, Var *field)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SIMPLE;
	new->u.field.var = var;
	new->u.field.field = field;
	
	return new;
}

Expr *BinaryExpr_create(Expr *operand1, bin_operator_t op, Expr *operand2)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = BEXPR;
	new->u.bexpr.operand1 = operand1;
	new->u.bexpr.op = op;
	new->u.bexpr.operand2 = operand2;
	
	return new;
}

Expr *UnaryExpr_create(un_operator_t op, Expr *operand)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = UEXPR;
	new->u.uexpr.op = op;
	new->u.uexpr.operand = operand;
	
	return new;
}

Expr *PreOpExpr_create(un_operator_t op, Expr *operand)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = PREOPEXPR;
	new->u.preopexpr.op = op;
	new->u.preopexpr.operand = operand;
	
	return new;
}

Expr *PostOpExpr_create(Expr *operand, un_operator_t op)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = POSTOPEXPR;
	new->u.postopexpr.operand = operand;
	new->u.postopexpr.op = op;
	
	return new;
}
Expr *CallExpr_create(char *id, ExprList *param_list)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = CALLEXPR;
	new->u.callexpr.id = id;
	new->u.callexpr.param_list = param_list;
	
	return new;
}

Expr *AssignExpr_create(Var *var, Expr *expr)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = ASSIGN;
	new->u.assignexpr.var = var;
	new->u.assignexpr.expr = expr;

	return new;
}

Expr *SizeOfExpr_create(Expr *size)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = SIZEOFEXPR;
	new->u.sizeofexpr.size = size;

	return new;
}

Expr *SizeOfTypeExpr_create(types_t type)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = SIZEOFEXPR;
	new->u.sizeoftypeexpr.type = type;

	return new;
}

Expr *VarExpr_create(Var *var)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = VAREXPR;
	new->u.varexpr.var = var;
	
	return new;
}

Expr *IntExpr_create(int value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = INTEXPR;
	new->u.intexpr.value = value;
	
	return new;
}

Expr *FloatExpr_create(float value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = FLOATEXPR;
	new->u.floatexpr.value = value;
	
	return new;
}

Expr *CharExpr_create(char value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = CHAREXPR;
	new->u.charexpr.value = value;
	
	return new;
}

ExprList *ExprList_create(Expr *expr, ExprList *next)
{
	ExprList *new = calloc(1, sizeof(ExprList));
	
	new->expr = expr;
	new->next = next;	
	
	return new;
}

VarDeclList *VarDeclList_create(types_t type, IdList *idlist, VarDeclList *next)
{
	VarDeclList *new = calloc(1, sizeof(VarDeclList));
	
	new->type = type;
	new->idlist = idlist;	
	new->next = next;
	
	return new;
}

TypeDeclList *TypeDeclList_create(TypeDecl *type, TypeDeclList *next)
{
	TypeDeclList *new = calloc(1, sizeof(TypeDeclList));
	
	new->type = type;
	new->next = next;	
}

IdList *IdList_create(VarDecl *id, IdList *next)
{
	IdList *new = calloc(1, sizeof(IdList));
	
	new->id = id;
	new->next = next;
}	


Stmt *IfStmt_create(Expr *test, Stmt *thenpart, Stmt *elsepart)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = IF;
	new->u.iff.test = test;
	new->u.iff.thenpart = thenpart;
	new->u.iff.elsepart = elsepart;
	
	return new;
}
