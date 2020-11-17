// the calculation of avarage for 10 
#include <stdio.h>
int main()
{
	int gr,counter=1,sum=0;
	float avarage;
	while(counter <= 10)
	{
		printf("Enter the grade for student %d:",counter);
		scanf("%d",&gr);
		sum+=gr;
		counter++;
	}
	avarage=sum/10.;
	printf("The avarage value of grades is %f",avarage);
	return 0;
}
