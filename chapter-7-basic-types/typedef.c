#include <stdio.h>

typedef int Bool;
#define true (int)1;
#define false (int)0;

int main(void)
{

    Bool flag = true;

    printf("sizeof: %zu\n", sizeof(float));

    if (flag)
    {
        printf("FOUND");
    }

    return 0;
}