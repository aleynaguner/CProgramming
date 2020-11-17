// q16_1 This program displays all palindrom numbers between 10-1000 (including 10 and 1000)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int n,i,m,newn=0,nd;
	for(n=10;n<=1000;n++)
	{
        newn=0;
		m=n;
		nd=(int) log10(m)+1; // this gives the number of digits in n number
		for(i=nd-1;i>=0;i--)
		{
			newn+=(m%10)*pow(10,i);
			m/=10;
		}
		if(n==newn) printf("\n%d is a palindrom number ",n);
    }
    return 0;
}
