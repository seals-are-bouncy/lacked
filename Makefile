CC=/usr/bin/gcc
CFLAGS=-march=native -O2 -Wall

all: ll

ll:
	${CC}	${CFLAGS} main.c -c -o main.o
	${CC}	${CFLAGS} argss.c -c -o argss.o
	${CC}	${CFLAGS} function.c -c -o function.o
	${CC}	${CFLAGS} lexer.c -c -o lexer.o
	${CC}	${CFLAGS} main.o argss.o function.o lexer.o -o ll
.PHONY : ll

install:
	cp ll /usr/local/bin

clean:
	rm *.o
	rm ll
