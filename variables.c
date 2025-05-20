#include <stdio.h>
// is a preprocessing directive, just as #include
// notice that we've used only upper-case letters in macro names
// this is a convention that most C programmers follow
#define INCHES_PER_POUND 166

int main(void)
{

    int heigth, length, width, volume, weight;
    float profit, loss;

    heigth = 8;
    length = 12;
    width = 10;

    volume = heigth * length * width;
    profit = 2150.48;

    printf("The value of the volume is: %d \n", volume);

    printf("Profit: %.2f\n", profit);

    // Supongamos que quieres el resultado entero de la division pero redondeando siempre hacia arriba
    //  funcion techo o (ceil)
    // Fórmula (a + b - 1) / b;
    weight = (volume + (166 - 1)) / 166; // in C when a integer is divided by another the anwser is truncated
    printf("Dimensions: %dx%dx%d\n", length, width, heigth);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    /**
     * * Some variables are automatically set to zero whe a program begins to execute
     * * access a uninitialized variable may yield an unpredictable result
     * * some compiles crash
     */

    /**
     *  * We reduce the numbers of variables
     * */
    printf("%d\n", heigth * length * width);

    // int i = 10;
    // scanf("enter a value: %d", &i);

    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;

    printf("NEW WEIGHT: %d", weight);

    return 0;
}