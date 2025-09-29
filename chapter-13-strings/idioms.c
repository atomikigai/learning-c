#include <stdio.h>

void *my_strlen(const char *s1)
{

    // refactorizacion idomatica
    int p = 0;
    while (*s1++) // se suma la direccion en memoria de la variable
    {
        p++;
    }

    printf("p: %d", p);
}

int main(void)
{

    char *s1 = "hola", *s2 = "mundo";

    my_strlen(s1);

    return 0;
}