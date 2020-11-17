//q17
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,digit,m,nd,p;
	
	printf("Enter n value:");
	scanf("%d",&n);                
	nd=(int) log10(n)+1;
	m=n;
	while(1)
	{
		p=pow(10,nd-1);    
		digit=n/p;
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
		n-=p*digit;nd--;
		if(nd==0) break;
	}
	return 0;
	
}
