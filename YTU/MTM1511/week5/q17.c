//q17
#include <stdio.h>
int main()
{
	int n,digit,m;
	printf("Enter n value:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		digit=n%10;
		switch(digit)
		{
			case 0: printf("zero ");
			break;
			case 1: printf("one ");
			break;
			case 2: printf("two ");
			break;
			case 3: printf("three ");
			break;
			case 4: printf("four ");
			break;
			case 5: printf("five ");
			break;
			case 6: printf("six ");
			break;
			case 7: printf("seven ");
			break;
			case 8: printf("eight ");
			break;
			case 9: printf("nine ");
			break;	
		}
		n/=10;
	}
	return 0;
	
}
