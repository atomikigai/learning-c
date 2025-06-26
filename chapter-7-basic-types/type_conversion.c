#include <stdio.h>

int main(void)
{
    // Esto se conoce como type promotion
    // Donde el compilador evalua los tipos a un tipo comun
    // antes de realizar la operacion, por eso observas
    // que todos los valores se pasaron a unsigned int
    char c;
    short int s;
    int i;
    unsigned int u;

    i = i + c;
    printf("i + c: %d\n", i); /* c is converted to int */
    i = i + s;
    printf("i + s: %d\n", i); /* s is converted to int */

    u = u + i;
    printf("u + i: %d\n", u); /* s is converted to int */

    return 0;
}