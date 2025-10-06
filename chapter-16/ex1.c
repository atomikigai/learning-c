#include <stdio.h>
#include <string.h>

void get_key(char *str)
{
    char *s = str;
    printf("str: %s\n", s[0]);
}

int main(void)
{

    char *str = "{key: \"name\", value: \"Jostick Quiel\"}";
    int i = 0;

    get_key(str);
    return 0;
}