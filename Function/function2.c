#include <stdio.h>
#include <math.h>

int x = 1;
int y = 4;

float findHipo(x, y)
{
    float hipo;
    hipo = sqrt(x * x + y * y);
    printf("x = %d , y = %d \n", &x, &y);
    return hipo;
}

int main()
{
    printf("x = %d , y = %d \n", x, y);
    printf("x = %d , y = %d \n", &x, &y);
    printf("hipo = %f \n", findHipo(3, 4));
    printf("x = %d , y = %d \n", x, y);

    return 0;
}
