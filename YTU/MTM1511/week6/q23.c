//q23
#include <stdio.h>
int main()
{
	int n, m, max, i, lcm, c;
	printf("Enter n,m values:");
	scanf("%d,%d", &n, &m);
	max = (n > m) ? n : m;
	/*if(n>m) max=n;
	else max=m;*/
	c = max;
	while (1)
	{
		if (max % n == 0 && max % m == 0)
		{
			lcm = max;
			break;
		}
		max += c;
	}
	printf("LCM of(%d,%d) is %d", n, m, lcm);
	return 0;
}
