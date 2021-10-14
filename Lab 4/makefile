CC = gcc
CFLAGS = -std=c11 -Wall -Werror -Wextra -Wconversion -pedantic-errors -Wstrict-prototypes

SRC = q.c
OUT = main

all: build
	./main < input-00.txt > actual-output.txt
	./main < input-01.txt >> actual-output.txt
	./main < input-02.txt >> actual-output.txt
	./main < input-03.txt >> actual-output.txt
	./main < input-04.txt >> actual-output.txt
	./main < input-05.txt >> actual-output.txt
	./main < input-06.txt >> actual-output.txt
	./main < input-07.txt >> actual-output.txt
	./main < input-08.txt >> actual-output.txt
	./main < input-09.txt >> actual-output.txt
	diff actual-output.txt expected-output.txt

build: ${SRC}
	${CC} ${CFLAGS} -o ${OUT} ${SRC}
