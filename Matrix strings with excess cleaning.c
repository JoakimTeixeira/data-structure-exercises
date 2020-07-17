#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int x, ch;
	char buffer[20];
	char stringMatrix[3][20];
	char *result;

	for (x = 0; x < 3; x++)
	{
		sprintf(buffer, "\nInsert name %d: ", x + 1);
		puts(buffer);

		fgets(stringMatrix[x], 20, stdin);
		strtok(stringMatrix[x], "\n");

		if (strlen(stringMatrix[x]) == 20 - 1)
		{
			while ((ch = getchar()) != '\n' && ch != EOF)
				;
		}
	}

	strcpy(buffer, "\nConcatenaded");
	strcat(buffer, " buffer:");
	puts(buffer);

	for (x = 0; x < 3; x++)
	{
		puts((stringMatrix[x]));
	}

	x = strlen(buffer);
	sprintf(buffer, "\nThe buffer size was: %d", x);
	puts(buffer);

	printf("\nOverriding buffer...");
	strcpy(buffer, "My new string");
	printf("\nThe new buffer string is: ");
	puts(buffer);
	printf("\n");

	printf("Searching for char i on buffer...\n");
	result = strchr(buffer, 'i');
	printf("Position of char i: %ld\n", (result - buffer + 1));

	return 0;
}
