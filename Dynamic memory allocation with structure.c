#include <stdio.h>
#include <stdlib.h>

struct ST_DATA
{
	char name[40];
	float salary;
	/* a structure inside another structure */
	struct birth
	{
		int year;
		int month;
		int day;
	} birth_date;
};

int main()
{
	struct ST_DATA *p;
	p = (struct ST_DATA *)malloc(sizeof(struct ST_DATA));

	if (p)
	{
		printf("\nInsert your name -> ");
		scanf("%s", p->name);
		printf("Insert your salary -> ");
		scanf("%f", &p->salary);
		printf("Insert your birth: \n");
		printf("\nDay: ");
		scanf("%d", &p->birth_date.day);
		printf("Month: ");
		scanf("%d", &p->birth_date.month);
		printf("Year: ");
		scanf("%d", &p->birth_date.year);
	}

	free(p);
}
