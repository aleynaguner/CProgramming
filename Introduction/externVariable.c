#include <stdio.h>
void write_extern(void);

extern int count;

void write_extern(void)
{
    printf("count : %d \n", count);
}

int count = 5;

int main()
{
    write_extern();

    return 0;
}