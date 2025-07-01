#include <stdio.h>

#define N (int)10
int main(void)
{

    int a[10];

    printf("Bytes: %lu\n", sizeof(a));

    a[0] = 1;
    printf("%d\n", a[0]);
    ++a[0];

    printf("%d\n", a[5]);

    int arr[N];
    for (int i = 0; i < N; ++i)
    {
        int sum = i + 1;
        printf("Enter a number in position: %d\n ", sum);
        arr[i] = sum;
    }

    int reversed[N];
    for (int i = N - 1, j = 0; i >= 0; --i, ++j)
    {
        printf("POSITION i: %d \t", j);
        reversed[j] = arr[i];
        printf("REVERSED: %d \n", reversed[j]);
    }

    return 0;
}