#include <stdio.h>

int main(void)
{
    int i = 0, j = 0, k = 0;

    i = 1;
    // pre-increment
    printf("%d\n", ++i);

    i = 1;
    // post-increment
    printf("%d\n", i++);
    printf("%d\n", i);

    i = 1;
    printf("i is %d\n", --i);
    printf("i is %d\n", i);

    i = 1;
    printf("i is %d\n", i--);
    printf("i is %d\n", i);

    i = 1;
    j = 2;

    k = ++i + j++;
    printf("k is %d", k);

    return 0;
}