#include <stdio.h>

int main()
{
    int n = 0;

    while (n < 5)
    {
        n++;
        printf("before continue.. \n", n);
        continue;
        printf("after continue.. \n", n);
    }

    return 0;
}