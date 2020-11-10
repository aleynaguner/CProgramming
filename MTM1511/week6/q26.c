//q26
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, i, k, sum = 0;
	printf("Enter n:");
	scanf("%d", &n);
	for (k = 2; k < n; k++)
	{
		for (i = 2; i < k; i++)
			if (k % i == 0)
				break;
		if (k == i)
			sum += k;
	}
	printf("The sum of all prime numbers betwwen 1-%d is %d", n, sum);
=======
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
>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
	return 0;
}
