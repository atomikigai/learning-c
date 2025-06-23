#include <stdio.h>
#include <stdbool.h> //desde C99 se intrudjo el tipo bool

// Uso de booleanos en C, en versiones anteriores de C89 se usaba
// de esta manera
#define TRUE 1  // Directivas
#define FALSE 0 // Directivas

#define BOOL int // otra forma de declarar el tipo boolean

int main(void)
{
    int flag;
    flag = FALSE;

    if (flag == TRUE)
    {
        printf("FLAG IS FOUND \n");
    }
    else
    {
        printf("FLAG NOT FOUND \n");
    }

    if (!flag)
    {
        printf("FLAG NOT FOUND \n");
    }

    // Booleano de la libreria estandar
    bool isProgrammingFun = true;
    if (isProgrammingFun)
    {
        printf("IS PROGRAMMING FUN \n");
    }

    // Creando un tipo boolean
    BOOL havinFung = 1;
    if (havinFung)
    {
        printf("HAVING FUN\n");
    }

    // Otra forma de la liberia estandar de usar el tipo booleano
    _Bool other = true;

    printf("OTHER: %d", other);

    return 0;
}