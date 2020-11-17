// This program checks wheather a number is strong or not.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,f,i,m,sum=0,digit,k;
	printf("Enter n value:");
	scanf("%d",&n);
	for(k=1;k<=n;k++)
	{	
	    sum=0;
		m=k;
		while(m>0)
		{
			digit=m%10;
			f=1;
			for(i=1;i<=digit;i++) f*=i;
			sum+=f;
			m/=10;
		}
		if(k==sum ) printf("%d is a strong number\n",k);
    }
	return 0;
	
}
