//Q27
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, i, k;
	printf("Enter n:");
	scanf("%d", &n);
	printf("The prime factors of %d\n", n);
	for (i = 2; i <= n; i++)
		if (!(n % i))
		{
			for (k = 2; k < i; k++)
				if (i % k == 0)
					break;
			if (i == k)
				printf("%d ", i);
		}
	return 0;
}
=======
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

>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
