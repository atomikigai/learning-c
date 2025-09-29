#include <stdio.h>
#include <string.h>

// argc argument count es el numero de argumentos de la terminal
// incluyendo el nombre del programa.

// argv agument vector es un arreglo de punteros a la linea de comandos
// los cuales almacenan un string
//  argv[0] apunta al nombre del programa
//  argv[1] argv[argc - 1] apuntan al resto de argumentos
// este tiene siempre un elemento adicional que es un puntero null null-pointer

#define NUM_PLANETS (int)3

int main(int argc, char *argv[])
{

    const char *planets[] = {"Mercury", "Mars", "Venus"};

    int i, j;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            if (strcmp(argv[i], planets[j]) == 0)
            {
                printf("%s is planet %d", argv[i], j + 1);
                break;
            }
        }

        if (j == NUM_PLANETS)
        {
            printf("%s is not a planet \n", argv[1]);
        }
    }

    return 0;
}