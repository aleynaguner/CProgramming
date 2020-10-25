#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c, r;

    for (c = 1; c <= 10; c++)
    {
        r = rand() % 100 + 1;
        printf("%d", r);

        if (r % 2 == 0)
        {
            printf(" is an even number \n");
        }
        else
        {
            printf(" is an odd number \n");
        }
    }

    return 0;
}