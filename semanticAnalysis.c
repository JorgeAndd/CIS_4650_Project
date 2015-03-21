#include "semanticAnalysis.h"

void processProgram(Program *node)
{  
	FILE *tty = fopen("/dev/tty", "r");
	
	//if(node->type_decl != NULL)
     //   processList(node->type_decl);	
     
    if(node->var_decl != NULL)	
    	processList(node->var_decl);
    	
   	if(node->function_def != NULL)
   		processList(node->function_def);
	
}

void processList(List *node)
{
	if(node == NULL)
		return;

    switch(node->kind)
    {
    case(EXPR_LIST):
        processExpr(node->u.expr_list.expr);
        processList(node->next);
        break;

    case(STMT_LIST):
    	processStmt(node->u.stmt_list.stmt);
		processList(node->next);
        break;

    case(VAR_DECL_LIST):
        processVarDecl(node->u.varDecl_list.varDecl);
    	processList(node->next);
        break;

    case(TYPE_DECL_LIST):
        processTypeDecl(node->u.typeDecl_list.type);
        processList(node->next);
        break;

    case(ID_LIST):
        //processIdName(node->u.id_list.id);
        processList(node->next);
        break;

    case(PARAM_LIST):
        processParam(node->u.param_list.param);
        processList(node->next);
        break;

    case(FUNC_LIST):
        processFunction(node->u.func_list.function);
        processList(node->next);
        break;
        
    default:
    	fprintf(stderr, "Invalid kind\n");	
    	break;
    }
}

void processTypeDecl(TypeDecl *node)
{
    switch(node->kind)
    {
    case TYPE_T:
        processTypeName(node->u.type_def.type);
        break;

    case STRUCT_T:
    	processList(node->u.struct_def.var_decl);
        break;
    }

}

void processTypeName(TypeName *node)
{
    switch(node->kind)
    {
    case PRIMITIVE:
        break;
    case USER:
        break;
    }
}

void processVarDecl(VarDecl *node)
{
	types_t type = node->type_name->u.primitive.type;
	
	Symbol *newSymbol;
	List *id = node->id_list;
	
	do{
		newSymbol = malloc(sizeof(Symbol));
		
		processIdName(id->u.id_list.id, &(newSymbol->name), &(newSymbol->size));
		newSymbol->size *= 4;
		newSymbol->type = type;
		
		putSymbol(newSymbol);
		
		id = id->next;
	}while(id != NULL);
}	

void processIdName(IdName *node, char **name, int *size)
{
	switch(node->kind)
	{
	case SIMPLE_ID:
		*name = node->u.simple.name;
		*size = 1;
		break;
	case SUBSCRIPT_ID:
		*name = node->u.subscript.name;
		*size = node->u.subscript.size;
		break;
	}
}

void processFunction(Function *node)
{
	fprintf(stderr,"func\n");
	processTypeName(node->type);
	processList(node->param_list);
	processFuncBody(node->body);
}

void processFuncBody(FunctionBody *node)
{
	fprintf(stderr,"func_body\n");
	processList(node->varDecl_list);
	processList(node->stmt_list);
}

void processParam(Param *node)
{
	processTypeName(node->type);
	//processIdName(node->id);
}

NodeValue processExpr(Expr *node)
{
	NodeValue left;
	NodeValue right;
	NodeValue returnValue;

	if(node == NULL)
		return;
	
	switch(node->kind)
	{
	case BEXPR:
		left = processExpr(node->u.bexpr.operand1);
		right = processExpr(node->u.bexpr.operand2);
		
		if(left.type == right.type)
			return left;
		else
		{
			reportError(TYPE_ERR, node->line);			
			returnValue.type = -1;
			return returnValue;
		}
		break;
		
	case UEXPR:
		processExpr(node->u.uexpr.operand);
		break;

	case PREOPEXPR:
		processExpr(node->u.preopexpr.operand);
		break;
			
	case POSTOPEXPR:
		processExpr(node->u.postopexpr.operand);
		break;		
		
	case CALLEXPR:
		processList(node->u.callexpr.param_list);
		break;		
	case ASSIGNEXPR:
		left = processVar(node->u.assignexpr.var);
		right = processExpr(node->u.assignexpr.expr);
		
		if(left.type == -1 || right.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}			
		
		if(left.type == right.type)
			return left;
		else
			reportError(TYPE_ERR, node->line);	
		
		break;		
	case SIZEOFEXPR:
		processExpr(node->u.sizeofexpr.size);
		break;		
	case SIZEOFTYPEEXPR:
		break;		
	case VAREXPR:
		processVar(node->u.varexpr.var);
		break;
	case INTEXPR:
		returnValue.type = TYPE_INT;
		return returnValue;
			
	case FLOATEXPR:
		returnValue.type = TYPE_FLOAT;
		return returnValue;
		
	case CHAREXPR:
		returnValue.type = TYPE_CHAR;
		return returnValue;

	}
	
}

void processStmt(Stmt *node)
{
	if(node == NULL)
		return;
		
	switch(node->kind)
	{
	case EXPRS:
		processExpr(node->u.exprs.expr);
		break;
	case IFS:
		processExpr(node->u.ifs.test);	
		processStmt(node->u.ifs.thenpart);
		processStmt(node->u.ifs.elsepart);
		processExpr(node->u.ifs.test);
		break;
	case RETURNS:
		processExpr(node->u.returns.value);
		break;
	case ITERS:
		processExpr(node->u.iters.init);
		processExpr(node->u.iters.cond);
		processStmt(node->u.iters.body);
		break;
	case COMPOUNDS:
		processList(node->u.compounds.stmt_list);
		break;
	}
}

NodeValue processVar(Var *node)
{	
	NodeValue returnValue;
	Symbol *symbol;
	int result;
	
	switch(node->kind)
	{
	case SIMPLE:
		result = getSymbol(node->u.simple.name, &symbol);
		
		if(result == 0)
		{
			returnValue.type = symbol->type;
			return returnValue;
		}else
		{
			reportError(UNDECLARED_ERR, node->line);
			returnValue.type = -1;
			return returnValue;
		}
		
		break;
	case SUBSCRIPT:
		processVar(node->u.subscript.var);
		processExpr(node->u.subscript.subscript);
		break;
	case FIELD:
		processVar(node->u.field.var);
		processVar(node->u.field.var);
		break;
	}
}

void reportError(error_t error, int line)
{
	switch(error)
	{
	case TYPE_ERR:
		fprintf(stderr, "ERROR: Incompatible types on line %d\n", line);
		break;
	case UNDECLARED_ERR:
		fprintf(stderr, "ERROR: Variable undeclared on line %d\n", line);
		break;
	}
}

