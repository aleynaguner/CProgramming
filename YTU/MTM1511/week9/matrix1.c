//2 dimensional arrays (matrices)
#include <stdio.h>
int main()
{
	int i, j;
	//3 rows and 4 column
	int matrix[3][4] = {{1, -1, 2, 3}, {2, 3, 4, 5}, {-3, -4, -5, -6}};
	printf("Enter the values of matrix:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%4d", matrix[i][j]);
		printf("\n");
	}
	return 0;
}
