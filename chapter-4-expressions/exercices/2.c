#include <stdio.h>

int main(void)
{

    int i = 0, j = 0;

    i = 1;
    j = 2;

    printf("%d\n", (-i) / j); // -0.5 = 0
    printf("%d\n", -(i / j)); // 1/2 = 0 = -(0) = 0

    // Si el resultado es positivo, se trunca hacia abajo 3/2 = 1
    // Si el resultado es negativo, se trunca hacia arriba -3/2 = -1

    return 0;
}