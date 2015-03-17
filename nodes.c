/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */
 
#include <stdlib.h>

#include "nodes.h"
#include "nodeStructs.h"

/* Constructors */

Program *Program_create(List *type_decl, List *var_decl, List *function_def)
{
	Program *new = calloc(1, sizeof(Program));
	
	new->type_decl = type_decl;
	new->var_decl = var_decl;
	new->function_def = function_def;
	
	return new;
}

VarDecl *VarDecl_create(TypeName *type_name, List *id_list)
{
	VarDecl *new = calloc(1, sizeof(VarDecl));
	
	new->type_name = type_name;
	new->id_list = id_list;
	
	return new;
}

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

TypeName *PrimitiveTypeName_create(types_t type)
{
	TypeName *new = calloc(1, sizeof(TypeName));
	
	new->kind = PRIMITIVE;
	new->u.primitive.type = type;
	
	return new;
}

TypeName *UserTypeName_create(char *type_name)
{
	TypeName *new = calloc(1, sizeof(TypeName));
	
	new->kind = USER;
	new->u.user.type_name = type_name;
	
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

TypeDecl *Typedef_create(TypeName *type, char *name)
{
	TypeDecl *new = calloc(1, sizeof(TypeDecl));
	
	new->kind = TYPE_T;
	new->u.type_def.type = type;
	new->u.type_def.name = name;
	
	return new;
}

TypeDecl *Struct_create(List *var_decl, char *name)
{
	TypeDecl *new = calloc(1, sizeof(TypeDecl));
	
	new->kind = STRUCT_T;
	new->u.struct_def.var_decl = var_decl;
	new->u.struct_def.name = name;
	
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
Expr *CallExpr_create(char *id, List *param_list)
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
	
	new->kind = ASSIGNEXPR;
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

List *ExprList_create(Expr *expr, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = EXPR_LIST;
	new->u.expr_list.expr = expr;
	new->next = next;	
	
	return new;
}

List *StmtList_create(Stmt *stmt, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = STMT_LIST;
	new->u.stmt_list.stmt = stmt;
	new->next = next;	
	
	return new;
}

List *TypeDeclList_create(TypeDecl *type, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = TYPE_DECL_LIST;
	new->u.typeDecl_list.type = type;
	new->next = next;	
	
	return new;
}

List *VarDeclList_create(VarDecl *varDecl, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = VAR_DECL_LIST;
	new->u.varDecl_list.varDecl = varDecl;	
	new->next = next;
	
	return new;
}

List *IdList_create(IdName *id, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = ID_LIST;
	new->u.id_list.id = id;
	new->next = next;
	
	return new;
}

List *ParamList_create(Param *param, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = PARAM_LIST;
	new->u.param_list.param = param;
	new->next = next;
	
	return new;
}

List *FunctionList_create(Function *function, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = FUNC_LIST;
	new->u.func_list.function = function;
	new->next = next;
	
	return new;
}

List *Append(List *tree, List *next)
{
	tree->next = next;
	return tree;
}



Function *Function_create(TypeName *type, char *name, List *param_list, FunctionBody *body)
{
	Function *new = calloc(1, sizeof(Function));
	
	new->type = type;
	new->name = name;
	new->param_list = param_list;
	new->body = body;
	
	return new;
}

FunctionBody *FunctionBody_create(List *varDecl_list, List *stmt_list)
{
	FunctionBody *new = calloc(1, sizeof(Function));
	
	new->varDecl_list = varDecl_list;
	new->stmt_list = stmt_list;
	
	return new;
}

Param *Param_create(TypeName *type, IdName *id)
{
	Param *new = calloc(1, sizeof(Param));
	
	new->type = type;
	new->id = id;
	
	return new;
}

Stmt *IfStmt_create(Expr *test, Stmt *thenpart, Stmt *elsepart)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = IFS;
	new->u.ifs.test = test;
	new->u.ifs.thenpart = thenpart;
	new->u.ifs.elsepart = elsepart;
	
	return new;
}

Stmt *ReturnStmt_create(Expr *value)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = RETURNS;
	new->u.returns.value = value;
	
	return new;
}

Stmt *IterativeStmt_create(Expr *init, Expr *cond, Expr *incr, Stmt *body)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = ITERS;
	new->u.iters.init = init;
	new->u.iters.cond = cond;
	new->u.iters.incr = incr;
	new->u.iters.body = body;
	
	return new;
}

Stmt *CompoundStmt_create(List *stmt_list)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = COMPOUNDS;
	new->u.compounds.stmt_list = stmt_list;
	
	return new;
}

Stmt *ExpressionStmt_create(Expr *expr)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = EXPRS;
	new->u.exprs.expr = expr;
	
	return new;
}
