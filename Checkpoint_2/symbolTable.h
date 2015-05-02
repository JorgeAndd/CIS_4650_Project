#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "nodes.h"

#pragma once

typedef struct SParam
{
	types_t type;
	struct SParam *next;
}SParam;

typedef struct
{
	enum { VAR, FUNC } kind;
	
	char *name;
	types_t type;
	
	//int loc;
	int size;
	
	SParam *params; 
}Symbol;

Symbol* createVarSymbol(char *name, types_t type, int size);
Symbol* createFuncSymbol(char *name, types_t type, int size);
void addParam(Symbol **symbol, types_t type);

typedef struct Stack_node
{
	Symbol *symbol;
	struct Stack_node *prev;
}Stack_node;

typedef struct List_node
{
	char *name;
	Stack_node *scopes;
	struct List_node *next;
}List_node;

void append(List_node **List_node, Symbol *symbol);
void push(Stack_node **Stack_node, Symbol *newSymbol);
unsigned int hash(char *s0);
