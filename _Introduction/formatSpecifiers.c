#include <stdio.h>
int main()
{
    int i = 10;
    printf("%d \n", i);
    printf("%i \n", i);

    printf("adress : %u \n", &i);

    char c = 'a';
    printf("%c \n", c);

    float f = 3423414.253643423;
    printf("%f \n", f);

    printf("%e \n", f);

    printf("%g \n", 123.123123);

    printf("%ld \n", 123123);

    printf("%o %o %o %o \n", 7, 8, 9, 10);

    printf("%x %x %x %x \n", 7, 8, 9, 10);

    int a;
    printf("helloAg%n \n", &a);
    printf("%d \n", a);

    char ch[20];
    printf("enter your name : \n");
    gets(ch);
    printf("%s", ch);

    int n1 = 123456;
    long n2 = 9876543;
    float n3 = 98.7654;

    printf("%d \n", n1);
    printf("%10d \n", n1);
    printf("%010d \n", n1);
    printf("%-10d \n", n1);

    printf("%10ld \n", n2);
    printf("%10d \n", -n2);
    printf("%7.4f \n", n3);
    printf("%10f \n", n3);
    printf("%7.2f \n", n3);
    printf("%-7.2f \n", n3);
    printf("%07.2f \n", n3);
    printf("%*.*f \n", n3);

    printf("%10.2e \n", n3);
    printf("%12.4e \n", -n3);
    printf("%-10.2e \n", n3);
    printf("%e \n", n3);

    printf("%s : \n", "C Programming Language");
    printf("%15s : \n", "C Programming Language");
    printf("%.10s : \n", "C Programming Language");
    printf("%-10s : \n", "C Programming Language");
    printf("%-15s : \n", "C Programming Language");
    printf("%.15s : \n", "C Programming Language");
    printf("%15.10s : \n", "C Programming Language");
    printf("%-15.10s : \n", "C Programming Language");

    return 0;
}