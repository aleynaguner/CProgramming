#include <stdio.h>

int checkIsTriangle(x, y, z)
int x, y, z;
{
    if (x + y <= z)
    {
        printf("Not a triangle. z is big.");
    }
    else if (y + z <= x)
    {
        printf("Not a triangle. x is big.");
    }
    else if (x + z <= y)
    {
        printf("Not a triangle. y is big.");
    }

    return 0;
}

int main()
{
    int a, b, c;
    printf("Enter values of triangle : \n");
    scanf("%d %d %d", &a, &b, &c);
    checkIsTriangle(a, b, c);

    return 0;
}