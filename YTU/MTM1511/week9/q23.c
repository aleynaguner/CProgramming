//Q23
#include <stdio.h>
int main()
{
	int matrix1[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
	int matrix2[3][4]={{-1,2,-3,-4},{2,-3,4,-5},{-3,-4,-5,-6}};
	int temp[3][4],i,j;
	for(i=0;i<3;i++)
	    for(j=0;j<4;j++) temp[i][j]=matrix1[i][j]+matrix2[i][j];
	printf("Matrix1:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) printf("%4d",matrix1[i][j]);
		printf("\n");
	}
	printf("\nMatrix2:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) printf("%4d",matrix2[i][j]);
		printf("\n");
	}   
	printf("\nAdditon Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++) printf("%4d",temp[i][j]);
		printf("\n");
	}
	
}
