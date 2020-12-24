//Q30
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 20
void sum_of_row(float a[N][M],float b[],int r,int c);
void sum_of_col(float a[N][M],float b[],int r,int c);
void readmatrix(float a[N][M],int ar,int ac);
void writematrix(float a[N][M],int ar,int ac);
int main()
{
	float a[N][M],row[N],col[N];
	int ar,ac,k;
	printf("Enter row number for a:");
	scanf("%d",&ar);
	printf("Enter column number for a:");
	scanf("%d",&ac);
	readmatrix(a,ar,ac);
	writematrix(a,ar,ac);
    printf("\nsum of rows:\n");
    sum_of_row(a,row,ar,ac);
    for(k=0;k<ar;k++) printf("%5.f",row[k]);
    printf("\nsum of rows:\n");
    sum_of_col(a,col,ar,ac);
    for(k=0;k<ac;k++) printf("%5.f",col[k]);
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
void sum_of_row(float a[N][M],float b[],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		b[i]=0;
		for(j=0;j<c;j++) b[i]+=a[i][j];
	}
	return;
}
void sum_of_col(float a[N][M],float b[],int r,int c)
{
	int i,j;
	for(i=0;i<c;i++)
	{
		b[i]=0;
		for(j=0;j<r;j++) b[i]+=a[j][i];
	}
	return;
}
