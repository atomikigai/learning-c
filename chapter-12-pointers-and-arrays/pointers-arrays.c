#include <stdio.h>

#define N 10

void array_sum_pointers()
{
    int a[N], sum, *p;
    sum = 0;

    // Cuando asiganas p sin * recuerda que es para asignar la direccion en memoria
    // por eso tambien tienes p < a[N] porque puedes comparar includo la direccion en memoria
    for (p = &a[0]; p < &a[N]; p++)
    {
        sum += *p;
        printf("sum: %d\n", sum);
    }
}

void pointer_array_name()
{
    int a[10];
    *a = 7; // guardar 7 en a[0]
    printf("a: \n", a[0]);

    *(a + 1) = 12; // guarda 12 en a[1]
    printf("a: \n", a[1]);
}

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

    // Restando un puntero con otro
    // cuando un puntero es restado de otro, el resultado es la distancia
    // lo que se resta es las posiciones 5 - 1
    p = &a[5];
    q = &a[1];

    i = p - q;
    printf("i = p - q: %d\n", i);

    // Hacer una operacion en un puntero que no apunta a nigun elemento en el arreglo
    // causa un error undefined behavior.

    // El efecto de restar un puntero de otro es undefined, a menos que ambos elementos sean
    // del mismo arreglo
    i = q - p;
    printf("i = p - q: %d", i);

    // Soluciones rapidas
    int *l = (int[]){3, 0, 3, 4, 1}; // Nos salva de tener que crear primero el arreglo para luego hacer un puntero sobre el arreglo

    int x[] = {3, 0, 3, 4, 1};
    int *g = &x[0];

    array_sum_pointers();

    printf("*p++ : %d\n", *(p++));
    printf("*p++ : %d", p);

    pointer_array_name();

    return 0;
}
