#include <stdio.h>

int main()
{
    int i, j, sum;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum = i + j;
            printf("i = %d\tj = %d\tsum = %d\n", i, j, sum);
        }
    }

    return 0;
}
