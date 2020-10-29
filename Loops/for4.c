#include <stdio.h>

int main()
{
    char ch = 'a';

    for (int i = 0; i < 26 ; i++)
    {
        printf("%c\t", ch);
        ch++;   
    }

    return 0;
}