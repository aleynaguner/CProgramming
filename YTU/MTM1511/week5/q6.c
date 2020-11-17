//q6
#include <stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) sum+=i;
	printf("The sum of natural numbers from 1 to %d is %d",n,sum);
	return 0;
}
