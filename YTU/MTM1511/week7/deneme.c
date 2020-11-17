#include <stdio.h>
int main()
{
	int a,b,c;
	a=5;b=7;c=11;
	if(a>5 || (c=1))c=c+a+b;
	printf("c=%d",c);
	return 0;
}
