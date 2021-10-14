#include "q.h"
#include <stdio.h>

#define MAX_STUDENT_COUNT 5
#define MAX_NUM_GRADES MAX_STUDENT_COUNT

int main(void)
{
    // fill grades with values
    int grades[MAX_NUM_GRADES];
    int count = read_ints_from_stdin(grades, MAX_STUDENT_COUNT);
    // print grades to standard output
    for (int i = 0; i < count; ++i) 
    {
        printf("%i: %i\n", i, grades[i]);
    }

    printf("Minimum: %d\n", minimum(grades, count));
    printf("Maximum: %d\n", maximum(grades, count));
    printf("Average: %d\n", average(grades, count));

    return 0;
}