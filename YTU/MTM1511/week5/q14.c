//q14
#include <stdio.h>
int main()
{
	int n,m,product=1;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		if(n%10!=0) product*=n%10;
		n/=10;
	}
	printf("Product of digits (except zero) is %d",product);
	return 0;
}
