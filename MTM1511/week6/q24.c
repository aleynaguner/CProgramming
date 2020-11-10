//q24
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, i;
	printf("Enter n:");
	scanf("%d", &n);
	for (i = 2; i < n; i++)
		if (n % i == 0)
			break;
	if (n == i)
		printf("i=%d, %d is a prime number", i, n);
	else
		printf("i=%d, %d is not a prime number", i, n);
=======
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	            if(n%i==0) break; 
	if(n==i) printf("i=%d, %d is a prime number",i,n);
	else printf("i=%d, %d is not a prime number",i,n);
>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
	return 0;
}
