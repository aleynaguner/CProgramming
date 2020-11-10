#include <stdio.h>

int main()
{
    int i, n, c, space;

here:;
    printf("Enter the number of line for Star Pyramid : ");
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
            printf("* ");
        }

        printf("\n");
        space--;
    }

    return 0;
}