//The usage of log and log10 function
#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z;
	x=exp(1);
	y=log10(x);
	z=log(x);
	printf("\nlog10(%f)=%f\n",x,y);
	printf("ln(%f)=%f",x,z);
	return 0;
}
