//Q4  version 1
#include <stdio.h>
int main()
{
	int array[10]={1,3,4,-5,6,7,8,-9,2,-11},n=10;
	int i,maxi,mini;
	mini=maxi=0;
	for(i=1;i<10;i++)
	{
		if(array[i]<array[mini]) mini=i;
		if(array[i]>array[maxi]) maxi=i;
		printf("i=%d min index=%d,max index=%d\n",i,mini,maxi);
	}
	printf("The elements of array:\n");
	for(i=0;i<10;i++) printf("%4d",array[i]);
	printf("\nThe max index is %d\nThe min index is %d",maxi,mini);
	printf("\nThe max element is %d and the min element is %d",array[maxi],array[mini]);
	return 0;
}
