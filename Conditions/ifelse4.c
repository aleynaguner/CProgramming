#include <stdio.h>

int main()
{
    int temp;

    printf("Enter a temperature : \n");
    scanf("%d", &temp);

    if (temp < 10)
        printf("It's cold");
    else if (temp < 20)
        printf("It's warm");
    else
        printf("It's hot");

    return 0;
}