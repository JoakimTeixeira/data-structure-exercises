#include <stdio.h>
#include <stdlib.h>

int main()
{
	int matrixA[2][3];
	int matrixB[4][2][3];
	int x, y, z, sum = 0;

	for (x = 0; x < 2; x++)
	{
		for (y = 0; y < 3; y++)
		{
			sum = sum + 1;
		}
	}

	for (x = 0; x < 4; x++)
	{
		for (y = 0; y < 2; y++)
		{
			for (z = 0; z < 3; z++)
			{
				sum = sum + 1;
			}
		}
	}

	printf("Sum = %d", sum);
}
