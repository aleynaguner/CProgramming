#include <stdio.h>

int biggest(int a, int b, int c)
{
    int max;
    max = (a > b && a > c ? a : b > c ? b : c);
    return max;
}

int main()
{
    int x, y, z;

    printf("enter three number for find biggest : \n");
    scanf("%d %d %d", &x, &y, &z);
    printf("%d is biggest\n", biggest(x, y, z));

    return 0;
}