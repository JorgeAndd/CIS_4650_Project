#include "symbolTable.h"

List_node* variablesTable[T_SIZE];
FuncList_node* functionsTable[T_SIZE];

int nextFrameFree = 0;

Symbol* createVarSymbol(char *name, types_t type, int size)
{
	Symbol *newSymbol = malloc(sizeof(Symbol));
	
	newSymbol->name = name;
	newSymbol->type = type;
	newSymbol->size = size;
	
	return newSymbol;
}

FuncSymbol* createFuncSymbol(char *name, types_t type)
{
	FuncSymbol *newSymbol = malloc(sizeof(FuncSymbol));
	
	newSymbol->name = name;
	newSymbol->type = type;
	newSymbol->param = NULL;
	
	return newSymbol;
}

void addParam(FuncSymbol **symbol, types_t type)
{
	if((*symbol)->param == NULL)
	{
		SParam *newParam = malloc(sizeof(SParam));
		
		newParam->type = type;
		newParam->next = NULL;
		
		(*symbol)->param = newParam;
		
		return;
	}
	
	SParam *newParam = malloc(sizeof(SParam));
		
	newParam->type = type;
	newParam->next = NULL;
	
	SParam *aux = (*symbol)->param;
	while(aux->next != NULL)
		aux = aux->next;
		
	aux->next = newParam;
	
	return;
}

void putFuncSymbol(FuncSymbol *symbol)
{
	//Finds index on array from hash function
	unsigned int index = hash(symbol->name) % T_SIZE;
	
	FuncList_node *node = functionsTable[index];
	
	if(node == NULL)
	{
		FuncList_node *newNode = malloc(sizeof(FuncList_node));
		
		newNode->symbol = symbol;
		newNode->next = NULL;
		
		functionsTable[index] = newNode;
		
		return;
	}
	
	while(node->next != NULL)
		node = node->next;
		
	FuncList_node *newNode = malloc(sizeof(FuncList_node));
		
	newNode->symbol = symbol;
	newNode->next = NULL;
	node->next = newNode;
	
	return;
}

//Put symbol in the variablesTable
void putSymbol(Symbol *symbol)
{
	//Finds index on array from hash function
	unsigned int index = hash(symbol->name) % T_SIZE;
	
	symbol->loc = nextFrameFree;
	nextFrameFree += symbol->size;
	
	append(&(variablesTable[index]), symbol);
}

int getFuncSymbol(char *name, FuncSymbol **symbol)
{
	unsigned int index = hash(name) % T_SIZE;
	
	FuncList_node *node = functionsTable[index];
	
	if(node != NULL)
	{
		if(strcmp(node->symbol->name, name) == 0)
		{
			*symbol = node->symbol;
			
			return 0;
		}
		
		node = node->next;
	}
	
	return 1;
}

//Return 0 if symbol was found, 1 otherwise
int getSymbol(char *name, Symbol **symbol)
{
	unsigned int index = hash(name) % T_SIZE;
	
	List_node *node = variablesTable[index];
	Stack_node *snode = NULL;
	
	while(node != NULL)
	{
		if(strcmp(node->name, name) == 0)
		{
			snode = node->scopes;
			while(snode && snode->symbol->type == -1)
				snode = snode->prev;
			
			if(snode == NULL)
				return 1;

			*symbol = snode->symbol;
			
			return 0;
		}
		
		node = node->next;
	}
	
	return 1;
}

void append(List_node **list, Symbol *symbol)
{
	//Base case of empty list
	if(*list == NULL)
	{	
		List_node *newNode = malloc(sizeof(List_node));
		
		newNode->name = symbol->name;
		newNode->scopes = malloc(sizeof(Stack_node));
		newNode->next = NULL;
		
		newNode->scopes->symbol = symbol;
		newNode->scopes->prev = NULL;
		
		//push(&(newNode->scopes), symbol); 
		
		*list = newNode;
			
		return;
	}

	List_node *aux = *list;

	//Check if list contains symbol
	do
	{	
		if(strcmp(aux->name, symbol->name) == 0)
		{
			push(&(aux->scopes), symbol); 
			return;
		}
		
		if(aux->next != NULL)
			aux = aux->next;
	}while(aux->next != NULL);
	
	List_node *newNode = malloc(sizeof(List_node));
	newNode->name = symbol->name;
	newNode->scopes = malloc(sizeof(Stack_node));
	newNode->next = NULL;
		
	push(&(newNode->scopes), symbol); 
	
	aux->next = newNode;
	
	return;
}

void push(Stack_node **top, Symbol *newSymbol)
{
	Stack_node *newNode = malloc(sizeof(Stack_node));
	
	newNode->symbol = newSymbol;
	newNode->prev = *top;
	
	*top = newNode;
}

Symbol* pop(Stack_node **top)
{
	if(*top == NULL)
		return NULL;
	
	Symbol *symbol = (*top)->symbol;
	Stack_node *popped = *top;
	*top = popped->prev;

	free(popped);
	
	return symbol;
}

void enterScope()
{
	int i;
	Symbol *scopeDelimiter = malloc(sizeof(Symbol));
	scopeDelimiter->name = "0_SCOPE";
	scopeDelimiter->type = -1;
	scopeDelimiter->loc = -1;
	scopeDelimiter->size = -1;
	
	for(i = 0; i < T_SIZE; i++)
	{
		List_node *node = variablesTable[i];
		
		while(node != NULL)
		{
			push(&(node->scopes), scopeDelimiter);
			node = node->next;
		}
	}
}

void leaveScope()
{
	int i;
	
	for(i = 0; i < T_SIZE; i++)
	{
		List_node *node = variablesTable[i];
		
		while(node != NULL)
		{			
			Stack_node *snode = node->scopes;
			Symbol *symbol;
		
			symbol = pop(&snode);
			if(snode && symbol->type == -1)
				symbol = pop(&snode);

			node->scopes = snode;							
			node = node->next;
		}
	}
}

void finishSymbolTable()
{
	setSymbolTables(variablesTable, functionsTable);
}

void printBinding()
{
	int i;
	
	
	for(i = 0; i < T_SIZE; i++)
	{
		List_node *node = variablesTable[i];
		while(node != NULL)
		{
			printf("%s : ", node->name);
			Stack_node *snode = node->scopes;
			while(snode != NULL)
			{
				Symbol *symbol = snode->symbol;
				if(symbol)
					printf("type: %d -> ", symbol->type);
				snode = snode->prev;
			}	
			printf("\n");
			
			node = node->next;
		}
	}
	
	printf("Functions:\n");
	for(i = 0; i < T_SIZE; i++)
	{
		FuncList_node *node = functionsTable[i];
		while(node != NULL)
		{
			printf("%s : ", node->symbol->name);
			
			SParam *param = node->symbol->param;
			while(param != NULL)
			{
				printf("%d  ", param->type);
				param = param->next;
			}
			printf("\n");
			
			node = node->next;
		}
	}
}

unsigned int hash(char *s0)
{
	unsigned int h=0;
	char *s;
	 
	for (s = s0; *s; s++)
		h = h*65599 + *s;
	
	return h;
}
