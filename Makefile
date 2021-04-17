OBJS =  main.o factorial.o hello.o
CFLAG = -Wall -g
BFLAG = --defines=token.h 
CC = gcc
INCLUDE =
LIBS = -lm
TESTFILE = simple.bm


bmc: expr.c parser.c scanner.c main.c token.h 
	${CC} ${CFLAGS} -o $@ expr.c scanner.c parser.c main.c 

parser.c: bminor.bison 
	bison ${BFLAG} -o $@ bminor.bison 

scanner.c: scanner.flex token.h
	flex -o $@ scanner.flex

test: bmc ${TESTFILE}
	./bmc ${TESTFILE}

clean:
	-rm -f *.o core *.core lex.yy.c scanner.c parser.c

