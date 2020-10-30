#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main()
{
    //find tan of x until reach 90 degree
    int x;
    float tanx;

    for (x = 0; x <= 90; x += 5)
    {
        tanx = tan(x*PI/180.0);
        printf("tan of x: %d is %f \n", x, tanx);
    }

    return 0;
}