// the solution of Q4
#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%5==0 && num%11==0) printf("The number %d is divisible with 5 and 11",num);
	else printf("The number %d is not divisible with 5 and 11",num);
    return 0;
}
