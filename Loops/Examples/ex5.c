#include <stdio.h>
#include <math.h>

int main()
{
    //find sum of first 100 index of 20+21+22...
    int sum = 20;

    for (int i = 0; i < 100; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}