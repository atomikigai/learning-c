#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long)x;
    *frac_part = x - *int_part;
}

// usar const hace que n no sea modificable
// aunque la estoy pasando como puntero
void myprint(const int *n)
{
    printf("Imprimiendo n: %d \n", *n);
    printf("n no es modificable\n");
}

int main(void)
{
    long int i;
    double d;

    decompose(3.14159, &i, &d);

    printf("i = %lu, d = %g \n", i, d);

    int n = 20;
    myprint(&n);

    int z = 0, *p;
    p = &z; // p apunta a la direccion de memoria de i
    printf("Introduce un numero: ");
    scanf("%d", p);

    printf("Valor de p: %d", *p);
    printf("Valor de z: %d", z);

    return 0;
}