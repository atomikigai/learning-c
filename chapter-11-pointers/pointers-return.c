#include <stdio.h>

// La funcion con asterico dice que vamos a devolver
// un puntero
int *max(int *a, int *b)
{
    // Recuerda colocar astericos para
    // Comprobar los valores en memoria
    if (*a > *b)
    {
        return a; // devolvemos la direccion de la variable i
    }
    else
    {
        return b; // devolvemos la direccion e la varibale j
    }
}

int main(void)
{

    int *p, i = 5, j = 2;
    p = max(&i, &j);

    // Llamamos a *p para obtener entonces el valor de la direccion
    // obtenida
    printf("p = %d i = %d j = %d", *p, i, j);
    return 0;
}