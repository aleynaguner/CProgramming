#include <stdio.h>

int biggest(int, int, int);
int max(int, int);

int main()
{
    int x, y, z;

    printf("enter three number for find biggest : \n");
    scanf("%d %d %d", &x, &y, &z);
    biggest(x, y, z);

    return 0;
}

int biggest(int a, int b, int c)
{
    int m1, m2;
    printf("numbers are %d %d %d \n", a, b, c);
    m1 = max(a, b);
    m2 = max(m1, c);
    return printf("%d is max\n", m2);
}

int max(int m, int n)
{
    int max;
    if (m > n)
        max = m;
    else
        max = n;
    return max;
}