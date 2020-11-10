//q25
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, i, k;
	printf("Enter n:");
	scanf("%d", &n);
	printf("The prime numbers between 1- %d\n", n);
	for (k = 2; k < n; k++)
	{
		for (i = 2; i < k; i++)
			if (k % i == 0)
				break;
		if (k == i)
			printf("%d is a prime number\n", k);
=======
	int n,i,k;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The prime numbers between 1- %d\n",n);
	for(k=2;k<n;k++)
	{
		for(i=2;i<k;i++)
	            if(k%i==0) break; 
		if(k==i) printf("%d is a prime number\n",k);	
>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
	}
	return 0;
}
