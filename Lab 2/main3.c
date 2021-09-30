#include <stdio.h>
#include "calc.h"

#include <stdlib.h>

int main(int argc, char* argv[]) 
{
    int i = 2;
    
    if (argc > 0)
        i = atoi(argv[1]);
    
    printf("Square of %d is %d\n", i, sq(i));
    printf("Cube of %d is %f\n", i, cube(i));
    printf("Negation of %d is %f\n", i, minus(i));
    return 0;
}
