#include "symbolTable.h"

#define T_SIZE 53

List_node* hashTable[T_SIZE];

//Put symbol in the hashTable
void putSymbol(Symbol *symbol)
{
	//Finds index on array from hash function
	unsigned int index = hash(symbol->name) % T_SIZE;
	
	append(&(hashTable[index]), symbol);
}

//Return 0 if symbol was found, 1 otherwise
int getSymbol(char *name, Symbol **symbol)
{
	unsigned int index = hash(name) % T_SIZE;
	
	List_node *node = hashTable[index];
	
	while(node != NULL)
	{
		if(strcmp(node->name, name) == 0)
		{
			*symbol = (node->scopes->symbol);
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
		
		push(&(newNode->scopes), symbol); 
		
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
	/*
	Symbol scopeDelimiter;
	scopeDelimiter.name = "0_SCOPE";
	scopeDelimiter.type = -1;
	scopeDelimiter.loc = -1;
	scopeDelimiter.size = -1;
	*/
}

unsigned int hash(char *s0)
{
	unsigned int h=0;
	char *s;
	 
	for (s = s0; *s; s++)
		h = h*65599 + *s;
	
	return h;
}
