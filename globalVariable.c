#include <stdio.h>

int sayac=0;
int func(void);

int main()
{
    sayac++;
    printf("before func : %2d \n", sayac);
    
    func();

    printf("after func : %2d \n", sayac);

    return 0;
}

int func(void){
    int s=10;
    printf("inside func : %2d \n", s);
}