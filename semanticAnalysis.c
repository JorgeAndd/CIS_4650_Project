#include "semanticAnalysis.h"

Quadruples *instructions = NULL;

char* getNewTemp()
{
	static int tempCount = 0;
	char *tempName = malloc(sizeof(char) * 8);
	Symbol *newSymbol;
		
	sprintf(tempName, "0tmp%d", tempCount++);
	
	newSymbol = createVarSymbol(tempName, TYPE_INT, 4);
	putSymbol(newSymbol);
	
	return tempName;
}

char* getNewLabel()
{
	static int labelCount = 0;
	char *tempName = malloc(sizeof(char) * 5);
		
	sprintf(tempName, "L%d", labelCount++);
	
	return tempName;
}

void addInstruction(char *label, int op, char *arg1, char *arg2, char *result)
{
	Quadruples *newInstruction = malloc(sizeof(Quadruples));
	
	newInstruction->label = label;
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

void printInstructions(FILE *output)
{
	fprintf(output, "%-10s OP\t %-16s %-16s %s\n", "LABEL", "ARG1", "ARG2", "RESULT");
	Quadruples *inst = instructions;
	while(inst != NULL)
	{
		fprintf(output, "%-10s %2d\t %-16s %-16s %s\n", inst->label, inst->op, inst->arg1, inst->arg2, inst->result);
		inst = inst->next;
	}
}

void initSemanticAnalysis()
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
	initSemanticAnalysis();
	
	//if(node->type_decl != NULL)
     //   processList(node->type_decl);	
     
    if(node->var_decl != NULL)	
    	processList(node->var_decl);
	//enterScope();
    	
   	if(node->function_def != NULL)
   		processList(node->function_def);
	
   	setInstructions(instructions);
	finishSymbolTable();
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
	//leaveScope();
}

void processFuncBody(FunctionBody *node)
{
	processList(node->varDecl_list);
	//enterScope();
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
			
			addInstruction("", node->u.bexpr.op, left.name, right.name, returnValue.name);
			
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
			return left;
		
		returnValue.name = getNewTemp();
		returnValue.type = left.type;
		addInstruction("", node->u.uexpr.op, left.name, "", returnValue.name);
		
		return returnValue;
		
		break;

	case PREOPEXPR:
		left = processExpr(node->u.uexpr.operand);
		
		if(left.type == -1)
			return left;
		
		returnValue.name = getNewTemp();
		returnValue.type = left.type;
		addInstruction("", node->u.preopexpr.op, left.name, "", returnValue.name);
		
		return returnValue;
		
		break;
			
	case POSTOPEXPR:
		left = processExpr(node->u.uexpr.operand);
		
		if(left.type == -1)
			return left;
		
		returnValue.name = getNewTemp();
		returnValue.type = left.type;
		addInstruction("", node->u.postopexpr.op, left.name, "", returnValue.name);
		
		return returnValue;
		
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
			addInstruction("", OP_ASSIGN, right.name, "", returnValue.name);
			
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
		returnValue.name = malloc(sizeof(char) * 30);
		sprintf(returnValue.name, "%d", node->u.intexpr.value);
		return returnValue;
			
	case FLOATEXPR:
		returnValue.type = TYPE_FLOAT;
		returnValue.type = TYPE_FLOAT;
		returnValue.name = malloc(sizeof(char) * 30);
		sprintf(returnValue.name, "%f", node->u.floatexpr.value);
		return returnValue;
		
	case CHAREXPR:
		returnValue.type = TYPE_CHAR;
		returnValue.type = TYPE_CHAR;
		returnValue.name = malloc(sizeof(char) * 2);
		sprintf(returnValue.name, "%c", node->u.charexpr.value);
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
	
	params1 = call->u.callexpr.param_list;
	while(params1 != NULL)
	{
		returnValue = processExpr(params1->u.expr_list.expr);
		
		addInstruction("", OP_PARAM, returnValue.name, "", "");
		
		params1 = params1->next;
	}
	addInstruction("", OP_CALL, call->u.callexpr.id, "", "");
}

void processStmt(Stmt *node)
{
	NodeValue newNode;
	NodeValue returnNode;
	char *label1, *label2;

	if(node == NULL)
		return;
		
	switch(node->kind)
	{
	case EXPRS:
		processExpr(node->u.exprs.expr);
		break;
	case IFS:
		returnNode = processExpr(node->u.ifs.test);
		label1 = getNewLabel();
		
		addInstruction("", OP_IF, returnNode.name, "0", label1);
		processStmt(node->u.ifs.thenpart);

		if(node->u.ifs.elsepart != NULL)
		{
			label2 = getNewLabel();		

			addInstruction("", OP_GOTO, "", "", label2);
			addInstruction(label1, OP_NOP, "", "", "");
			processStmt(node->u.ifs.elsepart);
			addInstruction(label2, OP_NOP, "", "", "");
		}else
			addInstruction(label1, OP_NOP, "", "", "");

		break;
	case RETURNS:
		processExpr(node->u.returns.value);
		break;
	case ITERS:
		processExpr(node->u.iters.init);
		label1 = getNewLabel();
		addInstruction(label1, OP_NOP, "", "", "");
		label2 = getNewLabel();
		
		returnNode = processExpr(node->u.iters.cond);
		addInstruction("", OP_IF, returnNode.name, "0", label2);
		processStmt(node->u.iters.body);
		processExpr(node->u.iters.incr);
		addInstruction("", OP_GOTO, "", "", label1);
		addInstruction(label2, OP_NOP, "", "", "");
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

