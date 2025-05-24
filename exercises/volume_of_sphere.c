#include <stdio.h>

#define PI 3.14159f // si no coloco la f se convierte en double precision

int main(void)
{

    // v = 4/3 * π * r^3
    float r;

    /**
     ** El compilador reserva 4 bytes en memoria, esto se ubica en algun lugar de la ram
     ** La variable r por sí sola representa el valor almacenado en esa celda.
     ** El operador & (“address-of”) toma una variable y devuelve la dirección de su celda de memoria.
     ** &r convierte tu variable r en un puntero float* que apunta a su propia celda.
     */

    printf("Enter the radius: ");
    scanf("%f", &r);

    float volume = (4.0f / 3.0f) * PI * (r * r * r);
    printf("Volume: %.2f", volume);

    return 0;
}