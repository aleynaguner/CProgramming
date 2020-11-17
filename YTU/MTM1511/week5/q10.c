//q10
#include <stdio.h>
int main()
{
	int n,nd=0,m;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		nd++;
		n/=10;
	}
	if(m==0) nd=1;
	printf("%d has %d digits",m,nd);
	return 0;	
}
