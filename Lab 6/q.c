#include "q.h"
#include <stdio.h>

int read_ints_from_stdin(int array[], int max_array_size)
{
    int i = 0, num;
    while (i < max_array_size && (scanf("%d", &num) != EOF)) 
    {
        array[i++] = num;
    }

    return i;
}

int minimum(int array[], int count)
{
    int min = array[0];
    for (int i = 1; i < count; ++i)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int maximum(int array[], int count)
{
    int max = array[0];
    for (int i = 1; i < count; ++i)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}

int average(int array[], int count)
{
    int sum = 0;
    for (int i = 0; i < count; ++i)
    {
        sum += array[i];
    }
    return sum / count;
}