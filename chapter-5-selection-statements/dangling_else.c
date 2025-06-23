#include <stdio.h>

int main(void)
{

    int x = 0, y = 0, result = 0;

    if (y != 0)
    {
        if (x != 0)
            result = x / y;
    }
    else
        printf("ERROR: y is 0");

    // por mas que coloque el else afuera, el if mas cercano toamara
    // ese else
    // A menos que uses {} llaves

    return 0;
}