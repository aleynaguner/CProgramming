//While loop
#include <stdio.h>
int main()
{
	int product=3;
	printf("\nThe intial value of product=%d\n",product);
	while(product<=100)
	{
		product*=3;
		printf("\nThe condition is true and product=%d\n",product);
	}
	printf("\nThe condition is false and product=%d\n",product);
	return 0;
	
}
