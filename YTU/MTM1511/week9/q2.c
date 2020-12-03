// Q2
#include <stdio.h>
int main()
{
	int array[10]={-2,3,4,5,-5,7,-10,-11,3,-9},i;
	printf("Enter The elements of array:\n");
	//writing negative elements of array values
	printf("Negative elements of array:\n");
	for(i=0;i<10;i++) if(array[i]<0) printf("%5d",array[i]);
	return 0;
	
}
