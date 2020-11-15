#include <stdio.h>
#include <math.h>

float findPower(float, float);

int main()
{
    float m,n;

    printf("enter numbers to find powers : \n");
    scanf("%f %f", &m, &n);
    printf("%.2f power %.2f = %.2f", m, n, findPower(m,n));

    return 0;
}

float findPower(float x, float y)
{
    return pow(x,y);
}