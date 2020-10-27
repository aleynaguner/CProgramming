#include <stdio.h>

int main()
{
    int a, b, min;

    printf("Enter two number : \n");
    scanf("%d %d", &a, &b);

    min = a < b ? a : b;

    printf("%d is smaller\n", min);

    printf("%d\n", (3 > 5));
    printf("%d\n", (1 && 1));
    printf("%d\n", (1 && 23));
    printf("%d\n", (1 || 1));
    printf("%d\n", (1 || 38));

    return 0;
}