/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */

#pragma once

typedef enum {OP_ADD, OP_SUB, OP_MULT, OP_DIV, OP_MOD, OP_GT, OP_LT, OP_GE, OP_LE,
		OP_DIFF, OP_EQUAL, OP_OR, OP_AND} bin_operator_t;
		
typedef enum {OP_NOT, OP_MINUS, OP_PLUS, OP_INC, OP_DEC} un_operator_t;

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

VarDecl *VarDecl_create(TypeName *type_name, List *id_list);

IdName *SimpleIdName_create(char *name);
IdName *SubscriptIdName_create(char *name, int size);

TypeName *PrimitiveTypeName_create(types_t type);
TypeName *UserTypeName_create(char *type_name);

Stmt *ExpressionStmt_create(Expr *expr);
Stmt *IfStmt_create(Expr *test, Stmt *thenpart, Stmt *elsepart);
Stmt *ReturnStmt_create(Expr *value);
Stmt *IterativeStmt_create(Expr *init, Expr *cond, Expr *incr, Stmt *body);
Stmt *CompoundStmt_create(List *stmt_list);

TypeDecl *Typedef_create(TypeName *type, char *name);
TypeDecl *Struct_create(List *var_decl, char *name);

Expr *BinaryExpr_create(Expr *operand1, bin_operator_t op, Expr *operand2);
Expr *UnaryExpr_create(un_operator_t op, Expr *operand);

Expr *PreOpExpr_create(un_operator_t op, Expr *operand);
Expr *PostOpExpr_create(Expr *operand, un_operator_t op);

Expr *CallExpr_create(char *id, List *param_list);
Expr *AssignExpr_create(Var *var, Expr *expr);
Expr *SizeOfExpr_create(Expr *size);
Expr *SizeOfTypeExpr_create(types_t type);
Expr *VarExpr_create(Var *var);

Expr *IntExpr_create(int value);
Expr *FloatExpr_create(float value);
Expr *CharExpr_create(char value);

Function *Function_create(TypeName *type, char *name, List *param_list, FunctionBody *body);
FunctionBody *FunctionBody_create(List *varDecl_list, List *stmt_list);
Param *Param_create(TypeName *type, IdName *id);

List *ExprList_create(Expr *expr, List *next);
List *StmtList_create(Stmt *stmt, List *next);
List *TypeDeclList_create(TypeDecl *type, List *next);
List *VarDeclList_create(VarDecl *varDecl, List *next);
List *IdList_create(IdName *id, List *next);
List *ParamList_create(Param *param, List *next);
List *FunctionList_create(Function *function, List *next);

Var *SimpleVar_create(char *name);
Var *FieldVar_create(Var *var, Var *field);
Var *SubscriptVar_create(Var *var, Expr *subscript);

