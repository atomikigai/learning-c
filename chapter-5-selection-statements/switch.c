#include <stdio.h>

int main(void)
{
    int grade = 4;

    // Usar switch es mas rapido que usar if en cascada
    // multiples if.
    switch (grade)
    {
    case 4:
        printf("Excellent\n");
        break;
    case 3:
        printf("Good\n");
        break;
    default:
        printf("Illegal grade\n");
        break;
    }

    // No existe manera de escribir casos que
    // evaluen un rango como en otros lenguajes
    // No es obligatorio colocar el default, si no
    // existe, se sigue.
    switch (grade)
    {
    case 4:
    case 3:
    case 2:
    case 1:
        printf("Passing");
        break;

    default:
        printf("Illegal grade");
        break;
    }

    return 0;
}