#include <stdio.h>

int main()
{
    int i = 0;

    for (; i += 2, i < 6; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}