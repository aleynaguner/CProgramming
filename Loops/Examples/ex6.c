#include <stdio.h>
#include <math.h>

int fac(int n)
{
    int fac = 1;
    while (n >= 1)
    {
        fac *= n;
        n--;
    }
    return fac;
}

int main()
{
    //find sum of first 10 index of 1! + 2! + ...

    int sum=0;

    for (int i = 0; i < 10; i++)
    {
        sum += fac(i);
    }
    
    printf("%d\n", sum);

    return 0;
}