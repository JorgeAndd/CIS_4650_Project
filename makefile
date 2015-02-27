#Author: Jorge Luiz Andrade

CC 		= gcc
CFLAGS 	= -Wall -std=c99

all: flex bison compile

flex:	plex
		flex plex
		
bison:	pbison
		bison -d -y -v pbison
		
compile:	flex bison
			gcc lex.yy.c y.tab.c -o test

