//q11
#include <stdio.h>
int main()
{
	int n,firstdigit,lastdigit,m,sum;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	lastdigit=n%10;
	while(n>0)
	{
		firstdigit=n%10;
		n/=10;
	}
	sum=firstdigit+lastdigit;
	printf("The number is %d\n",m);
	printf("The first digit is %d\nThe last digit is %d",firstdigit,lastdigit);
	printf("\nSum is %d",sum);
	return 0;	
}
