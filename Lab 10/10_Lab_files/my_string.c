#include "my_string.h"

size_t my_strlen(const char* str)
{
    if (str)
    {
        size_t index = 0;
        char c = str[index];

        while (c != '\0')
        {
            c = str[++index];
        }
        return index;
    }
    return 0;
}

char* my_strcpy(char* dest, const char* src)
{
    size_t index = 0;
    for (size_t i = 0; i < my_strlen(src); ++i)
    {
        dest[index] = src[index];
        ++index;
    }
    dest[index] = '\0';

    return dest;
}

char* my_strcat(char* dest, const char* src)
{
    size_t index = my_strlen(dest);
    my_strcpy(dest + index, src);
    return dest;
}

int my_strcmp(const char* lhs, const char* rhs)
{
    size_t lhs_length = my_strlen(lhs);
    size_t rhs_length = my_strlen(rhs);
    size_t length = (lhs_length > rhs_length) ? lhs_length  : rhs_length; 

    for (size_t i = 0; i < length; ++i)
    {
        if (lhs[i] != rhs[i])
        {
            return lhs[i] - rhs[i];
        }
    }
    return 0;
}

char* my_strstr(const char* str, const char* substr)
{
    size_t length = my_strlen(str);
    size_t substr_length = my_strlen(substr);

    for (size_t i = 0; i < length; ++i)
    {
        int found = 1;
        for (size_t j = 0; j < substr_length; ++j)
        {
            if ((i + j) > length)
            {
                return NULL;
            }

            if (substr[j] != str[i + j])
            {
                found = 0;
            }
        }

        if (found)
        {
            return (char*)(str + i);
        }
    }
    return NULL;
}