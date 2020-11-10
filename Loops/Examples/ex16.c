#include <stdio.h>

int main()
{
    int i, n, c, space, count = 1;

here:;
    printf("Enter the number of line for Star Pyramid : ");
    scanf("%d", &n);

    if (n > 20)
    {
        goto here;
    }

    space = n;

    for (i = 1; i <= n; i++)
    {
        for (c = 1; c < space; c++)
        {
            printf(" ");
        }

        for (c = 1; c <= i; c++)
        {
            printf("*");
            if (i > 1 && count < i)
            {
                printf("A");
                count++;
            }
        }

        printf("\n");
        space--;
        count = 1;
    }

    return 0;
}