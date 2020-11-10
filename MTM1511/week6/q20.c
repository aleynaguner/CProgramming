//Q20
#include <stdio.h>
int main()
{
<<<<<<< HEAD
	int n, i;
	printf("Enter n:");
	scanf("%d", &n);
	printf("The factors of %d\n", n);
	for (i = 1; i <= n; i++)
		if (!(n % i))
			printf("%d,", i);
=======
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	printf("The factors of %d\n",n);
	for(i=1;i<=n;i++) if(!(n%i)) printf("%d,",i);
>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
	return 0;
}
