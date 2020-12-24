//Q25
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 20
void multiplication(float a[N][M],float b[N][M],float c[N][M],int ar,int ac,int br,int bc);
void readmatrix(float a[N][M],int ar,int ac);
void writematrix(float a[N][M],int ar,int ac);
int main()
{
	float a[N][M],b[N][M],c[N][M];
	int ar,ac,br,bc,cr,cc,i,j;
	printf("Enter row number for a:");
	scanf("%d",&ar);
	printf("Enter column number for a:");
	scanf("%d",&ac);
	printf("Enter row number for b:");
	scanf("%d",&br);
	printf("Enter column number for b:");
	scanf("%d",&bc);
	if(ac!=br) 
	{
		printf("These two marix can not be multiplied");
		exit(1);
	}
	readmatrix(a,ar,ac);
	readmatrix(b,br,bc);
	multiplication(a,b,c,ar,ac,br,bc);
	writematrix(a,ar,ac);
	printf("\n");
	writematrix(b,br,bc);
	printf("\n");
	writematrix(c,ar,bc);
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
void multiplication(float a[N][M],float b[N][M],float c[N][M],int ar,int ac,int br,int bc)
{
	int i,j,k;
	float sum;
	for(i=0;i<ar;i++)
	{
		for(j=0;j<bc;j++)
		{
			sum=0;
			for(k=0;k<ac;k++) sum+=a[i][k]*b[k][j];
			c[i][j]=sum;
		}
	}
	return;
}
