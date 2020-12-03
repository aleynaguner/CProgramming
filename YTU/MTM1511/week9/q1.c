// Q1
#include <stdio.h>
int main()
{
	int array[10],i;
	printf("Enter The elements of array:\n");
	// for reading array values
	for(i=0;i<10;i++)
	{
		printf("Enter the %d th index element:",i);
		scanf("%d",&array[i]);
	}
	//writing array values
	for(i=0;i<10;i++) printf("%5d",array[i]);
	return 0;
	
}
