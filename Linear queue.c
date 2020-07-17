#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5

struct element
{
	// value stored by queue elements
	int value;
};

// position pointer
int insertIndex = 0;
int removalIndex = 0;

// queue structure
struct element queue[CAPACITY];

// inserts element in queue insere
void enqueue(struct element e)
{
	if (insertIndex >= CAPACITY)
	{
		// checks whether the index has reached the queue capacity (queue slot)
		printf("\nData structure is full.\n");
	}
	else
	{
		// inserts element in position 0
		queue[insertIndex] = e;
		// updates the index to the next free position
		insertIndex++;
	}
}

// checks if the queue has any elements
int queueIsEmpty()
{
	if (removalIndex >= insertIndex)
		return 1;
	else
		return 0;
}

// returns the next element to be served by the queue
struct element dequeue()
{
	// checks that the queue is not empty
	if (!queueIsEmpty())
		// tracks the insertion index
		return queue[removalIndex++];
};

void printQueue()
{
	int x;

	// checks if the queue is empty to print
	if (queueIsEmpty())
		printf("Data structure is empty");
	else
	{
		// checks the attendance of elements of the queue
		for (x = removalIndex; x < insertIndex; x++)
		{
			// printing of queue elements
			printf("%d ", queue[x].value);
		}

		printf("\n");
	}
}

void answer(struct element e)
{
	// print queue serviced value
	printf("\nRemove element %d:\n", e.value);
}

int main()
{
	// declare queue elements (using struct to store value)
	struct element e1, e2, e3, e4, e5, e6, temp;

	// inserts values
	e1.value = 1;
	e2.value = 2;
	e3.value = 3;
	e4.value = 4;
	e5.value = 5;
	e6.value = 6;

	// rows values
	enqueue(e1);
	enqueue(e2);
	enqueue(e3);
	enqueue(e4);
	enqueue(e5);
	enqueue(e6);

	printQueue();

	// validation to see if there is anything in the queue
	if (!queueIsEmpty())
	{
		// gets the 1st element to be served
		temp = dequeue();
		// serve the temp variable
		answer(temp);
	}

	printQueue();

	return 0;
}