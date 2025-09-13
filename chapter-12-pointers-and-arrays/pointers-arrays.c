#include <stdio.h>

int main(void)
{

    int a[10], *p, *q, i;
    p = &a[0]; // p apunta a la direccion del arreglo en la posicion 0

    *p = 1; // Asiganmos un valor a la poscion 0 del array

    printf("a[0] = %d\n", a[0]);

    // Suma de direcciones de punteros
    p = &a[2];
    q = p + 3; // q es igual a la direccion 5 del arreglo porque p estaba en la 2
    *q = 5;

    printf("a[5] = %d\n", a[5]);
    printf("q = %d\n", *q);

    // Resta de punteros
    p = &a[8];
    q = p - 3; // a[8 - 3] es igual a 5 me devuelve el valor almacenado en la posicion 5 del arreglo
    printf("q = %d\n", *q);

    return 0;
}