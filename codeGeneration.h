#include "semanticAnalysis.h"

void setInstructions(Quadruples *instructions_in);
void setSymbolTables(List_node *variablesTable_in[], 
						FuncList_node* functionsTable_in[]);
void setAssemblyFile(FILE *output_in);

void printMIPS(FILE *out);

void translateAssign(Quadruples *inst);
void translateBasicOp(Quadruples *inst);
void translateIf(Quadruples *inst);
void translateBooleanOp(Quadruples *inst);
void translateUnaryOp(Quadruples *inst);
