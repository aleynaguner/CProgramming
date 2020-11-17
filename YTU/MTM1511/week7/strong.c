// This program checks wheather a number is strong or not.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,f,i,m,sum=0,digit;
	do
	{
		sum=0;
		printf("Enter n value:");
		scanf("%d",&n);
		m=n;
		while(m>0)
		{
			digit=m%10;
			f=1;
			for(i=1;i<=digit;i++) f*=i;
			sum+=f;
			m/=10;
		}
		if(n==sum && n!=0) printf("%d is a strong number\n",n);
		else printf("%d is not a strong number\n",n);
	}while (n>0);   
	return 0;
	
}
