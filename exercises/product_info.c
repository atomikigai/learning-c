#include <stdio.h>

int main(void)
{

    int item_number, d, m, y;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%02d/%02d/%d", &m, &d, &y);

    printf("Item\tUnit\tPurchase\n");
    printf("    \tPrice\tDate\n");
    printf("%d  \t$%.2f \t%d/%d/%d", item_number, unit_price, d, m, y);

    return 0;
}