#include <stdio.h>

int main(void)
{
    struct staff
    {
        int age;
        int id;
        char name[20];
        char address[50];
        double loan;
    } stf;

    printf("Enter the loan of staff\n");
    scanf("%lf",&stf.loan);

    printf("Enter the age of staff\n");
    scanf("%d",&stf.age);

    printf("Enter the id of staff\n");
    scanf("%d",&stf.id);

    printf("Staff age is : %d\n", stf.age);
    printf("Staff id is : %d\n", stf.id);
    printf("Staff loan is : %lf\n", stf.loan);
    

    return 0;
}