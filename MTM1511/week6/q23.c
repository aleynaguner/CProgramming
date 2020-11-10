//q23
#include <stdio.h>
int main()
{
<<<<<<< HEAD
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
=======
	int n,m,max,i,lcm,c;
	printf("Enter n,m values:");
	scanf("%d,%d",&n,&m);
	max=(n>m) ? n:m;
	/*if(n>m) max=n;
	else max=m;*/
	c=max;
	while(1)
	{
		if(max%n==0 && max%m==0) 
		{
			lcm=max;break;
		}
	    max+=c;
	}
	printf("LCM of(%d,%d) is %d",n,m,lcm);
>>>>>>> 6ca7d5c732c565d73949b995cfea85b11242c826
	return 0;
}
