#include <stdio.h>

//static
//default value is zero
//adress wont change
//exists since program runs

void callStatic()
{
    static int i;
    {
        printf("\nInside of block %d", i);
        printf("\nInside of block , adress of i %d", &i);
        i++;
    }
    printf("\nOutside of block %d", i);
    printf("\nOutside of block , adress of i %d", &i);
    i++;
}

int main()
{
    callStatic();
    callStatic();

    return 0;
}