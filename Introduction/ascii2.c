#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char c;
    while (1)
    {
        printf("\n Durmak için 0 basınız..!!!! \n");
        printf("Bir karakter gir :  \n");
        scanf("%c", &c);

        if (c == '0')
            break;

        else if (isspace(c))
            printf("\n Girdiğiniz karakter : boşluk \n");

        else if (isdigit(c))
            printf("\n Girdiğiniz karakter : rakam \n");

        else if (isalpha(c))
            printf("\n Girdiğiniz karakter : harf \n");

        else
            printf("\n Girdiğiniz karakter : %c \n", c);
            
        getchar();
    }
}