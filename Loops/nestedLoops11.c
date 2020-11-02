#include <stdio.h>

int main()
{
    int i = 0, j;

    while (i < 10)
    {
        printf("\ni:%d\t\t ", i);
        j = 0;
        while (j <= 10)
        {
            printf("j:%d ", j);
            j++;
        }
        i++;
    }

    return 0;
}
