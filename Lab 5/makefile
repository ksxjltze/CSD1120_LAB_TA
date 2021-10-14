CC = gcc
CFLAGS = -Wall -Werror -Wextra -Wconversion -Wstrict-prototypes -pedantic-errors -std=c11

haha: all
	./a.out < input.txt > out.txt

all: build
	${CC} ${CFLAGS} main.o calc.h calc.c

build: main.c
	gcc -Wall -Werror -Wextra -Wconversion -Wstrict-prototypes -pedantic-errors -std=c11 -c -o main.o main.c
