//if the condition is initially false in a for or while loop
#include <stdio.h>
int main()
{
	int a,b,sum=0;
	a=10;
	while(a<10)
	{
		printf("Enter b value:");
		scanf("%d",&b);
		sum+=b;
		a++;
	}
	printf("a=%d sum=%d",a,sum);
	return 0;
}
