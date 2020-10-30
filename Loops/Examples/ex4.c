#include <stdio.h>
#include <math.h>

int main()
{
    //find sum of numbers 1 to 1000
    int sum = 0;

    for (int i = 0; i <= 1000; i++)
    {
        sum += i;
    }

    printf("%d", sum);

    return 0;
}