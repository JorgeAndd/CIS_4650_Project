#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#include "nodes.h"

typedef struct
{
	enum { VAR, FUNC } kind;
	
	union
	{
		struct { } var_symbol;
		struct { } func_symbol; //To be defined
	} u;
	
	char *name;
	types_t type;
	
	//int loc;
	int size;
}Symbol;

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
