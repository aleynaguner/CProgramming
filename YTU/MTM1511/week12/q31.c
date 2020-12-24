//Q31
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 20
void interchange(float a[N][M],int r,int c);
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
    interchange(a,ar,ac);
    printf("\n The new matrix:\n");
    writematrix(a,ar,ac);
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
void interchange(float a[N][M],int r,int c)
{
	int i,k=c-1;
	float temp;
	for(i=0;i<r;i++)
	{
	     temp=a[i][i];
	     a[i][i]=a[i][k];
	     a[i][k]=temp;
	     k--;
	}
	return ;
}
