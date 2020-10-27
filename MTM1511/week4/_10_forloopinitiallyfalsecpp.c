//if the condition is initially false in a for or while loop
#include <stdio.h>
int main()
{
	int a,b,sum=0;
	for(a=10; a<10;a++)
	{
		printf("Enter b value:");
		scanf("%d",&b);
		sum+=b;
	}
	printf("a=%d sum=%d",a,sum);
	return 0;
}
