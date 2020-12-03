//Q6 
#include <stdio.h>
int main()
{
	int array[10]={1,3,4,-5,6,7,8,-9,2,-11},n=10;
	int i,even,odd;
	even=0;odd=0;
	for(i=0;i<10;i++) if(array[i]%2==0) even++;// now we know the largest element in the array
	                  else odd++;
	printf("The elements of array:\n");
	for(i=0;i<10;i++) printf("%4d",array[i]);
	printf("\nThe number of even elements is %d and the number of odd elements is %d",even,odd);
	return 0;
}

