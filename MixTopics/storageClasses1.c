#include <stdio.h>

void write();

int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        write();
    }

    return 0;
}

void write()
{
    auto int x = 0;
    x = x + 1;
    printf("\n x=%d", x);
}