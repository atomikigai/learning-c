#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *b; // tomo el valor de b
    *b = *a;       // luego apunto a la direccion de b y le paso el valor de a
    *a = temp;     // aqui paso el valor de b a la direccion de a
}

int main(void)
{

    int num1 = 0, num2 = 0;

    printf("Ingresa un valor: \n");
    scanf("%d", &num1);

    printf("Ingresa un segundo valor: \n");
    scanf("%d", &num2);

    printf("Valores originales -> num1 = %d\n", num1);
    printf("Valores originales -> num2 = %d\n", num2);

    if (num1 == num2)
    {
        printf("num1 y num2 son iguales, no hay intercambio real\n");
        printf("Pero los procesaremos\n");
    }

    // Intercambia los valores
    swap(&num1, &num2);

    printf("Valor intercambiado -> num1 = %d\n", num1);
    printf("Valor intercambiado -> num2 = %d\n", num2);

    return 0;
}