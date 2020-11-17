// q2
#include <stdio.h>
int main()
{
	int i,n;
	printf("Enter the n value:");
	scanf("%d",&n);
	//for(i=n;i>0;i--) printf("%d\n",i);
	i=n;
	while(i>0)
	{
		printf("%d\n",i);
		i--;
	}
	return 0;
}
