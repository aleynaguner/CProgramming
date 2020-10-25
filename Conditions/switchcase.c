#include <stdio.h>

int main()
{
    int n;

    printf("Enter number between 1 and 4 : \n");
    scanf("%d", &n);

    //if you dont use "break;" every case conditions will run
    switch (n)
    {
    case 1:
        printf("1st step \n");
    case 2:
        printf("2nd step \n");
    case 3:
        printf("3rd step \n");
    case 4:
        printf("4th step \n");
    default:
        printf("Empty step \n");
    }

    return 0;
}