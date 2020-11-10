//q26
#include <stdio.h>
int main()
{
	int n,i,k,sum=0;
	printf("Enter n:");
	scanf("%d",&n);
	for(k=2;k<n;k++)
	{
		for(i=2;i<k;i++)
	            if(k%i==0) break; 
		if(k==i) sum+=k;	
	}
	printf("The sum of all prime numbers betwwen 1-%d is %d",n,sum);
	return 0;
}
