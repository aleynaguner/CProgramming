#include <stdio.h>
#include <locale.h> //library for turkish chars

int main()
{
   printf("Hello, World! Welcome to the C Programming !\n");

   setlocale(LC_ALL, "");
   printf("Merhaba Dünya! C Programlama'ya hoşgeldin !\n");

   return 0;
}