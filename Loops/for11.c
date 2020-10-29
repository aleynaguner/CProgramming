#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 0, j = 0, k = 0; i <= 5, j <= 4, k <= 3; i++, ++j, k += 2)
    {
        printf("i: %d j: %d k: %d i+j+k: %d\n", i , j , k , i + j + k);
    }

    return 0;
}