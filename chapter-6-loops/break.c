#include <stdio.h>

int main(void)
{

    int n = 35, d;
    for (d = 2; d < n; d++)
    {
        if (n % d == 0)
            break;

        if (d < n)
        {
            printf("%d is divisible by %d\n", n, d);
        }
        else
        {
            printf("%d is prime \n", n);
        }
    }

    /* done:
        if (d < n)
        {
            printf("%d is divisible by %d\n", n, d);
        }
        else
        {
            printf("%d is prime \n", n);
        }

        for (d = 2; d < n; d++)
        {
            if (n % d == 0)
                goto done;
        } */

    int sum = 0, i;
    for (int n = 0; n < 10; n++)
    {
        scanf("%d", &i);
        if (i == 0)
            continue; // Basicamente salta al inicio del for
        sum += 1;
        printf("sum: %d", sum);
    }

    return 0;
}