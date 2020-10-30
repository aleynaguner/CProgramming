#include <stdio.h>

int main()
{
    //powers of 2
    long int sum = 1;

    while (sum <= 33000)
    {
        sum += sum;
        printf("%d\n", sum);
    }

    return 0;
}