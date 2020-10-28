#include <stdio.h>

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
    int m;

    printf("enter number for to find factoriel  \n");
    scanf("%d", &m);

    printf("factoriel of %d is : %d  \n", m, fac(m));

    return 0;
}