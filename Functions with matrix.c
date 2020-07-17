#include <stdio.h>
#include <stdlib.h>

void print(int matrix[], int size)
{
	int x;
	printf("\n ");

	for (x = 0; x < size; x++)
	{
		printf("%d ", matrix[x]);
	}
}
int main()
{
	int values[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

	print(values, 10);
	return 0;
}
