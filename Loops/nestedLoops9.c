#include <stdio.h>

int main()
{
    int count = 1;
    int a;

abc:;

    printf("\n%d", count);
    count++;

    printf("\n%d", a);
    a++;

    if (count < 10)
        goto abc;

    return 0;
}
