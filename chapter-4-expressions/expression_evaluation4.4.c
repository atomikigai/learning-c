#include <stdio.h>

int main(void)
{

    // undefined behaviaor
    // No asignes valores cuando estas ejecutando operaciones
    // c = (b = a + 2) - (a = 1);

    int i = 0;
    i++;

    i + 2; // Aqui no pasa nada porque no se asigna
    printf("i is %d", i);
    return 0;
}