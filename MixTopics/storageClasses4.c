#include <stdio.h>

//extern
//Default value 0
//can reach the value everywhere in program

extern int x;
extern int y = 10;

display()
{
    printf("Y = %d", y);
}

void main()
{
    printf("x: %d\n", x);

    int y = 100;
    printf("Y = %d\n", y);
    display();
}

x = 21;