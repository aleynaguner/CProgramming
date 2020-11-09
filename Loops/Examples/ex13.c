#include <stdio.h>

int main()
{
    int i, n;

here:;
    printf("Enter a number which is smaller than 100 : ");
    scanf("%d", &n);

    if (n > 100)
    {
        goto here;
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 10 == 3 || i / 10 == 3)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}