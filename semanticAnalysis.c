#include "semanticAnalysis.h"

Quadruples *instructions = NULL;

int numDigits(int n)
{
	int neg = 0;
	if(n < 0)
		neg = 1;
	
    if (n < 0) n = -n;
    if (n < 10) return 1 + neg;
    if (n < 100) return 2 + neg;
    if (n < 1000) return 3 + neg;
    if (n < 10000) return 4 + neg;
    if (n < 100000) return 5 + neg;
    if (n < 1000000) return 6 + neg;
    if (n < 10000000) return 7 + neg;
    if (n < 100000000) return 8 + neg;
    if (n < 1000000000) return 9 + neg;
    return 10 + neg;	
}

char* getNewTemp()
{
	static int tempCount = 0;
	char *tempName = malloc(sizeof(char) * 8);
		
	sprintf(tempName, "0tmp%d", tempCount++);
	
	return tempName;
}

void addInstruction(int op, char *arg1, char *arg2, char *result)
{
	Quadruples *newInstruction = malloc(sizeof(Quadruples));
	
	newInstruction->op = op;
	newInstruction->arg1 = arg1;
	newInstruction->arg2 = arg2;
	
	if(op == OP_PARAM)
		newInstruction->result = "";
	else
		newInstruction->result = result;
	
	newInstruction->next = NULL;
	
	Quadruples *instruction = instructions;
	
	if(instruction == NULL)
		instructions = newInstruction;
	else
	{
		while(instruction->next != NULL)
			instruction = instruction->next;
		
		instruction->next = newInstruction;
	}

}

void printInstructions()
{
	printf("OP\tARG1\t\tARG2\t\tRESULT\n");
	Quadruples *inst = instructions;
	while(inst != NULL)
	{
		printf("%d\t%s\t\t%s\t\t%s\n", inst->op, inst->arg1, inst->arg2, inst->result);
		inst = inst->next;
	}
}

void init()
{
	FuncSymbol *newSymbol = createFuncSymbol("putc", TYPE_CHAR);
	addParam(&newSymbol, TYPE_CHAR);
	putFuncSymbol(newSymbol);
	
	newSymbol = createFuncSymbol("puti", TYPE_INT);
	addParam(&newSymbol, TYPE_INT);
	putFuncSymbol(newSymbol);
	
	newSymbol = createFuncSymbol("putf", TYPE_FLOAT);
	addParam(&newSymbol, TYPE_FLOAT);
	putFuncSymbol(newSymbol);
}

void processProgram(Program *node)
{  
	FILE *tty = fopen("/dev/tty", "r");
	init();
	
	//if(node->type_decl != NULL)
     //   processList(node->type_decl);	
     
    if(node->var_decl != NULL)	
    	processList(node->var_decl);
	enterScope();
    	
   	if(node->function_def != NULL)
   		processList(node->function_def);
   		
   	printInstructions();
	
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
		char *name;
		int size;
		
		processIdName(id->u.id_list.id, &name, &size);
		
		newSymbol = createVarSymbol(name, type, size);
		
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
		*size = 4;
		break;
	case SUBSCRIPT_ID:
		*name = node->u.subscript.name;
		*size = node->u.subscript.size;
		break;
	}
}

void processFunction(Function *node)
{	
	types_t type = node->type->u.primitive.type;
	char *name = node->name;
	
	FuncSymbol *funcSymbol = createFuncSymbol(name, type);
	
	List *param = node->param_list;
	while(param != NULL)
	{
		Symbol *newSymbol;
		char *name;
		int size;
		
		TypeName *typeName = (param->u.param_list.param)->type;
		type = typeName->u.primitive.type;
		
		addParam(&funcSymbol, type);

		processIdName(param->u.param_list.param->id, &name, &size);
		newSymbol = createVarSymbol(name, type, size);
		putSymbol(newSymbol);
	
		param = param->next;
	}

	putFuncSymbol(funcSymbol);
	processFuncBody(node->body);
	leaveScope();
}

void processFuncBody(FunctionBody *node)
{
	processList(node->varDecl_list);
	enterScope();
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
	int n;

	if(node == NULL)
		return;
	
	switch(node->kind)
	{
	case BEXPR:
		left = processExpr(node->u.bexpr.operand1);
		right = processExpr(node->u.bexpr.operand2);
		
		
		if(left.type == -1 || right.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}	
		
		if(left.type == right.type)
		{
			returnValue.type = left.type;
			returnValue.name = getNewTemp();
			addInstruction(node->u.bexpr.op, left.name, right.name, returnValue.name);
			
			return returnValue;
		}
		else
		{
			reportError(TYPE_ERR, node->line);			
			returnValue.type = -1;
			return returnValue;
		}
		break;
		
	case UEXPR:
		left = processExpr(node->u.uexpr.operand);
		
		if(left.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}	
		
		return left;
		
		break;

	case PREOPEXPR:
		left = processExpr(node->u.uexpr.operand);
		
		if(left.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}	
		
		return left;
		break;
			
	case POSTOPEXPR:
		left = processExpr(node->u.uexpr.operand);
		
		if(left.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}	
		
		return left;
		
		break;		
		
	case CALLEXPR:
		return processCall(node);
		
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
		{
			returnValue = left;
			addInstruction(OP_ASSIGN, right.name, "", returnValue.name);
			
			return returnValue;
		}
		else
			reportError(TYPE_ERR, node->line);	
		
		break;		
	case SIZEOFEXPR:
		left = processExpr(node->u.sizeofexpr.size);
		
		if(left.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}
		
		//Need to process size of expression 
		returnValue.type = TYPE_INT;
		return returnValue;
		
		break;		
	case SIZEOFTYPEEXPR:
		//Not implemented correctly yet
		
		//Need to process size of expression 
		returnValue.type = TYPE_INT;
		return returnValue;

		break;		
	case VAREXPR:
		returnValue = processVar(node->u.varexpr.var);
		
		return returnValue;
		
		break;
	case INTEXPR:
		returnValue.type = TYPE_INT;
		n = numDigits(node->u.intexpr.value);
		printf("n digits = %d\n", n);
		
		//returnValue.name = malloc(sizeof(char)*
		return returnValue;
			
	case FLOATEXPR:
		returnValue.type = TYPE_FLOAT;
		return returnValue;
		
	case CHAREXPR:
		returnValue.type = TYPE_CHAR;
		return returnValue;

	}
	
}

NodeValue processCall(Expr *call)
{
	FuncSymbol *symbol;
	int result;
	NodeValue returnValue;

	result = getFuncSymbol(call->u.callexpr.id, &symbol);
		
	if(result == 0)
	{
		returnValue.type = symbol->type;
	}else
	{
		reportError(F_UNDECLARED_ERR, call->line);
		returnValue.type = -1;
		return returnValue;
	}
	
	List *params1 = call->u.callexpr.param_list;
	SParam *params2 = symbol->param;
	
	while(params1 != NULL && params2 != NULL)
	{	
		returnValue = processExpr(params1->u.expr_list.expr);
		
		if(returnValue.type == -1)
		{
			returnValue.type = -1;
			return returnValue;
		}	
		
		types_t type1 = returnValue.type;
		types_t type2 = params2->type;
		if(type1 != type2)
		{
			reportError(ARGUMENT_TYPE_ERR, call->line);
			returnValue.type = -1;
			return returnValue;
		}
	
		params1 = params1->next;
		params2 = params2->next;
	}
	
	if(params1 != NULL || params2 != NULL)
	{
		reportError(ARGUMENT_NUMBER_ERR, call->line);
		returnValue.type = -1;
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
			returnValue.name = symbol->name;
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
		fprintf(stderr, "%d: error: Incompatible types\n", line);
		break;
	case UNDECLARED_ERR:
		fprintf(stderr, "%d: error: Variable undeclared\n", line);
		break;
	case F_UNDECLARED_ERR:
		fprintf(stderr, "%d: error: Function undeclared\n", line);
		break;
	case ARGUMENT_TYPE_ERR:
		fprintf(stderr, "%d: error: Incorrect argument type on function call\n", line);
		break;
	case ARGUMENT_NUMBER_ERR:
		fprintf(stderr, "%d: error: Incorrect number of arguments on function call\n", line);
		break;
	}
}

