#include <stdio.h>

int main(void)
{

    int m, d, y;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);

    printf("You entered the date %d%02d%d", y, m, d);

    // Si el usuario introduce 2 sin el 0 usando el formato %02d le decimos que es un entero
    // con un minimo de 2 caracteres, si el numero es un solo digito entonces le agrega el 0

    return 0; // finalizamos el programa
}