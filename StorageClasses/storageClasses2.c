#include <stdio.h>

//register
//Puts variable in CPU (not guaranteed) instead of RAM
//use inside of a block
//fast access instead of others

void write();

int main()
{
    register int i = 10;
    int p = &i;
    printf("/d", i);
    
    //error for this because can not reach the adress of register
    printf("/d", p);

    return 0;
}