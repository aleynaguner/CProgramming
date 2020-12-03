//Q9 v1 this inserts a number at the beginning of array
#include <stdio.h>
int main()
{
	int array[11]={1,3,4,-5,6,7,8,-9,2,-11},n=11;
	int i,a;
	printf("Enter the value:");
	scanf("%d",&a);
	for(i=n-1;i>0;i--) array[i]=array[i-1];
	array[0]=a;
	printf("The elements of array:\n");
	for(i=0;i<n;i++) printf("%4d",array[i]);
	return 0;
}
