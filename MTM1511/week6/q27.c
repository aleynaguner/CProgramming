//Q27
#include <stdio.h>
int main()
{
	int n,i,k;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The prime factors of %d\n",n);
	for(i=2;i<=n;i++) 
	     if(!(n%i))
	     {
	     	for(k=2;k<i;k++) if(i%k==0) break;
	     	if(i==k) printf("%d ",i);
		 }
	return 0;
}

