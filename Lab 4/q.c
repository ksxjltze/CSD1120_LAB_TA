#include <stdio.h>

void print_line(int index, int cents, int value)
{
    // TODO: provide proper implementation later
    printf("print_line(%d, %d, %d)\n", index, cents, value);
}

void coins(int cents)
{
    // TODO: provide proper implementation later
    printf("coins(%d)\n", cents);
}

int main(void)
{
    int dollars = 0, cents = 0;
    int n_args = scanf("%d.%d", &dollars, &cents);

    if (n_args < 2)
    {
        printf("You did not type in the correct format in terms of dollars and cents.\n");
        return -1;
    }
    else if (dollars < 0)
    {
        printf("The dollars part specified must be non-negative.\n");
        return -1;
    }
    else if (cents < 0 || cents > 99)
    {
        printf("The cents part specified must be between 0...99 (inclusive).\n");
        return -1;
    }

    int total_cents = dollars * 100 + cents;

    printf("\n%d Dollars, %d Cents", dollars, cents);
    printf("\n%d Total Cents", total_cents);

    coins(total_cents);

    return 0;
}