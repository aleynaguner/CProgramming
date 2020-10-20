#include <stdio.h>
#include <locale.h>

//preprocessor directives
#define welcomeMessage "Hoşgeldiniz"
#define Cube(x) ((x) * (x) * (x))

float findTriangleArea()
{
    float l;
    float h;

    setlocale(LC_ALL, "");
    printf("Üçgenin tabanını giriniz \n");
    scanf("%f", &l);
    printf("Üçgenin yüksekliğini giriniz \n");
    scanf("%f", &h);
    return l * h / 2;
}

int main()
{
    setlocale(LC_ALL, "");

    printf("%s\n", welcomeMessage);

    printf("Üçgenin alanı = %f\n", findTriangleArea());

    int a;
    printf("Sayi giriniz \n");
    scanf("%d", &a);
    printf("Cube = %d", Cube(a));

    return 0;
}