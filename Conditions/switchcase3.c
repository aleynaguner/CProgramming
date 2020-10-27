#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter your score : \n");
    scanf("%c", &c);

    switch (toupper(c))
    {
    case 'A':
        printf("Excellent \n");
        break;
    case 'B':
        printf("Good \n");
        break;
    case 'C':
        printf("Average \n");
        break;
    case 'D':
        printf("Fair \n");
        break;
    case 'F':
        printf("Poor \n");
        break;
    default:
        printf("Wrong score \n");
    }

    return 0;
}