#include <stdio.h>

int main()
{
    int x = 10, y = 20, temp;

    {
        int i = 5;
        printf("inside of block, i = %d", i);
        printf("before change : x = %d , y = %d \n", x, y);
        temp = x;
        x = y;
        y = temp;
    }

    printf("after change : x = %d , y = %d \n", x, y);

    //can not reach i outside of block
    //printf("outside of block, i = %d", i);

    return 0;
}