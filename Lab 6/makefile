CC = gcc
CFLAGS = -std=c11 -pedantic-errors -Wall -Wextra -Wstrict-prototypes -Werror

run: build
	./q.exe

build: q.c
	${CC} ${CFLAGS} q.c qdriver.c -o q.exe
