//Q26
#include <stdio.h>
#include <stdlib.h>
#define N 20
#define M 20
int equality(float a[N][M],float b[N][M],int r,int c);
void readmatrix(float a[N][M],int ar,int ac);
void writematrix(float a[N][M],int ar,int ac);
int main()
{
	float a[N][M],b[N][M],c[N][M];
	int ar,ac,k;
	printf("Enter row number for a:");
	scanf("%d",&ar);
	printf("Enter column number for a:");
	scanf("%d",&ac);
	readmatrix(a,ar,ac);
	readmatrix(b,ar,ac);
	writematrix(a,ar,ac);
	printf("\n");
	writematrix(b,ar,ac);
	k=equality(a,b,ar,ac);
	if(k==1) printf("\nThese two matrices are equal ");
	else printf("\nThese two matrices are not equal ");
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
int equality(float a[N][M],float b[N][M],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	   for(j=0;j<c;j++) if(a[i][j]!=b[i][j]) return 0;
	return 1;
}
