#include <stdio.h>

long factorial(int);

int main()
{
    int i, n, c, space;

here:;
    printf("Enter the number of Pascal Triangle : ");
    scanf("%d", &n);

    if (n > 20)
    {
        goto here;
    }

    space = n;

    for (i = 0; i < n; i++)
    {
        for (c = 1; c < space; c++)
        {
            printf(" ");
        }

        for (c = 0; c <= i; c++)
        {
            printf("%1d ", factorial(i) / (factorial(c) * factorial(i - c)));
        }

        printf("\n");
        space--;
    }

    return 0;
}

long factorial(int n)
{
    int c;
    long result = 1;

    for (c = 1; c <= n; c++)
    {
        result = result * c;
    }

    return result;
}