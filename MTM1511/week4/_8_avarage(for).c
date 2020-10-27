// the calculation of avarage for 10 with using for loop 
#include <stdio.h>
int main()
{
	int gr,counter,sum=0;
	float avarege;
	//   exp1      condition    exp2
	for(counter=1,counter<=10;counter++)
	{
		printf("Enter the grades for student %d:",counter);
		scanf("%d",&gr);
		sum+=gr;
	}
	avarege=sum/10.;
	printf("The avarege of grades is %f",avarege);
	return 0;
}
