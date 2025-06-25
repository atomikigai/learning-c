#include <stdio.h>

int main(void)
{

    // Find the largest number in a series of number
    // entered by the user.
    float value = 0, max = 0;
    for (;;)
    {
        printf("Enter a number: ");
        scanf("%f", &value);

        if (value <= 0)
        {
            printf("The largest number is: %.2f", max);
            break;
        }

        if (value > max)
            max = value;
    }

    return 0;
}