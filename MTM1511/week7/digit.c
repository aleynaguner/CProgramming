#include <stdio.h>
int main()
{
	int number,k;
	printf("Enter a negative number  for exit:");
	do
	{
	
		printf("\nEnter the number:");
		scanf("%d",&number);
		while(number>0)
		{
		      k=number%10;
		      printf("\nDigit:%d",k);
		      number/=10;
		}
	}while(number>=0);	
	return 0;
}
