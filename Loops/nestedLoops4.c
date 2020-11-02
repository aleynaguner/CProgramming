#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        if (i < 3)
        {
            printf(" ");
        }

        for (k = i; k >= 1; k--)
        {
            if (k < 5)
                printf("*");
        }

        printf("\n");
    }

    return 0;
}
