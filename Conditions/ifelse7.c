#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a key : \n");
    scanf("%c", &ch);

    if (isupper(ch))
        printf("%c is upper key\n", ch);
    else if (islower(ch))
        printf("%c is lower key \n", ch);
    else if (isdigit(ch))
        printf("%c is digit\n", ch);
    else
        printf("%c is not an alpha number \n", ch);

    return 0;
}