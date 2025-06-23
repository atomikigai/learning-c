#include <stdio.h>

int main(void)
{

    int i, j, k;
    i = 1;
    j = 2;
    k = i > j ? i : j;
    printf("K: %d", k);

    return 0;
}