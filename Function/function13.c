#include <stdio.h>

int a = 1, b = 2;

int sum()
{
    return a + b;
}

int main()
{
    int x = 4, y = 8;

    int result = sum();

    printf("%d is sum of two\n", result);

    return 0;
}