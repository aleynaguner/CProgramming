#include <stdio.h>

int main()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; i < j; j--)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}
