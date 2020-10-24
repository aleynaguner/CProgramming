#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter a number...\n");
    scanf("%d", &x);

    printf("Enter a number...\n");
    scanf("%d", &y);

    if (x > y)
    {
        printf(" %d is greater than %d ", x, y);
    }
    if (x < y)
    {
        printf(" %d is smaller than %d ", x, y);
    }
    if (x == y)
    {
        printf(" %d is equal to %d ", x, y);
    }

    return 0;
}