#include <stdio.h>

int main()
{
    //find cubes of 1 to 20
    int n, cube;
    n = 0;

    while (n++ < 20)
    {
        cube = n * n * n;
        printf("n: %d cube: %d\n", n, cube);
    }

    return 0;
}