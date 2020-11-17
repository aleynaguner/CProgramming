/* mean of 5 terms */
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	float m;
	a=2;b=5;c=7;d=1;e=4;
	m=(a+b+c+d+e)/5.;
	printf("The mean of (%d,%d,%d,%d,%d) is %f",a,b,c,d,e,m);
	return 0;
}
