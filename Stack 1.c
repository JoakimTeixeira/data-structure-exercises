#include <stdio.h>
#include <stdlib.h>
#define size 5

/* Make a complete C program that implements a linear stack structure,
allow the user to enter values and at the end print the data from the stack, respecting the rules of access and manipulation of this structure. */

int stack[size];
int value, top;

void initialize()
{
	top = -1;
}

int fullStack()
{
	if (top == size - 1)
		return 1;
	return 0;
}

int emptyStack()
{
	if (top == -1)
		return 1;
	return 0;
}

void stackUp(int value)
{
	if (!fullStack())
	{
		top++;
		stack[top] = value;
	}
	else
	{
		printf("\nThe stack is full!\n");
	}
}

void unstack()
{
	if (!emptyStack())
	{
		top--;
	}
	else
		printf("\nThe stack is empty!");
}

void showTop()
{
	printf("%d", stack[top]);
}

int main()
{
	int i = 0;

	initialize();
	printf("The stack has %d positions\n\n", size);

	do
	{
		printf("Insert a value in position %d: ", i + 1);
		scanf("%d", &value);
		stackUp(value);
		i++;

	} while (i < size);

	printf("\nStack result: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", stack[i]);
	};

	printf("\n\nThe top stack number is: ");
	showTop();
	printf("\n");

	return 0;
}
