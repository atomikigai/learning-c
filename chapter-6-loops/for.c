#include <stdio.h>

int main(void)
{
    for (int i = 10; i > 0; i--)
        printf("T minus %d and counting \n", i);

    // Si quieres inicializar 2 variables
    // puedes escribir
    int n = 5;
    for (int sum = 0, i = 1; i <= n; i++)
    {
        sum += i;
    }

    n = 0;
    printf("This program printsa table of squares \n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
    }

    printf("\n\n");
    int i = 1, odd = 3;
    for (int square = 1; i <= n; odd += 2)
    {
        printf("%10d%10d\n", i, square);
        ++i;
        square += odd;
    }

    return 0;
}