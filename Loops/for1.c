#include <stdio.h>

int main()
{
    int sum = 0;

    for ( ; ; ) //infinite loop
    {
        sum ++;
        printf("%d\n", sum);
    }

    return 0;
}