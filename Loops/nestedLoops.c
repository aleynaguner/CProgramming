#include <stdio.h>

int main()
{
    int i, j;

    for (i = 2; i < 100; i++)
    {
        for (j = 2; j <= (i/j); j++)
        {
            if (i % j == 0)
                break;
        }
        if(j > (i/j))
            printf("%d is prime number\n", i);
    }

    return 0;
}
