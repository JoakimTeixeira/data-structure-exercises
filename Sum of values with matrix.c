#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrix[3][3];
	int x, y;
	int sum = 0;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			if (x == y)
				matrix[x][y] = 1;
			else
				matrix[x][y] = 2;
			sum += matrix[x][y];
		}
	}

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
		{
			printf("%d", matrix[x][y]);
		}
		printf("\n");
	}

	printf("The sum is %d", sum);

	return 0;
}
