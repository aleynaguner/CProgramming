//2 dimensional arrays (matrices)
#include <stdio.h>

int main()
{
	int i, j;
	int matrix[3][4];			//3 rows and 4 column
	for (i = 0; i < 3; i++)		//for rows
		for (j = 0; j < 4; j++) //for columns
		{
			printf("Enter marix[%d][%d] element:", i, j);
			scanf("%d", &matrix[i][j]);
		}
	printf("Enter the values of matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", matrix[i][j]);
		printf("\n");
	}

	return 0;
}
