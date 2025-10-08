#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *concat(const char *s1, const char *s2)
{
    char *result;

    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL)
    {
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(void)
{

    int n = 3;
    char *p;

    // Dynamic Storage Allocation in String
    p = (char *)malloc(n + 1);
    strcpy(p, "abc");

    printf("%s\n", p);
    printf("%d\n", sizeof(p));

    printf("concat result: %s", concat("Hola", "Mundo"));

    return 0;
}