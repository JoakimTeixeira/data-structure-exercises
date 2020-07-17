#include <stdio.h>
#define size 10

// array structure with search types (sequential, ordered, binary), Insertion and Removal

// global variables that make up the array
int Array[size] = {1, 2, 3, 4, 5, 6, 7}; // 10 position array
int n = sizeof(Array);
int M = size - 1;
int i = 0;

// function that counts the array elements
int initialize()
{
	int cont = -1;
	for (i = 0; i < size; i++)
	{
		if (Array[i] != NULL)
			cont++;
		else
			return cont;
	}
}

// linear search
int search(int x)
{
	i = 0;

	while (i <= n)
	{
		if (Array[i] == x)
			return i;
		else
			i++;
	}
	return -1;
}

// ordered linear search
int ordSearch(int x)
{
	i = 0;

	while (Array[i] < x && i <= n)
		i++;

	if (i == n + 1 || Array[i] != x)
		return -1;
	else
		return i;
}

// binary search
int binSearch(int x)
{
	int inferior = 0, superior = n, middle = 0;

	while (inferior <= superior)
	{
		middle = (inferior + superior) / 2;
		if (x == Array[middle])
		{
			return middle;
		}
		else if (x > Array[middle])
		{
			inferior = middle + 1;
		}
		else
			superior = middle - 1;
	}
	return -1;
}

// insertion function
void insert(int x)
{
	if (n < M)
	{
		if (search(x) == -1)
		{
			Array[n + 1] = x;
			n++;
		}
		else
			printf("\nElement already exist\n");
	}
	else
		printf("\nThe Array is full!\n");
}

// removal function
void removeValue(int x)
{
	int index = 0, aux = 0;
	n = sizeof(Array);

	if (n >= 0)
	{
		index = search(x);
		if (index != -1)
		{
			aux = Array[index];
			for (i = index; i <= n - 1; i++)
			{
				Array[i] = Array[i + 1];
				n--;
			}
		}
		else
			printf("Element don't exist");
	}
	else
		printf("The Array is empty!");
}

// shows array values
void showValue()
{
	printf("\nString: ");
	for (i = 0; i <= n; i++)
	{
		if (Array[i] != NULL)
			printf("%d ", Array[i]);
	}
	printf("\n");
}

// main function
int main()
{
	int x, result;

	n = initialize();

	printf("N size: %d\n", n);
	printf("M size: %d\n", M);

	showValue();

	printf("\nEnter a number for linear search: ");
	scanf("%d", &x);
	result = search(x);

	if (search(x) != -1)
		printf("\nThe value is in the position: %d\n", result);
	else
		printf("\nThat number is not in the Array\n");

	printf("\nEnter a number for ordered linear search: ");
	scanf("%d", &x);
	result = ordSearch(x);

	if (ordSearch(x) != -1)
		printf("\nThe value is in the position: %d\n", result);
	else
		printf("\nThat number is not in the Array\n");

	printf("\nEnter a number for binary search: ");
	scanf("%d", &x);
	result = binSearch(x);

	if (binSearch(x) != -1)
		printf("\nThe value is in the position: %d\n", result);
	else
		printf("\nThat number is not in the Array\n");

	while ((x != -1) && (n < M))
	{
		printf("\nEnter a number you want to insert: (type -1 to exit) ");
		scanf("%d", &x);
		if (x != -1)
		{
			insert(x);
		}
		showValue();
	}

	printf("\nEnter a number to remove: ");
	scanf("%d", &x);
	removeValue(x);

	showValue();

	printf("\n\n");
	// pause windows for user to read
	getchar();
	return 0;
}
