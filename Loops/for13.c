#include <stdio.h>

int main()
{
    int j = 0;

    for (int i = 0; i <= 5; i++, ++j)
    {
        printf("i: %d  j: %d\n", i, j);
    }

    return 0;
}