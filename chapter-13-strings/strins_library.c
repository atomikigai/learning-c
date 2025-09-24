#include <stdio.h>
#include <string.h>

int main(void)
{

    char *str1, *str2;

    str1 = "abc";
    str2 = str1;

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    char str3[] = "ABC", str4[5];

    // No estoy copiando el null character
    // por eso al final debo darselo porque si no
    // provoca errores
    strncpy(str4, str3, sizeof(str3) - 1);
    str4[sizeof(str4) - 1] = '\0';

    printf("str3: %s\n", str3);
    printf("str4: %s\n", str4);

    int len = strlen(str4);
    printf("len: %d\n", len);

    char str5[] = "ABC";
    // Si el tamano no alcanza para anidar el texto entonces sera undefined
    // strcat(str1, "def");
    strcat(str5, str2);
    printf("str5: %s", str5);

    return 0;
}