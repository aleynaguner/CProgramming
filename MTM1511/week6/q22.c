//q22
#include <stdio.h>
int main()
{
	int n, m, min, i, gcd;
	printf("Enter n,m values:");
	scanf("%d,%d", &n, &m);
	min = (n < m) ? n : m;
	/*if(n<m) min=n;
	else min=m;*/
	for (i = 1; i <= min; i++)
		if (!(n % i) && !(m % i))
			gcd = i; //if(n%i==0 && m%i==0) gcd=i;
	printf("GCD of(%d,%d) is %d", n, m, gcd);
	return 0;
}
