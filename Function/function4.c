#include <stdio.h>

int f(int);

int main()
{
    int a = 1;
    printf("main() => adress of f() : %d \n", &a);
    printf("main() => value of f() : %d \n", a);
    printf("main() => f(a) : %d \n", f(a));
    printf("main() => value of f() : %d \n", a);

    return 0;
}

int f(int a)
{
    printf("adress of f() : %d \n", &a);
    printf("value of f() : %d\n", a);
    a=100;
    printf("f(a) : %d\n", a);

    return a;
}

