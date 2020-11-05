//q13
#include <stdio.h>
int main()
{
	int n,m,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		sum+=n%10;
		n/=10;
	}
	printf("Sum of digits is %d",sum);
	return 0;
}
