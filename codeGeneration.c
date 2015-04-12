#include "codeGeneration.h"

Quadruples *instructions;
List_node** variablesTable;
FuncList_node** functionsTable;

FILE *output;

void setInstructions(Quadruples *instructions_in)
{
	instructions = instructions_in;
}

void setSymbolTables(List_node *variablesTable_in[], 
						FuncList_node* functionsTable_in[])
{
	variablesTable = variablesTable_in;
	functionsTable = functionsTable_in;
}

void setAssemblyFile(FILE *output_in)
{
	output = output_in;
}

//Checks if a string is a number
int isNumber(char *name)
{	
	while(*name)
	{
		if(*name >= 48 && *name <= 57)
			name++;
		else
			return 0;
	}
	
	return 1;
}

void printMIPS(FILE *out)
{
	
	Quadruples *inst = instructions;	
	output = out;
	
	while(inst != NULL)
	{
		if(inst->label[0] != '\0')
			fprintf(output, "%s: ", inst->label);
		
		switch(inst->op)
		{
		case OP_ASSIGN:
			translateAssign(inst);
			break;
		case OP_ADD:
		case OP_SUB:
		case OP_MULT:
		case OP_DIV:
		case OP_MOD:
			translateBasicOp(inst);
			break;
		case OP_GT:
		case OP_LT: 
		case OP_GE: 
		case OP_LE:
		case OP_DIFF:
		case OP_EQUAL:
		case OP_OR:
		case OP_AND:
			translateBooleanOp(inst);
			break;
		case OP_IF:
			translateIf(inst);
			break;
		case OP_NOP:
			fprintf(output, "nop\n");
			break;
		case OP_GOTO:
			fprintf(output, "j %s\n", inst->result);
			break;
		}

		
		inst = inst->next;
	}
	
	return;
	
}

void translateAssign(Quadruples *inst)
{
	Symbol *result, *operand;
	int result_offset, operand_offset;
	int valued;
	float valuef;

	getSymbol(inst->result, &result);
	result_offset = result->loc;
	
	if(result->type == TYPE_INT || result->type == TYPE_CHAR)
	{
		if(isNumber(inst->arg1))
		{
			valued = (int) strtol(inst->arg1, (char **)NULL, 10);
			fprintf(output, "li $t0, %d\n", valued);
			fprintf(output, "sw $t0, %d($sp)\n", result_offset);
			
			return;
		}else
		{
			getSymbol(inst->arg1, &operand);
			operand_offset = operand->loc;

			fprintf(output, "lw $t0, %d($sp)\n", operand_offset);
			fprintf(output, "sw $t0, %d($sp)\n", result_offset);	
			
			return;
		}
	}else //float
	{
		if(isNumber(inst->arg1))
		{
			//Not implemented
			
			return;
		}else
		{
			getSymbol(inst->arg1, &operand);
			operand_offset = operand->loc;

			fprintf(output, "lwc1 $f0, %d($sp)\n", operand_offset);
			fprintf(output, "swc1 $f0, %d($sp)\n", result_offset);	
			
			return;
		}
	}
}

void translateBasicOp(Quadruples *inst)
{
	Symbol *result, *operand;
	int result_offset, operand_offset;
	int valued;
	float valuef;

	valued = getSymbol(inst->result, &result);
	result_offset = result->loc;

	if(result->type == TYPE_INT || result->type == TYPE_CHAR)
	{
		if(isNumber(inst->arg1))
		{
			valued = (int) strtol(inst->arg1, (char **)NULL, 10);
			fprintf(output, "li $t0, %d\n", valued);
		}
		else
		{
			getSymbol(inst->arg1, &operand);
			operand_offset = operand->loc;
			fprintf(output, "lw $t0, %d($sp)\n", operand_offset);
		}
		
		
		if(isNumber(inst->arg2))
		{
			valued = (int) strtol(inst->arg2, (char **)NULL, 10);
			fprintf(output, "li $t1, %d\n", valued);
		}else
		{
			getSymbol(inst->arg2, &operand);
			operand_offset = operand->loc;	
			fprintf(output, "lw $t1, %d($sp)\n", operand_offset);
		}	

		if(inst->op == OP_ADD)
			fprintf(output, "add $t0, $t0, $t1\n");
		else if(inst->op == OP_SUB)
			fprintf(output, "sub $t0, $t0, $t1\n");
		else if(inst->op == OP_MULT)
			fprintf(output, "mul $t0, $t0, $t1\n");
		else if(inst->op == OP_DIV)
			fprintf(output, "div $t0, $t0, $t1\n");
		else if(inst->op == OP_MOD)
		{
			fprintf(output, "div $t0, $t1\n");
			fprintf(output, "mfhi $t0\n");
		}				
		fprintf(output, "sw $t0, %d($sp)\n", result_offset);
		
	}else
	{
		//Not implemented
	}
}

void translateBooleanOp(Quadruples *inst)
{
	Symbol *result, *operand;
	int result_offset, operand_offset;
	int valued;
	float valuef;

	valued = getSymbol(inst->result, &result);
	result_offset = result->loc;

	if(result->type == TYPE_INT || result->type == TYPE_CHAR)
	{
		if(isNumber(inst->arg1))
		{
			valued = (int) strtol(inst->arg1, (char **)NULL, 10);
			fprintf(output, "li $t0, %d\n", valued);
		}
		else
		{
			getSymbol(inst->arg1, &operand);
			operand_offset = operand->loc;
			fprintf(output, "lw $t0, %d($sp)\n", operand_offset);
		}
		
		
		if(isNumber(inst->arg2))
		{
			valued = (int) strtol(inst->arg2, (char **)NULL, 10);
			fprintf(output, "li $t1, %d\n", valued);
		}else
		{
			getSymbol(inst->arg2, &operand);
			operand_offset = operand->loc;	
			fprintf(output, "lw $t1, %d($sp)\n", operand_offset);
		}	
			
		if(inst->op == OP_GT)
			fprintf(output, "sgt $t0, $t0, $t1\n");
		else if(inst->op == OP_LT)
			fprintf(output, "slt $t0, $t0, $t1\n");
		else if(inst->op == OP_GE)
			fprintf(output, "sge $t0, $t0, $t1\n");
		else if(inst->op == OP_LE)
			fprintf(output, "sle $t0, $t0, $t1\n");
		else if(inst->op == OP_DIFF)
			fprintf(output, "sne $t0, $t0, $t1\n");
		else if(inst->op == OP_EQUAL)
			fprintf(output, "seq $t0, $t0, $t1\n");
		else if(inst->op == OP_OR)
			fprintf(output, "or $t0, $t0, $t1\n");
		else if(inst->op == OP_AND)
			fprintf(output, "sle $t0, $t0, $t1\n");
				
		fprintf(output, "sw $t0, %d($sp)\n", result_offset);
		
	}else
	{
		//Not implemented
	}	
}

void translateIf(Quadruples *inst)
{
	Symbol *operand;
	int offset;
	int value;
	
	if(isNumber(inst->arg1))
	{
		value = (int) strtol(inst->arg2, (char **)NULL, 10);
		fprintf(output, "li $t0, %d\n", value);
		fprintf(output, "beq $t0, 0, %s\n", inst->result);
		
		return;
	}else
	{
		getSymbol(inst->arg1, &operand);
		offset = operand->loc;
		
		fprintf(output, "lw $t0, %d($sp)\n", offset);
		fprintf(output, "beq $t0, 0, %s\n", inst->result);
		
		return;
	}
}

void translateUnaryOp(Quadruples *inst)
{
	Symbol *result, *operand;
	int result_offset, operand_offset;
	int valued;
	float valuef;

	if(result->type == TYPE_INT || result->type == TYPE_CHAR)
	{
		if(isNumber(inst->arg1))
		{
			valued = (int) strtol(inst->arg1, (char **)NULL, 10);
			fprintf(output, "li $t0, %d\n", valued);
		}
		else
		{
			getSymbol(inst->arg1, &operand);
			operand_offset = operand->loc;
			fprintf(output, "lw $t0, %d($sp)\n", operand_offset);
		}
		
		if(inst->op == OP_NOT)
			fprintf(output, "seq $t0, $t0, 0\n");
		else if(inst->op == OP_MINUS)
			fprintf(output, "sub $t0, $zero, $t0\n");
		else if(inst->op == OP_INC)
		{
			
			fprintf(output, "sub $t0, $zero, $t0\n");
		}

		fprintf(output, "sw $t0, %d($sp)\n", result_offset);
	}else
	{
	//Not implemented	
	}
}




