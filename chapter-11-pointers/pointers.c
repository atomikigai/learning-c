#include <stdio.h>

int main(void)
{

    // el * significa esto apunta a
    int i = 1, j, *p, *q;

    // P apunta a la direccion en memoria de i
    p = &i;

    i = 2; // P va a imprimir 2 porque

    // Imprimiendo el valor de i no la direccion en memoria
    printf("%d\n", *p);

    *p = 2;

    printf("p:%d i:%d\n", *p, i);
    q = &j;
    *q = *p;
    printf("q = %d j = %d \n", *q, j);
}