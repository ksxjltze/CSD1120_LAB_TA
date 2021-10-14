#include <stdio.h>
#include "calc.h"

void calculate(float x, float y, operation op)
{   
    switch (op)
    {
    case ADDITION:
        printf("\t%f\n", x + y);
        break;

    case SUBTRACTION:
        printf("\t%f\n", x - y);
        break;

    case MULTIPLICATION:
        printf("\t%f\n", x * y);
        break;

    case DIVISION:
        if ((int)y == 0)
        {
            printf("Division by 0!");
            break;
        }
        printf("\t%f\n", x / y);
        break;

    case DIVISION_INTEGERS:
        if ((int)y == 0)
        {
            printf("Division by 0!");
            break;
        }
        printf("\t%f\n", (float)((int)x / (int)y));
        break;

    case MODULUS:
        if ((int)y == 0)
        {
            printf("Division by 0!");
            break;
        }
        printf("\t%f\n", (float)((int)x % (int)y));
        break;

    case UNKNOWN:
        printf("\tUnknown operation selected!\n");
        break;
    default:
        break;
    }
}