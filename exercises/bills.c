#include <stdio.h>

int main(void)
{

    int b20, b10, b5, b1, current_amount = 93;

    b20 = (current_amount / 20);
    current_amount = current_amount - (b20 * 20); // 13

    b10 = (current_amount / 10);                  // 1
    current_amount = current_amount - (b10 * 10); // 13 - 10 = 3

    b5 = (current_amount / 5);                  // 0
    current_amount = current_amount - (b5 * 5); // 0

    b1 = (current_amount / 1);                  // 3
    current_amount = current_amount - (b1 * 1); // 3 - 3 = 0

    printf("$20 bills %d \n", b20);
    printf("$10 bills %d \n", b10);
    printf("$5 bills %d \n", b5);
    printf("$1 bills %d \n", b1);

    printf("amount: %d", current_amount);

    float x = 0.0f;
    printf("%f %d", x, b1);

    return 0;
}