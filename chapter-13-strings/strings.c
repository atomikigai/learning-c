#include <stdio.h>

#define STR_LEN 80

// El const quiere decir que no es modificable dentro de la funcion
int my_str_len(const char *s)
{
    int len = 0;
    while (*s != '\0')
    {
        len++;
        s++;
    }

    return len;
}

void my_reverse_str(const char *s)
{
    int len = my_str_len(s), i = 0;
    char new[len + 1];

    while (len > 0)
    {
        new[i] = s[len - 1];

        len--;
        i++;
    }

    new[i] = '\0';
    printf("reversed: %s", new);
}

int main(void)
{

    printf("lorem ipsum dolor sunega oregano hola by \
        --Jostick");

    // Los strings se almacenan en arreglos caracteres
    // y para determinar su final se da un valor null osea '\0'
    char *p;
    p = "abc";

    printf("\np = %c\n", *p++);
    printf("p = %c\n", *p);

    char ch;
    ch = "abc"[1];
    printf("ch = %c", ch);

    char *letter = "abc";
    //*letter = 'd'; // illegal no puedes modificar el valor

    char str[STR_LEN + 1];
    char date1[8] = "June 14"; // Si el arreglo es mas largos, los espacios en el final seran rellenado
    // por el compilador unsando '\0'

    // El compilador asigna en automatico el numero de caracteres
    // Mas el caracter null '\0'
    char date4[] = "June 14";

    // Esto es un error, siempre debes inciarlizar la variable
    // char *g; No sabemos donde apunta
    // p[0] = 'a';
    // p[1] = 'b';
    // p[2] = 'c';
    // p[3] = '\0';

    char *g = "hola"; // no modificar, peligro
    char q[] = "hola";
    char *l;

    l = q; //(&q[0]) significa esto recuerda
    // l = &q[0];
    // l = "Hola, Mundo";

    printf("\nLenght of string: %d\n", my_str_len("Hola"));
    my_reverse_str("Hola Mundo");
    return 0;
}