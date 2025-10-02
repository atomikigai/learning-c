#include <stdio.h>

#define DOUBLE(x) ((2) * (x))

int main(void)
{
    printf("DOUBLE(x) 2*x = %d\n", DOUBLE(1 + 2));
    printf("DOUBLE(x) 2*x = %d", 4 / DOUBLE(2));

    return 0;
}