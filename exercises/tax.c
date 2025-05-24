#include <stdio.h>

int main(void)
{

    float amount = 0.0f;
    float amount_with_tax = 0.0f;

    printf("Enter a amount: ");
    scanf("%f", &amount);

    amount_with_tax = amount + (amount * 5) / 100;
    printf("With tax added: %.2f", amount_with_tax);

    return 0;
}