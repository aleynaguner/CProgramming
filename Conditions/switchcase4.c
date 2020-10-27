#include <stdio.h>
#include <ctype.h>

int main()
{
    int n;

    printf("Enter your score : \n");
    scanf("%d", &n);

    switch (n / 10)
    {
    case 10:
        printf("You got A ! \n");
        break;
    case 9:
        printf("You got A- ! \n");
        break;
    case 8:
        printf("You got B+ ! \n");
        break;
    case 7:
        printf("You got B ! \n");
        break;
    case 6:
        printf("You got B- ! \n");
        break;
    case 5:
        printf("You got C+ ! \n");
        break;
    case 4:
        printf("You got C ! \n");
        break;
    case 3:
        printf("You got C- ! \n");
        break;
    case 2:
        printf("You got D+ ! \n");
        break;
    case 1:
        printf("You got D- ! \n");
        break;
    case 0:
        printf("You got F ! \n");
        break;
    default:
        printf("Wrong score \n");
    }

    return 0;
}