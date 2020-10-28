#include <stdio.h>

int main()
{
    int n = 100;
    int sum = 0;

    while (n >= 0)
    {
        sum += n;
        n -= 3;
    }

    printf("%d\n", sum);

    return 0;
}