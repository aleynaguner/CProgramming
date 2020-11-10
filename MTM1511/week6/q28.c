//Q28
#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,nd,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	m=n;
	nd=(int) log10(n)+1;
	while(m>0)
	{
		sum+=(int) pow(m%10,nd);
		m/=10;
	}
	if(n==sum) printf("%d is an amstrong number",n);
	else printf("%d is not an amstrong number",n);
}
