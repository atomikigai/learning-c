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

    // Arrays
    int *a;
    // No inicializa en 0. Tenemos que inicializarlo manualmente.
    a = malloc(n * sizeof(int));

    // Esta funcion tambien puede asiganar memoria para un arreglo con n numeros
    //  de elementos, calloc incializa todo en 0.
    // Calloc limpia la memoria que asigna, pero malloc no
    a = calloc(n, sizeof(int));

    // Podemos asignar espacio a un objeto, pasando el argumento 1 podemos
    // asignar cualquier data item de cualquier tipo
    struct point
    {
        int x, y;
    } *x;

    x = calloc(1, sizeof(struct point));

    // realloc reasigna la cantidad de memoria sea mas grande o mas pequeña
    // cuando se reasigna la memoria, no se incializan los bloques agregados
    //  cuando no puede reasignar la memoria devuelve un null pointer, la data previa no es afectada
    //  cuando realloc es llamado con un null pointer en el primer argumento, funciona como malloc
    //  cuando realloc es llamado con un 0 en el segundo argumento, libera la memoria

    // malloc, calloc, realloc obtienen los bloques de memoria de un storage pool conocido como heap.
    // llamar estas funciones demasiado o pedirles un bloque demasiado largo de memoria puede desgastar
    // el heap causando que devuelva un null pointer

    //  1. Primero p y q asignaron un bloque de memoria
    //  2. despues q es asignado a p, ambos apuntan al segundo bloque de memoria
    //  3. No existen punteros al primer bloque de memoria, no lo podres volver a utilizar de nuevo.
    //  4. Un bloque de memoria que no es accesible se le llama garbage
    //  5. un programa que deja garbage tiene memory leak (fuga de memoria).
    //  p = malloc(...);
    //  q = malloc(...);
    //  p = q;

    // Alugnos lenguajes de programacion, tienen un garbage collector que automaticamente ubica y recicla la garbage.
    // Pero en C no existe, en su lugar C es responsable de reciclar su propia garbage usando la funcion free.
    // para liberar la memoria que no se necesita.

    //  p = malloc(...);
    //  q = malloc(...);
    // free(p);
    //  p = q;

    return 0;
}