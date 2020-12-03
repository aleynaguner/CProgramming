//Q3
#include <stdio.h>
int main()
{
	int array[10]={1,3,4,-5,6,7,8,-9,2,-11},n=10;
	int sum=0,i;
	for(i=0;i<10;i++) sum+=array[i];
	printf("The elements of array:\n");
	for(i=0;i<10;i++) printf("%4d",array[i]);
	printf("\nTHe sum of elements is %d",sum);
	printf("\nTHe evarage is %f",(float)sum/10);
	return 0;
}
