# Author: Jorge Luiz Andrade
# #0906139

CC 		= gcc
CFLAGS 	= -Wall -std=c99

all: flex bison compile

cflatc: flex bison compile

flex:	plex
		flex plex
		
bison:	pbison
		bison -d -y -v pbison
		
compile:	bison flex
			gcc -g lex.yy.c y.tab.c nodes.c toXml.c -o cflatc
