#include "utils.h"
#include <stdio.h>

int main()
{
    //size_t count = read_total_count();
    int a, b, c;
    read_3_numbers(&a, &b, &c);

    sort_3_numbers(&a, &b, &c);
    printf("Sorted: ");
    printf("%d, %d, %d\n", a, b, c);

    return 0;
}