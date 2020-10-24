#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number : \n");
    scanf("%d", &n);

    if (n % 3 == 0)
        printf("%d can divide by 3", n);
    else if (n % 2 == 0)
        printf("%d is an even number, can not divide by 3", n);
    else
        printf("%d is an odd number, can not divide by 3", n);

    return 0;
}