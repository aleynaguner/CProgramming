#include <stdio.h>
#include <math.h>

float findHipo(int x, int y);

int main()
{
    int m, n;

    printf("enter value of triangle arcs : \n");
    scanf("%d %d", &m, &n);
    printf("arcs are %d %d and hipo is %f", m, n, findHipo(m, n));

    return 0;
}

float findHipo(int x, int y)
{
    float hipo;
    hipo = sqrt(x * x + y * y);
    return hipo;
}