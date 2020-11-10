//q24
#include <stdio.h>
int main()
{
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
	return 0;
}
