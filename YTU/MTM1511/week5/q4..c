// q4
#include <stdio.h>
int main()
{
	int i;
	/*for(i=1;i<=100;i++) 
	     if(i%2==0) printf("\n%d",i);
	     else continue;*/
	i=1;
	while(i<=100)
	{
		if(i%2==0) printf("\n%d",i);
		else 
		{
			i++;
			continue;
		}
		i++;
	}
	return 0;
}
	
