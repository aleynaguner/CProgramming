#include <stdio.h>

int findSquare(int x);

int main()
{
    int n;

    printf("enter number : \n");
    scanf("%d", &n);
    printf("square of %d is %d", n, findSquare(n));

    return 0;
}

int findSquare(int x)
{
    int y;
    y = x * x;
    return y;
}