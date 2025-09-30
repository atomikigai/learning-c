#include <stdio.h>

// Cada paremetro necesita sus propios parentesis
#define MAX(x, y) ((x) > (y) ? (x) : (y))
#define PRINT_INT(n) printf(#n " = %d\n", n)

int main(void)
{
    int i = 0, j = 1, x = 2, m = 20, n = 4, k = 5;

    i = MAX(j + k, m - n);
    printf("I: %d\n", i);

    PRINT_INT(2);

    return 0;
}