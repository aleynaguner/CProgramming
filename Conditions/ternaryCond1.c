#include <stdio.h>

int main()
{
    int a = 5, b, min;

    b = (3 > 2) ? (3 > a) : (3 < a);

    printf("%d\n", (3 > a));
    printf("%d\n", b);

    if (3 > 2)
    {
        b = (3 > a);
    }
    else
    {
        b = (3 < a);
    }

    return 0;
}