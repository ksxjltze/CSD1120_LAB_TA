#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

size_t read_total_count(void)
{
    size_t count = 0;
    printf("Enter a number: ");
    scanf("%zu", &count);

    if (count < 3)
    {
        printf("ERROR\n");
        exit(1);
    }

    return count;
}

void read_3_numbers(int* first, int* second, int* third)
{
    *first = 0, *second = 0, *third = 0;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", first, second, third);
}

void swap(int* lhs, int* rhs)
{
    int temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;
}

void sort_3_numbers(int* first, int* second, int* third)
{
    if (*first < *third)
    {
        swap(first, third);
    }
    
    if (*second < *third)
    {
        swap(second, third);
    }


}

void maintain_3_largest(int number, int* first, int* second, int* third)
{
    if (number > *first)
    {
        *third = *second;
        *second = *first;
        *first = number;
    }
    else if (number > *second)
    {
        *third = *second;
        *second = number;
    }
    else if (number > *third)
    {
        *third = number;
    }
}