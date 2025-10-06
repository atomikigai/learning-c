#include <stdio.h>

enum suit
{
    CLUBS = 1,
    DIAMONDS = 2,
    HEARTS = 3,
    SPADES = 4
};

int main(void)
{

    enum suit s = SPADES;

    if (s == CLUBS)
    {
        printf("CLUBS");
    }
    else
    {
        printf("%d", s);
    }

    return 0;
}