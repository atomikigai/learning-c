#include <stdio.h>

int main(void)
{

    int i = 1;
    while (i < 10)
    {
        i = i * 2;
        printf("the value i = %d \n", i);
    }

    i = 10;
    while (i > 0)
    {
        printf("T minus %d and counting \n", i);
        i--;
    }

    return 0;
}