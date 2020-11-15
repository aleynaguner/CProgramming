#include <stdio.h>
#define PI 3.1459

float findArea(float r);

int main()
{
    float m;

    printf("enter radius of circle : \n");
    scanf("%f", &m);
    printf("area is %f for given radius %.2f", findArea(m), m);

    return 0;
}

float findArea(float r)
{
    return PI*r*r;
}