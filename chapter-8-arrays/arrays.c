#include <stdio.h>

#define N (int)10
int main(void)
{

    int a[10];

    printf("Bytes: %lu\n", sizeof(a));

    a[0] = 1;
    printf("%d\n", a[0]);
    ++a[0];

    printf("%d\n", a[5]);

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        int sum = i + 1;
        printf("Enter a number in position: %d\n ", sum);
        arr[i] = sum;
    }

    int reversed[N];
    for (int i = N - 1, j = 0; i >= 0; --i, ++j)
    {
        printf("POSITION i: %d \t", j);
        reversed[j] = arr[i];
        printf("REVERSED: %d \n", reversed[j]);
    }

    for (int i = N - 1; i >= 0; --i)
    {
        printf(" %d", arr[i]);
        printf("\n");
    }

    int b[5] = {1, 2, 3, 4, 5};

    // Cuando el arreglo contiene menos valores
    // el resto se incializa en 0
    int x[10] = {1, 2, 3, 4, 5};

    // Haciendo esto puedo incializar las 10 posiciones
    // en 0
    int y[0] = {0};

    // Si el arreglo es incializado puedes omitir el tamaño
    // el compulador lo conocera debido a la incializacion
    int h[] = {1, 2, 3};

    // Con esto puedo decirle en que posicones voy
    // asignar los alores y el resto se inicializan en 0
    // el orden de la designacion no importa
    int g[15] = {[2] = 29, [9] = 7, [14] = 4};

    // Si no se especifica el tamaaño del arreglo
    // en este caso el compilador pensara que son 24 espacios
    int f[] = {[5] = 10, [23] = 13, [11] = 2};

    int j[10] = {5, 1, 9, [4] = 3, 7, 2};
    return 0;
}