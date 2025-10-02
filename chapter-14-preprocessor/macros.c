#include <stdio.h>

// Cada paremetro necesita sus propios parentesis
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define PRINT_INT(n) printf(#n " = %d\n", n)
#define CREAR_VARIABLE_CONTADOR(id) int contador_##id = 0

int main(void)
{
    int i = 0, j = 1, x = 2, m = 20, n = 4, k = 5;

    i = MAX(j + k, m - n);
    printf("I: %d\n", i);

    PRINT_INT(2);

    // En el main:
    CREAR_VARIABLE_CONTADOR(clientes);  // Se expande a: int contador_clientes = 0;
    CREAR_VARIABLE_CONTADOR(productos); // Se expande a: int contador_productos = 0;

    contador_clientes = 25;
    contador_productos++;

    printf("clientes: %d\n", contador_clientes);
    printf("productos: %d\n", contador_productos);

    return 0;
}