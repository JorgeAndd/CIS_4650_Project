#include "nodes.h"
#include "nodeStructs.h"
#include "symbolTable.h"
#include <stdio.h>

typedef enum { TYPE_ERR, UNDECLARED_ERR, F_UNDECLARED_ERR, ARGUMENT_TYPE_ERR,
				 ARGUMENT_NUMBER_ERR } error_t;

typedef struct
{
	types_t type;
}NodeValue;

void processProgram(Program *node);
void processList(List *node);
void processTypeDecl(TypeDecl *node);
void processTypeName(TypeName *node);
NodeValue processExpr(Expr *node);
NodeValue processCall(Expr *call);
void processVarDecl(VarDecl *node);
void processFunction(Function *node);
void processParam(Param *node);
void processFuncBody(FunctionBody *node);
void processStmt(Stmt *node);
NodeValue processVar(Var *node);
void processIdName(IdName *node, char **name, int *size);

void reportError(error_t error, int line);
