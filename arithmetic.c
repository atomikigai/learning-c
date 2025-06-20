// the operator % requires integer, if not the program won't compile.
// the operator / suprising results when both are integers truncate 1/2values i 0 not 0.5

#include <stdio.h>

int main(void)
{

    int i = +1;
    int j = -1;
    printf("%d\n", i);
    printf("%d\n", j);

    int x = 1 / 2;
    printf("%d\n", x);
    // El operador / usando enteros trunca el valor dando un resultado de 0 y no 0.5
    // printf("%f\n", 0 % 10.0); // El operador % solo sirve con enteros
    // Usando 0 con / o % provoca un undefined behavior

    printf("%d\n", -9 / 7);
    printf("%d\n", -9 % 7); // Esto puede resultar en -2 o 5 depediendo la version de C
    // En C99 el valor de -9 / 7 da como resultado 1
    // y el valor de i % j tiene el mismo signo que i -9 % 7 = -2

    // implementation-defined behavior
    // Es la definicion de lo que sucede arriba, ya que cierto hardware trabaja de diferente manera
    // Lo mejor evitar escribir programas que dependan del implementation-defined behavior

    return 0;
}