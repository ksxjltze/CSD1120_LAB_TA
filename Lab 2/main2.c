#include <stdio.h>
#include "calc.h"

int main(void) 
{
    int i = 2;
    
    printf("Square of %d is %d\n", i, sq(i));
    printf("Cube of %d is %f\n", i, cube(i));
    printf("Negation of %d is %f\n", i, minus(i));
    return 0;
}
