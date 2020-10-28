#include <stdio.h>

int main()
{
    int n = 1;

    while (n < 20)
    {
        n++;
        printf("%d \n", n);
        if(n == 10)
            break; // to get out of the loop
    }

    return 0;
}