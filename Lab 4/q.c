#include <stdio.h>

/*

*/
void print_line(int index, int cents, int value)
{
    if (cents > 100)
        printf("| %-3d|%10d.00 |%6d |\n", index, cents / 100, value);
    else
        printf("| %-3d|%13.2f |%6d |\n", index, (float)cents / 100, value);
}

void print_line_2(int index, int cents, int value)
{
    int breakdown = cents / value;

    if (value > 100)
        printf("| %-3d|%10d.00 |%6d |\n", index, value / 100, breakdown);
    else
        printf("| %-3d|%13.2f |%6d |\n", index, (float)value / 100, breakdown);
}

void coins(int cents)
{
    int method = 1;
    int denominations[11] = {10000, 5000, 1000, 500, 200, 100, 50, 20, 10, 5, 1};

    switch (method)
    {
    case 0:
        {
            int hundreds = cents / 10000;
            cents %= 10000;

            int fifties = cents / 5000;
            cents %= 5000;

            int tens = cents / 1000;
            cents %= 1000;

            int fives = cents / 500;
            cents %= 500;

            int twos = cents / 200;
            cents %= 200;

            int ones = cents / 100;
            cents %= 100;

            int halves = cents / 50;
            cents %= 50;

            int fifths = cents / 20;
            cents %= 20;

            int tenths = cents / 10;
            cents %= 10;

            int five_cents = cents / 5;
            cents %= 5;

            printf("+----+--------------+-------+\n");
            printf("| #  | Denomination | Count |\n");
            printf("+----+--------------+-------+\n");

            print_line(1, 10000, hundreds);
            print_line(2, 5000, fifties);
            print_line(3, 1000, tens);
            print_line(4, 500, fives);
            print_line(5, 200, twos);
            print_line(6, 100, ones);
            print_line(7, 50, halves);
            print_line(8, 20, fifths);
            print_line(9, 10, tenths);
            print_line(10, 5, five_cents);
            print_line(11, 1, cents);
            printf("+----+--------------+-------+\n");
            
        }
        break;
    case 1:
        printf("+----+--------------+-------+\n");
        printf("| #  | Denomination | Count |\n");
        printf("+----+--------------+-------+\n");

        for (int i = 0; i < 11; ++i)
        {
            print_line_2(i + 1, cents, denominations[i]);
            cents %= denominations[i];
        }

        printf("+----+--------------+-------+\n");
        break;
    case 2:
        break;
    
    default:
        break;
    }
}

int main(void)
{
    int dollars = 0, cents = 0;
    printf("Please enter total value: ");
    int n_args = scanf("%d.%d", &dollars, &cents);

    if (n_args < 2)
    {
        printf("You did not type in the correct format in terms of dollars and cents.\n");
        return 0;
    }
    else if (dollars < 0)
    {
        printf("The dollars part specified must be non-negative.\n");
        return 0;
    }
    else if (cents < 0 || cents > 99)
    {
        printf("The cents part specified must be between 0...99 (inclusive).\n");
        return 0;
    }

    int total_cents = dollars * 100 + cents;
    printf("\n");
    coins(total_cents);

    return 0;
}