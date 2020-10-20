#include <stdio.h>

int main()
{
   int a= 40, b=20, add, sub, mul, div, mod ;

   add = a+b;
   sub = a-b;
   mul = a*b;
   div= a/b;
   mod= a%b;

   printf("a + b = %d \n", add);
   printf("a - b = %d \n", sub);
   printf("a * b = %d \n", mul);
   printf("a / b = %d \n", div);
   printf("a % b = %d \n", mod);

   a++;
   b--;

   printf("a++ = %d \n", a);
   printf("b-- = %d \n", b);

   return 0;
}