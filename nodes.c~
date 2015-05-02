/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */
 
#include <stdlib.h>
#include <stdio.h>

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

VarDecl *VarDecl_create(int line, TypeName *type_name, List *id_list)
{
	VarDecl *new = calloc(1, sizeof(VarDecl));
	
	new->type_name = type_name;
	new->id_list = id_list;
	new->line = line;
	
	return new;
}

IdName *SimpleIdName_create(int line, char *name)
{
	IdName *new = calloc(1, sizeof(IdName));
	
	new->kind = SIMPLE_ID;
	new->u.simple.name = name;
	new->line = line;
	
	return new;
}

IdName *SubscriptIdName_create(int line, char *name, int size)
{
	IdName *new = calloc(1, sizeof(IdName));
	
	new->kind = SUBSCRIPT_ID;
	new->u.subscript.name = name;
	new->u.subscript.size = size;
	new->line = line;
	
	return new;
}

TypeName *PrimitiveTypeName_create(int line, types_t type)
{
	TypeName *new = calloc(1, sizeof(TypeName));
	
	new->kind = PRIMITIVE;
	new->u.primitive.type = type;
	new->line = line;
	
	return new;
}

TypeName *UserTypeName_create(int line, char *type_name)
{
	TypeName *new = calloc(1, sizeof(TypeName));
	
	new->kind = USER;
	new->u.user.type_name = type_name;
	new->line = line;
	
	return new;
}

Var *SimpleVar_create(int line, char *name)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SIMPLE;
	new->u.simple.name = name;
	new->line = line;
	
	return new;
}

Var *SubscriptVar_create(int line, Var *var, Expr *subscript)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SUBSCRIPT;
	new->u.subscript.var = var;
	new->u.subscript.subscript = subscript;
	new->line = line;
	
	return new;
}

Var *FieldVar_create(int line, Var *var, Var *field)
{
	Var *new = calloc(1, sizeof(Var));
	
	new->kind = SIMPLE;
	new->u.field.var = var;
	new->u.field.field = field;
	new->line = line;
	
	return new;
}

TypeDecl *Typedef_create(int line, TypeName *type, char *name)
{
	TypeDecl *new = calloc(1, sizeof(TypeDecl));
	
	new->kind = TYPE_T;
	new->u.type_def.type = type;
	new->u.type_def.name = name;
	new->line = line;
	
	return new;
}

TypeDecl *Struct_create(int line, List *var_decl, char *name)
{
	TypeDecl *new = calloc(1, sizeof(TypeDecl));
	
	new->kind = STRUCT_T;
	new->u.struct_def.var_decl = var_decl;
	new->u.struct_def.name = name;
	new->line = line;
	
	return new;
}


Expr *BinaryExpr_create(int line, Expr *operand1, bin_operator_t op, Expr *operand2)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = BEXPR;
	new->u.bexpr.operand1 = operand1;
	new->u.bexpr.op = op;
	new->u.bexpr.operand2 = operand2;
	new->line = line;
	
	return new;
}

Expr *UnaryExpr_create(int line, un_operator_t op, Expr *operand)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = UEXPR;
	new->u.uexpr.op = op;
	new->u.uexpr.operand = operand;
	new->line = line;
	
	return new;
}

Expr *PreOpExpr_create(int line, un_operator_t op, Expr *operand)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = PREOPEXPR;
	new->u.preopexpr.op = op;
	new->u.preopexpr.operand = operand;
	new->line = line;
	
	return new;
}

Expr *PostOpExpr_create(int line, Expr *operand, un_operator_t op)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = POSTOPEXPR;
	new->u.postopexpr.operand = operand;
	new->u.postopexpr.op = op;
	new->line = line;
	
	return new;
}
Expr *CallExpr_create(int line, char *id, List *param_list)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = CALLEXPR;
	new->u.callexpr.id = id;
	new->u.callexpr.param_list = param_list;
	new->line = line;
	
	return new;
}

Expr *AssignExpr_create(int line, Var *var, Expr *expr)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = ASSIGNEXPR;
	new->u.assignexpr.var = var;
	new->u.assignexpr.expr = expr;
	new->line = line;

	return new;
}

Expr *SizeOfExpr_create(int line, Expr *size)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = SIZEOFEXPR;
	new->u.sizeofexpr.size = size;
	new->line = line;

	return new;
}

Expr *SizeOfTypeExpr_create(int line, types_t type)
{
	Expr *new = calloc(1, sizeof(Stmt));
	
	new->kind = SIZEOFEXPR;
	new->u.sizeoftypeexpr.type = type;
	new->line = line;

	return new;
}

Expr *VarExpr_create(int line, Var *var)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = VAREXPR;
	new->u.varexpr.var = var;
	new->line = line;
	
	return new;
}

Expr *IntExpr_create(int line, int value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = INTEXPR;
	new->u.intexpr.value = value;
	new->line = line;
	
	return new;
}

Expr *FloatExpr_create(int line, float value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = FLOATEXPR;
	new->u.floatexpr.value = value;
	new->line = line;
	
	return new;
}

Expr *CharExpr_create(int line, char value)
{
	Expr *new = calloc(1, sizeof(Expr));
	
	new->kind = CHAREXPR;
	new->u.charexpr.value = value;
	new->line = line;
	
	return new;
}

List *ExprList_create(int line, Expr *expr, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = EXPR_LIST;
	new->u.expr_list.expr = expr;
	new->next = next;
	new->line = line;
	
	return new;
}

List *StmtList_create(int line, Stmt *stmt, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = STMT_LIST;
	new->u.stmt_list.stmt = stmt;
	new->next = next;
	new->line = line;
	
	return new;
}

List *TypeDeclList_create(int line, TypeDecl *type, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = TYPE_DECL_LIST;
	new->u.typeDecl_list.type = type;
	new->next = next;
	new->line = line;
	
	return new;
}

List *VarDeclList_create(int line, VarDecl *varDecl, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = VAR_DECL_LIST;
	new->u.varDecl_list.varDecl = varDecl;	
	new->next = next;
	new->line = line;
	
	return new;
}

List *IdList_create(int line, IdName *id, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = ID_LIST;
	new->u.id_list.id = id;
	new->next = next;
	new->line = line;
	
	return new;
}

List *ParamList_create(int line, Param *param, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = PARAM_LIST;
	new->u.param_list.param = param;
	new->next = next;
	new->line = line;
	
	return new;
}

List *FunctionList_create(int line, Function *function, List *next)
{
	List *new = calloc(1, sizeof(List));
	
	new->kind = FUNC_LIST;
	new->u.func_list.function = function;
	new->next = next;
	new->line = line;
	
	return new;
}

List *Append(List *tree, List *next)
{
	List *aux = tree;
	
	while(aux->next != NULL)
		aux = aux->next;
	
	aux->next = next;
	return tree;
}



Function *Function_create(int line, TypeName *type, char *name, List *param_list, FunctionBody *body)
{
	Function *new = calloc(1, sizeof(Function));
	
	new->type = type;
	new->name = name;
	new->param_list = param_list;
	new->body = body;
	new->line = line;
	
	return new;
}

FunctionBody *FunctionBody_create(int line, List *varDecl_list, List *stmt_list)
{
	FunctionBody *new = calloc(1, sizeof(Function));
	
	new->varDecl_list = varDecl_list;
	new->stmt_list = stmt_list;
	new->line = line;
	
	return new;
}

Param *Param_create(int line, TypeName *type, IdName *id)
{
	Param *new = calloc(1, sizeof(Param));
	
	new->type = type;
	new->id = id;
	new->line = line;
	
	return new;
}

Stmt *IfStmt_create(int line, Expr *test, Stmt *thenpart, Stmt *elsepart)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = IFS;
	new->u.ifs.test = test;
	new->u.ifs.thenpart = thenpart;
	new->u.ifs.elsepart = elsepart;
	new->line = line;
	
	return new;
}

Stmt *ReturnStmt_create(int line, Expr *value)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = RETURNS;
	new->u.returns.value = value;
	new->line = line;
	
	return new;
}

Stmt *IterativeStmt_create(int line, Expr *init, Expr *cond, Expr *incr, Stmt *body)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = ITERS;
	new->u.iters.init = init;
	new->u.iters.cond = cond;
	new->u.iters.incr = incr;
	new->u.iters.body = body;
	new->line = line;
	
	return new;
}

Stmt *CompoundStmt_create(int line, List *stmt_list)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = COMPOUNDS;
	new->u.compounds.stmt_list = stmt_list;
	new->line = line;
	
	return new;
}

Stmt *ExpressionStmt_create(int line, Expr *expr)
{
	Stmt *new = calloc(1, sizeof(Stmt));
	
	new->kind = EXPRS;
	new->u.exprs.expr = expr;
	new->line = line;
	
	return new;
}
