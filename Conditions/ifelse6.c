#include <stdio.h>

int main()
{
    int n;

    printf("Enter your note : \n");
    scanf("%d", &n);

    if (n > 90)
        printf("If you get %d, your note will be A \n", n);
    else if (n > 75)
        printf("If you get %d, your note will be B \n", n);
    else if (n > 60)
        printf("If you get %d, your note will be C \n", n);
    else if (n > 50)
        printf("If you get %d, your note will be D \n", n);
    else
        printf("If you get %d, your note will be F \n", n);

    return 0;
}