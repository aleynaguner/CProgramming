#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number\n");
    scanf("%d", &n);

    if (n % 2)
    {
        printf("%d is an even number ", n);
    }
    else
        printf("%d is an odd number ", n);

    return 0;
}