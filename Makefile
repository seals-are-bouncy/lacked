CC=/usr/bin/gcc
CFLAGS=-march=native -O2 -Wall -std=c11

OBJ=	main.o	\
		argss.o	\
		stack.o	\
		lexer.o	\
		util.o  \

all: ll

ll:	${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ll
.PHONY : ll

install:
	cp ll /usr/local/bin

clean:
	rm *.o
	rm ll

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@