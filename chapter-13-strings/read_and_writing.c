#include <stdio.h>

#define SENT_LEN 0

int main(void)
{

    char str[] = "Are we having fun yet?";
    printf("%.6s\n", str);

    char sentence[SENT_LEN + 1];
    printf("Enter a sentence:\n");
    // solo almacena hasta encontrar un espacio en blanco
    scanf("%s", sentence);
    printf("sentence: %s", sentence);

    //  no skipea los espacios en blanco al inicio
    // gets(sentence);
    // printf("sentence: %s", sentence);

    // scanf y gets son peligrosos e insuficientemente
    // flexibles para muchas aplicaciones

    // No se puede copiar un string usando =
    // char str1[10], str2[10];
    // str1 = "abc"; // MAL
    // str2 = str;   // MAL

    return 0;
}