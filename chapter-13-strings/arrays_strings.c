#include <stdio.h>

int main(void)
{

    // La mejor manera de crear un arreglo de strings es creando un arrlego multidimensional
    // El problema es que se debe especificar un numero para de columnas
    // que es igual al numero de caracteres de nuestros strings o mayor, pero pasa que algunas
    // palabras son mas cortas como pera y C maneja eso con caracteres nullos haciendo que
    // desperdiciemos espacio
    char frutas[][8] = {"mango", "pera"};

    printf("Frutas: %s\n", frutas[0]);

    // Para solucionarlo podemos usar los punteros
    char *fruits[] = {"mango", "pera"};
    printf("Fruits: %s\n", fruits[0]);

    return 0;
}