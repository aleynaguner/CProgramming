#include <stdio.h>

int main()
{
    int n;

    printf("Enter your age...\n");
    scanf("%d", &n);

    if (n > 18)
    {
        printf("You can vote !!! ");
    }

    return 0;
}