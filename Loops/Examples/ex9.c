#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j%2 == 0)
            {
                printf("*\t");
            }
            else
            {
                printf("A\t");
            }
        }
        printf("\n");
    }

    return 0;
}
