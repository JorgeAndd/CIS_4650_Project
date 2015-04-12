/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */

#pragma once

typedef enum {OP_ADD, OP_SUB, OP_MULT, OP_DIV, OP_MOD, OP_GT, OP_LT, OP_GE, OP_LE,
		OP_DIFF, OP_EQUAL, OP_OR, OP_AND, OP_NOT, OP_MINUS, OP_PLUS, OP_INC, OP_DEC,
		OP_PARAM, OP_CALL, OP_ASSIGN, OP_IF, OP_GOTO, OP_NOP} operator_t;

typedef enum {TYPE_INT, TYPE_FLOAT, TYPE_CHAR, TYPE_VOID} types_t;

typedef struct Program_t Program;

typedef struct VarDecl_t VarDecl;
typedef struct TypeDecl_t TypeDecl;
typedef struct IdName_t IdName;
typedef struct TypeName_t TypeName;

typedef struct Stmt_t Stmt;
typedef struct Expr_t Expr;
typedef struct Var_t Var;

typedef struct Function_t Function;
typedef struct FunctionBody_t FunctionBody;
typedef struct Param_t Param;

typedef struct List_t List;

Program *Program_create(List *type_decl, List *var_decl, List *function_def);

VarDecl *VarDecl_create(int line, TypeName *type_name, List *id_list);

IdName *SimpleIdName_create(int line, char *name);
IdName *SubscriptIdName_create(int line, char *name, int size);

TypeName *PrimitiveTypeName_create(int line, types_t type);
TypeName *UserTypeName_create(int line, char *type_name);

Stmt *ExpressionStmt_create(int line, Expr *expr);
Stmt *IfStmt_create(int line, Expr *test, Stmt *thenpart, Stmt *elsepart);
Stmt *ReturnStmt_create(int line, Expr *value);
Stmt *IterativeStmt_create(int line, Expr *init, Expr *cond, Expr *incr, Stmt *body);
Stmt *CompoundStmt_create(int line, List *stmt_list);

TypeDecl *Typedef_create(int line, TypeName *type, char *name);
TypeDecl *Struct_create(int line, List *var_decl, char *name);

Expr *BinaryExpr_create(int line, Expr *operand1, operator_t op, Expr *operand2);
Expr *UnaryExpr_create(int line, operator_t op, Expr *operand);

Expr *PreOpExpr_create(int line, operator_t op, Expr *operand);
Expr *PostOpExpr_create(int line, Expr *operand, operator_t op);

Expr *CallExpr_create(int line, char *id, List *param_list);
Expr *AssignExpr_create(int line, Var *var, Expr *expr);
Expr *SizeOfExpr_create(int line, Expr *size);
Expr *SizeOfTypeExpr_create(int line, types_t type);
Expr *VarExpr_create(int line, Var *var);

Expr *IntExpr_create(int line, int value);
Expr *FloatExpr_create(int line, float value);
Expr *CharExpr_create(int line, char value);

Function *Function_create(int line, TypeName *type, char *name, List *param_list, FunctionBody *body);
FunctionBody *FunctionBody_create(int line, List *varDecl_list, List *stmt_list);
Param *Param_create(int line, TypeName *type, IdName *id);

List *ExprList_create(int line, Expr *expr, List *next);
List *StmtList_create(int line, Stmt *stmt, List *next);
List *TypeDeclList_create(int line, TypeDecl *type, List *next);
List *VarDeclList_create(int line, VarDecl *varDecl, List *next);
List *IdList_create(int line, IdName *id, List *next);
List *ParamList_create(int line, Param *param, List *next);
List *FunctionList_create(int line, Function *function, List *next);
List *Append(List *tree, List *next);

Var *SimpleVar_create(int line, char *name);
Var *FieldVar_create(int line, Var *var, Var *field);
Var *SubscriptVar_create(int line, Var *var, Expr *subscript);

