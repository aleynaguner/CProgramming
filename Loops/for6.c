#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0, j = 1, k = 2; i <= 4; i++)
    {
        printf("%d\n", i + j + k);
    }

    return 0;
}