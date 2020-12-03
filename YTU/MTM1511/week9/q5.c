//Q5  
#include <stdio.h>
int main()
{
	int array[10]={1,3,4,-5,6,7,8,-9,2,-11},n=10;
	int i,max,maxs;
	max=array[0];
	for(i=1;i<10;i++) if(array[i]>max) max=array[i];// now we know the largest element in the array
	maxs=array[0];
	for(i=1;i<10;i++) if(array[i]!=max && array[i]>maxs) maxs=array[i];
	printf("The elements of array:\n");
	for(i=0;i<10;i++) printf("%4d",array[i]);
	printf("\nThe second largest element is %d",maxs);
	return 0;
}
