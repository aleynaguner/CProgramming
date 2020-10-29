#include <stdio.h>

int main()
{
    int n, f = 0, s = 1, next, c;

    printf("How many steps ? \n");
    scanf("%d", &n);

    printf("Fibonacci series first %d steps are : \n", n);

    for (c = 0 ; c < n ; c++)
    {
        if(c<=1)
            next=c;
        else{
            next = f + s;
            f = s;
            s = next;
        }
        printf("%d\t", next);
    }

    return 0;
}