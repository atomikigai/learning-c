#include <stdio.h>
#define N 10

int main(void)
{

    /* int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[1], *q = &a[5];

    printf("(a) *(p+3) = %d\n", *(p + 3));
    printf("(b) *(q-3) = %d\n", *(q - 3));
    printf("(c) q - p  = %ld\n", q - p);
    printf("(d) p < q  = %d\n", p < q);
    printf("(e) *p < *q = %d\n", *p < *q); */

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a[0], *q = &a[N - 1], temp;

    printf("p: %d\n", *p);

    // printf("p == a[0] = %d\n", p == a[0]); // Comparación entre un puntero y un integer
    printf("p == &a[0] = %d\n", p == &a[0]); //&a[0] sigue siendo la direccion en memoria
    printf("*p == &a[0] = %d\n", *p == a[0]);
    printf("p == &a[0] = %d", p[0] == a[0]); // Al usar p[0] significa *(p + 0) osea *p

    return 0;
}

// 1. El valor de *p es 14
// 2. El valor de *q es
// 3. El valor de q - p es -2
// 4. false
// 5. true