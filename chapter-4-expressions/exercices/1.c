#include <stdio.h>

int main(void)
{

    int i = 0, j = 0;
    i = 5;
    j = 3;

    printf("%d %d\n", i / j, i % j);

    i = 2;
    j = 3;
    printf("%d\n", (i + 10) % j);

    return 0;
}