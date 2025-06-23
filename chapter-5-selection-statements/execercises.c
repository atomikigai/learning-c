#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    int i = 2, j = 3, k = 0;
    k = i * j == 6;
    // Primero se hace la multiplicacion y luego se aplica el operador
    // ternario por lo que me da 1 que quiere ser TRUE
    printf("%d \n", k);

    i = 5;
    j = 10;
    k = 1;
    printf("%d\n", k > i < j); // es invalido pero igual el compilador lo
    // procesa pero no da el resultado que podria esperarse
    i = 3;
    j = 2;
    k = 1;
    // Esto es verdadero porque ambos resultan en 0
    //  y 0 == 0 es verdadero = 1
    printf("%d\n", i < j == j < k);

    i = 10;
    j = 5;
    printf("%d\n", !i < j);

    i = 3;
    j = 4;
    k = 5;
    // Primero se evalua de izquierda a derecha
    // Resulta en verdadero
    printf("%d", i < j || ++j < k);

    int n = -9;
    // Por mas que n cambie, la ultima expresion sabe que 1 <= 10
    //  es verdadero
    if (n >= 1 <= 10)
        printf("n is between 1 and 10\n");

    if (n == 1 - 10)
        printf("n is between 1 and 10\n");

    i = -17;
    printf("%d\n", i >= 0 ? i : -i);

    bool tennager = false;
    int age = 13;
    if (age >= 13 && age <= 19)
        tennager = true;
    else
        tennager = false;

    printf("IS A TEENAGER? %d", tennager);

    int area_code = 404;
    printf("\n");
    switch (area_code)
    {
    case 404:
    case 470:
    case 770:
    case 678:
        printf("Atlanta");
        break;
    case 706:
    case 762:
        printf("Columbus");
        break;
    case 912:
        printf("Savannah");
        break;
    case 229:
        printf("Albany");
        break;
    case 478:
        printf("Macon");
        break;
    default:
        printf("Area code not recognized");
        break;
    }

    return 0;
}