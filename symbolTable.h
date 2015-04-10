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
	char *name;
	types_t type;
	
	int loc;
	int size;
	
	SParam *params; 
}Symbol;

typedef struct 
{
	char *name;
	types_t type;
	
	int loc;
	SParam *param;
}FuncSymbol;


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

typedef struct FuncList_node
{
	FuncSymbol *symbol;
	struct FuncList_node *next;
}FuncList_node;	

unsigned int hash(char *s0);

void append(List_node **List_node, Symbol *symbol);
void push(Stack_node **Stack_node, Symbol *newSymbol);
void putSymbol(Symbol *symbol);
void putFuncSymbol(FuncSymbol *symbol);
int getSymbol(char *name, Symbol **symbol);
Symbol* createVarSymbol(char *name, types_t type, int size);
FuncSymbol* createFuncSymbol(char *name, types_t type);
void addParam(FuncSymbol **symbol, types_t type);
void printBinding();
