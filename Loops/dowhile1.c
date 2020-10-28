#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;

    do
    {
        sum += n;
        n++;
    } while (n <= 100);

    printf("Sum of the number 1 to 100 is :%d\t", sum);

    return 0;
}