#include <stdio.h>

int main(void)
{
    int i, j;
    float x;

    scanf("%d%f%d", &i, &x, &j);

    printf("%d\n", i);
    printf("%f\n", x);
    printf("%d\n", j);

    // input del usuari -> 10.3 5 6

    return 0;
}

// El valor de i = 10 porque es un entero
// El valor de x = 0.30 porque es un flotante entonces scanf reconocio que habia un punto
// y se lo asigno a x por ser float debido a que la i se mercaba como un entero y los enteros no tienen .

// El valor de la j = 5 porque al tomar el 0.30 el que continuaba era el valor 5
// por lo que el valor 6 se perdio