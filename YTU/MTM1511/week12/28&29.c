//Q28 and Q29
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 20
float sum_of_main_diagonal(float a[N][M],int r);
float sum_of_minor_diagonal(float a[N][M],int r);
void readmatrix(float a[N][M],int ar,int ac);
void writematrix(float a[N][M],int ar,int ac);
int main()
{
	float a[N][M],sum_main,sum_minor;
	int ar,ac,k;
	printf("Enter row number for a:");
	scanf("%d",&ar);
	printf("Enter column number for a:");
	scanf("%d",&ac);
	readmatrix(a,ar,ac);
	writematrix(a,ar,ac);
	sum_main=sum_of_main_diagonal(a,ar);
	printf("\n");
	printf("sum of main diagonal is %5.f",sum_main);
	sum_minor=sum_of_minor_diagonal(a,ar);
	printf("\n");
	printf("sum of minor diagonal is %5.f",sum_minor);
	
	
	return 0;
}
void readmatrix(float a[N][M],int ar,int ac)
{
	int i,j;
	printf("Enter elements of marix:\n");
	for(i=0;i<ar;i++)
	     for(j=0;j<ac;j++) 
	     {
	     	printf("Enter [%d][%d].elemnt:",i,j);
	     	scanf("%f",&a[i][j]);
		 }
	return;
}
void writematrix(float a[N][M],int ar,int ac)
{
	int i,j;
	for(i=0;i<ar;i++)
	{
		for(j=0;j<ac;j++) printf("%5.f",a[i][j]);
		printf("\n");
	}
	return;
}
float sum_of_main_diagonal(float a[N][M],int r)
{
	int i;
	float sum=0;
	for(i=0;i<r;i++) sum+=a[i][i];
	return sum;
}
float sum_of_minor_diagonal(float a[N][M],int r)
{
	int i,k=r-1;
	float sum=0;
	for(i=0;i<r;i++) sum+=a[k--][i];
	return sum;
}
