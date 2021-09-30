CC=gcc
CFLAGS=-pedantic-errors -Wstrict-prototypes -Wall -Werror -Wextra -std=c11

SRC = main3.c calc.c
SRC2 = main2.c calc.c

DEPS = calc.h

OBJ = main3.o calc.o
OBJ2 = main2.o calc.o

OUT = ex2

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

calc: $(OBJ)
	$(CC) -o $(OUT) $(CFLAGS) $(SRC)

clean: 
	$(RM) $(OUT) *.o *~

calc2: $(OBJ2)
	$(CC) -o $(OUT) $(CFLAGS) $(SRC2)