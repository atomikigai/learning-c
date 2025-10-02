#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMINDER(n) ((n) % (4))
#define CONDITIONAL(x, y) (x < y) ? 1 : 0

int main(void)
{

    printf("The cube of x: %d\n", CUBE(3));
    printf("The remainder when n is divided by 4: %d\n", REMINDER(15));
    printf("Conditional: %d\n", CONDITIONAL(25, 10));

    return 0;
}