#include <stdio.h>

int main()
{
    int ch;

    printf("Enter a key: \n");
    ch = getchar();

    switch (ch)
    {
    case 'M':
    case 'm':
        printf("case 'm': \n");
        break;
    case 'P':
    case 'p':
        printf("case 'p': \n");
        break;
    default:
        printf("Empty step \n");
    }

    return 0;
}