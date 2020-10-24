#include <stdio.h>

int main()
{
    int d;

    printf("which day of week\n");
    scanf("%d", &d);

    if (d == 1)
    {
        printf("It's Monday ");
    }
    if (d == 2)
    {
        printf("It's Tuesday ");
    }
    if (d == 3)
    {
        printf("It's Wednesday ");
    }
    if (d == 4)
    {
        printf("It's Thursday ");
    }
    if (d == 5)
    {
        printf("It's Friday ");
    }
    if (d == 6)
    {
        printf("It's Saturday ");
    }
    if (d == 7)
    {
        printf("It's Sunday ");
    }

    return 0;
}