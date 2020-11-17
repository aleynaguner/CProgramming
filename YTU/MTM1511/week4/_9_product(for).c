// consider a program segment designed to find the first power of 3 larger than 100.
#include <stdio.h>
int main()
{
	int product;
	//for(product=3;product <=100;product*=3); first way
	/*for(product=3;product<=100;)
	{
		product*=3;
	}*/
	/*product=3;
	for(;product<=100;)
	{
		product *=3;
	}*/
	product=3;
	for(;;)
	{
		product*=3;
		if(product>100) break;
	}
	printf("Product=%d",product);
	return 0;
}
