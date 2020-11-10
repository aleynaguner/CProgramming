//q25
#include <stdio.h>
int main()
{
	int n,i,k;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The prime numbers between 1- %d\n",n);
	for(k=2;k<n;k++)
	{
		for(i=2;i<k;i++)
	            if(k%i==0) break; 
		if(k==i) printf("%d is a prime number\n",k);	
	}
	return 0;
}
