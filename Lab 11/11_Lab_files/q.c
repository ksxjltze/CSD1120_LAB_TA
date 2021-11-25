#include <stdio.h>
#include <stddef.h>
#include "q.h"

void print_data(const void* ptr, size_t size, size_t span)
{
    for (size_t i = 0; i < size; ++i)
    {
        const char* data = (char*)ptr;
        printf("%x ", data[i]);

        if ((i + 1) % span == 0)
        {
            printf("   |   ");
            const char* data_ascii = ((char*)ptr) + (i / span) * span;
            for (size_t j = 0; j < span; ++j)
            {
                printf("%c ", data_ascii[j]);
            }
            printf("\n");
        }

    }
}