#define USE_STRING
#include "q.h"

const char* build_path(
	const char* parent,
	const char* separator,
	const char* const folders[],
	size_t count
)
{
    char* path = NULL;
    size_t length = STRLEN(parent);
    for (size_t i = 0; i < count; ++i)
    {
        length += STRLEN(folders[i]);
        length += STRLEN(separator);
    }

    path = debug_malloc(length + 1);
    path[length] = '\0';

    STRCPY(path, parent);
    for (size_t i = 0; i < count; ++i)
    {
        STRCAT(path, folders[i]);
        STRCAT(path, separator);
    }
    return path;
}

void compare_string(
	const char* lhs,
	const char* rhs
)
{
    int res = STRCMP(lhs, rhs);
    if (res == 0)
        printf("Both strings are equal.\n");
    else if (res > 0)
        printf("Right string goes first.\n");
    else
        printf("Left string goes first.\n");
}

void describe_string(
	const char* text
)
{
    if (text)
        printf("The length of the path \"%s\" is %zu.\n", text, STRLEN(text));
}

void find_string(
	const char* string,
	const char* substring
)
{
    printf("Searching for a string:\n");
    printf("\t%-10s%s\n", "Text:", string);
    printf("\t%-10s%s\n", "Sub-text:", substring);
    
    char* str = STRSTR(string, substring);
    printf("\t%-10s", "Result:");
    if (str)
    {
        printf("found %zu characters at a position %zu.\n", STRLEN(substring), STRLEN(string) - STRLEN(str));
    }
    else
        printf("not found\n");

}
