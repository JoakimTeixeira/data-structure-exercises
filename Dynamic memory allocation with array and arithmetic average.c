#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *array, n, i;
	float average = 0;

	printf("Insert array size: ");
	scanf("%d", &n);
	printf("\n");

	array = (int *)malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		printf("Insert a value: ");
		scanf("%d", &array[i]);
		average += array[i];
	}

	printf("\n");

	average /= n;

	printf("The average value is %.2f\n", average);

	free(array);
	return 0;
}
