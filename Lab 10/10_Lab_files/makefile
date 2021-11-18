CC = gcc
CFLAGS = -Wall -Werror -Wextra -Wconversion -pedantic-errors -std=c11

all: build
	./a.out


diff: test
	diff my_output.txt expected-output.txt

test: build
	./a.out > my_output.txt

build:
	${CC} q.c main.c