#include <stdio.h>

int main()
{
    int i, j;

    for (i = 'A'; i <= 'G'; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            printf("%c\t%d\t\t", i, j);
        }
        printf("\n");
    }

    return 0;
}
