#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *matrix, x, y;

	printf("Insert matrix size: ");
	scanf("%d", &y);
	printf("\n");

	matrix = (int *)malloc(y * sizeof(int));

	for (x = 0; x < y; x++)
	{
		printf("Insert a value: ");
		scanf("%d", &matrix[x]);
	}

	printf("\nThis is your matrix:\n");

	for (x = 0; x < y; x++)
	{
		printf("Matrix[%d] = %d\n", x, matrix[x]);
	}

	free(matrix);

	return 0;
}
