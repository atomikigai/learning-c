#include <stdio.h>

int main(void)
{

    int i;
    char ch;

    // Un caracter al final representa un integer
    // En ASCII
    i = 'a';     /* i is now 97 */
    ch = 65;     /* ch is now 'A' */
    ch = ch + 1; /* ch is now 'B' */
    ch++;        /* ch is now 'C' */

    printf("CHAR: %d\n", 'a' * 'b' / 'c');

    char c, h;
    printf("%c \n %c", c, h);

    printf("Enter an integer: ");
    scanf("%d", &i);
    printf("Enter a command: ");
    int command = getchar();

    return 0;
}