#include <stdio.h>
#include <stdlib.h>
#define size 5

/* Given a stack containing any sort of integers, build a function that places
the integer pairs at the bottom of the stack and the odd ones at the top of the stack. Use two stacks as auxiliary. */

int stack[size], stack2[size], stack3[size];
int top, value, i, pair = 0, odd = 0;

void initialize()
{
	top = -1;
};

int fullStack()
{
	if (top == size - 1)
		return 1;
	return 0;
};

int emptyStack()
{
	if (top == -1)
		return 1;
	return 0;
};

void stackUp(int value)
{
	if (!fullStack())
	{
		top++;
		stack[top] = value;
	}
	else
		printf("\nThe stack is full!");
};

void unstack()
{
	if (!emptyStack())
	{
		stack[top] = 0;
		top--;
	}
	else
		printf("\nThe stack is empty!");
};

void showTop()
{
	printf("\nThe top stack number is: %d", stack[top]);
};

void arrange()
{
	for (i = 0; i < size; i++)
	{

		if (stack[top] % 2 == 0)
		{
			int j;
			for (j = 0; j < 1; j++)
			{
				stack2[pair] = stack[top];
				unstack();
				pair++;
			}
		}

		else if (stack[top] % 2 == 1)
		{
			int j;
			for (j = 0; j < 1; j++)
			{
				stack3[odd] = stack[top];
				unstack();
				odd++;
			}
		}
	}

	for (i = 0; i < pair; i++)
	{
		value = stack2[i];
		stackUp(value);
	}

	for (i = 0; i < odd; i++)
	{
		value = stack3[i];
		stackUp(value);
	}
}

int main()
{
	initialize();
	printf("The stack has %d positions\n\n", size);
	fullStack();

	do
	{
		printf("Insert a value in position %d: ", i);
		scanf("%d", &value);
		stackUp(value);
		i++;
	} while (i < size);

	printf("\nOriginal stack: ");

	for (i = 0; i < top + 1; i++)
	{
		printf("%d ", stack[i]);
	};

	emptyStack();

	arrange();

	printf("\nArranged stack: ");

	for (i = 0; i < top + 1; i++)
	{
		printf("%d ", stack[i]);
	};

	showTop();

	printf("\n\n");
	return 0;
}