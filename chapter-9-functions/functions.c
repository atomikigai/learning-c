#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

void print_count(int n)
{
    printf("T minus %d and counting \n", n);
}

void hello_world(void)
{
    printf("Hello World!\n");
}

// function prototypes
double average(double a, double b);

int main(void)
{

    int a = 1, b = 2, res = 0;
    double x = 10, y = 5, z;

    res = sum(a, b);
    printf("%d + %d = %d \n", a, b, res);

    print_count(2);
    hello_world();

    printf("Average of %g and %g: %g\n", x, y, average(x, y));

    return 0;
}

double average(double a, double b)
{
    return (a + b) / 2;
}