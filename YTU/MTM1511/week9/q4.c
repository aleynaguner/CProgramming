//Q4
#include <stdio.h>
int main()
{
	int array[10]={1,3,4,-5,6,7,8,-9,2,-11},n=10;
	int i,max,min;
	min=max=array[0];
	for(i=1;i<10;i++)
	{
		if(array[i]<min) min=array[i];
		if(array[i]>max) max=array[i];
		printf("i=%d min=%d,max=%d\n",i,min,max);
	}
	printf("The elements of array:\n");
	for(i=0;i<10;i++) printf("%4d",array[i]);
	printf("\nTHe max element is %d\nThe min element is %d",max,min);
	return 0;
}
