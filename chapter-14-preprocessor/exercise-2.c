#include <stdio.h>

// Con esta formula puedo calcular el tamaño del array
#define NELEMS(a) (sizeof(a) / sizeof(a[0]))

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};

    printf("SIZEOF: %d / %d\n", sizeof(arr), sizeof(arr[0]));

    printf("SIZEOF: %d\n", NELEMS(arr));
    return 0;
}