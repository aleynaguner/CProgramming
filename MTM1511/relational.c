/* Relational Operators */
#include <stdio.h>
int main()
{
	int a=5,b=7,c;
	c=(a<b);
	printf("a=%d b=%d c=%d\n",a,b,c);
	c=(a==b);
	printf("a=%d b=%d c=%d\n",a,b,c);
	c=(a=b);
	printf("a=%d b=%d c=%d\n",a,b,c);
	return 0;
	
}
