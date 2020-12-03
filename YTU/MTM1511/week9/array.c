#include <stdio.h>
#define N 100
int main()
{
    //the array balance can hold up to 10 double values
    double balance[10] = {1.0, 2., 0.5, 9.6, 23, 17.50, 6, 7, 8, 10.9}, salary;
    //	the array A can hold up to N (100) integer values
    int n = 5;
    //the array B can hold up to 5 characters or a string
    int A[N];
    A[0] = 5;
    A[1] = 6;
    A[2] = 3;
    A[3] = 0;
    A[4] = 12;
    char B[N];
    B[0] = 'Y';
    B[1] = 'i';
    B[2] = 'l';
    B[3] = 'd';
    B[4] = 'i';
    char c[] = "Yildiz"; // This is used to assign sentences to a character array
    salary = balance[9];
    printf("The 9th index of balanca array is %lf and salary is %lf", balance[9], salary);
    printf("\n%s", c);
    return 0;
}
