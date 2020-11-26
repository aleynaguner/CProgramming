#include <stdio.h>

enum colors {RED, GREEN, YELLOW, BLUE, WHITE};

int main()
{
    enum colors color;
    char code;

    printf("Write the color code (0-4)\n");
    scanf("%c",&code);

    switch (code)
    {
    case '0':
        color= RED;
        printf("The color is RED = %d\n", RED);
        break;
    case '1':
        color= GREEN;
        printf("The color is GREEN = %d\n", GREEN);
        break;
    case '2':
        color= YELLOW;
        printf("The color is YELLOW = %d\n", YELLOW);
        break;
    case '3':
        color= BLUE;
        printf("The color is BLUE = %d\n", BLUE);
        break;
    case '4':
        color= WHITE;
        printf("The color is WHITE = %d\n", WHITE);
        break;
    default:
        break;
    }


   return 0;
}