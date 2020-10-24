#include <stdio.h>

int main()
{
   unsigned int a = 60;
   // 60 = 0011 1100
   unsigned int b = 13;
   // 13 = 0000 1101
   int c;

   c = a & b;
   printf("c: %d\n", c);
   // 12 = 0000 1100

   c = a | b;
   printf("c: %d\n", c);
   // 61 = 0011 1100

   c = a ^ b;
   printf("c: %d\n", c);
   // 61 = 0011 1101

   c = ~a;
   printf("c: %d\n", c);
   // -61 = 1100 0011

   c = a << 2;
   printf("c: %d\n", c);
   // 60 = 0011 1100
   //  c = 1111 0000

   c = a >> 2;
   printf("c: %d\n", c);
   // 60 = 0011 1100
   // 60 = 0000 1111

   return 0;
}