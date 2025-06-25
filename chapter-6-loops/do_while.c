#include <stdio.h>

int main(void)
{

    int n = 0, digits = 0;

    do
    {
        n /= 10;
        digits++;
    } while (n > 0);

    printf("Numbers of digits: %d \n", digits);

    n = 0, digits = 0;
    while (n > 0)
    {
        n /= 10;
        digits++;
    }

    printf("Numbers of digits: %d \n", digits);

    return 0;
}