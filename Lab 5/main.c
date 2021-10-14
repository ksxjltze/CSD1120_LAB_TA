#include <stdio.h>
#include "calc.h"
#include "operation.h"
int main(void)
{
    printf("This program evaluates mathematical expressions.\n");
    /* TODO */

   unsigned char ops[6] = {'+', '-', '*', '/', '|', '%'};

    while (1)
    {
        float a, b;
        operation op;
        int count = scanf("%f%c%f", &a, &op, &b);

        if (count == 3)
        {
            unsigned char temp = op;
            for (int i = 0; i < 6; ++i)
            {
                if (op == ops[i])
                {
                    op = (unsigned char)(i + 1);
                }
            }

            printf("Operation: %d\n", op);

            if (temp == op)
                calculate(a, b, UNKNOWN);
            else
                calculate(a, b, op);
        }
        else if (count > 0 )
        {
            printf("Invalid number of arguments!\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF);
        }
        else
            break;
    }

    printf("Closing the program...\n");
    return 0;
}
