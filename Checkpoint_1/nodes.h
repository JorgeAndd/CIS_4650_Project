/*
 * Author: Jorge Luiz Andrade
 * #0906139
 */

typedef enum {OP_ADD, OP_SUB, OP_MULT, OP_DIV, OP_MOD, OP_GT, OP_LT, OP_GE, OP_LE,
		OP_DIFF, OP_EQUAL, OP_OR, OP_AND} bin_operator_t;
		
typedef enum {OP_NOT, OP_MINUS, OP_PLUS, OP_INC, OP_DEC} un_operator_t;

typedef enum {TYPE_INT, TYPE_FLOAT, TYPE_CHAR} types_t;

typedef struct VarDecl_t VarDecl;
typedef struct TypeDecl_t TypeDecl;
typedef struct IdName_t IdName;

typedef struct Stmt_t Stmt;
typedef struct Expr_t Expr;
typedef struct Var_t Var;

typedef struct ExprList_t ExprList;
typedef struct VarDeclList_t VarDeclList;
typedef struct TypeDeclList_t TypeDeclList;
typedef struct IdList_t IdList;

IdName *SimpleIdName_create(char *name);
IdName *SubscriptIdName_create(char *name, int size);

Stmt *IfStmt_create(Expr *test, Stmt *thenpart, Stmt *elsepart);

Expr *BinaryExpr_create(Expr *operand1, bin_operator_t op, Expr *operand2);
Expr *UnaryExpr_create(un_operator_t op, Expr *operand);

Expr *PreOpExpr_create(un_operator_t op, Expr *operand);
Expr *PostOpExpr_create(Expr *operand, un_operator_t op);

Expr *CallExpr_create(char *id, ExprList *param_list);
Expr *AssignExpr_create(Var *var, Expr *expr);
Expr *SizeOfExpr_create(Expr *size);
Expr *SizeOfTypeExpr_create(types_t type);
Expr *VarExpr_create(Var *var);

Expr *IntExpr_create(int value);
Expr *FloatExpr_create(float value);
Expr *CharExpr_create(char value);

ExprList *ExprList_create(Expr *expr, ExprList *next);
VarDeclList *VarDeclList_create(types_t type, IdList *idlist, VarDeclList *next);
TypeDeclList *TypeDeclList_create(TypeDecl *type, TypeDeclList *next);

Var *SimpleVar_create(char *name);
Var *FieldVar_create(Var *var, Var *field);
Var *SubscriptVar_create(Var *var, Expr *subscript);

