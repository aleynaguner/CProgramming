#include <stdio.h>
#include <math.h>

int x = 1;
int y = 4;

float findHipo(float x, float y)
{
    int a = x;
    int b = y;
    float hipo;
    hipo = sqrt(a * a + b * b);
    printf("x = %d , y = %d \n", &x, &y);
    return hipo;
}

int main()
{
    printf("x = %d , y = %d \n", x, y);
    printf("x = %d , y = %d \n", &x, &y);
    printf("hipo = %f \n", findHipo(3.2, 4.7));
    printf("x = %d , y = %d \n", x, y);

    return 0;
}
