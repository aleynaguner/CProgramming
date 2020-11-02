#include <stdio.h>

int main()
{
    int i, j, k;

    printf("Enter a number ...\n");
    scanf("%d", &k);

    for (i = 0; i <= k; i++)
    {
        for (j = 0; j <= k - i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
