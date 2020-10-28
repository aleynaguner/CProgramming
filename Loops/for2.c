#include <stdio.h>

#define START 0
#define END 9
#define MAX(A, B) (A > B ? A : B)
#define MIN(A, B) (A < B ? A : B)

int main()
{
    int mx, mn, i;
    int c = 5;

    for (i = START; i <= END; i++)
    {
        mx = MAX(i,c);
        mn = MIN(i,c);
        printf("max = %d and min = %d\n", mx, mn);
    }

    return 0;
}