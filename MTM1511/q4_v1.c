#include <stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num%5==0) 
	    if(num%11==0) printf("the numer %d is divisible with 5 and 11",num);
	    else printf("the numer %d is divisible with 5 but not divisible with 11",num);
	else if (num%11==0) printf("the numer %d is divisible with 11 but not divisible with 5",num);
	     else printf("the numer %d is not divisible with 5 and 11",num);
	return 0;
}
