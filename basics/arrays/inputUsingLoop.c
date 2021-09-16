#include <stdio.h>

int main()
{
	int marks[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the value of marks for student %d: ", i + 1);
		scanf("%d", &marks[i]);
		printf("marks[%d]=%d\n", i, marks[i]); //indexing starts from zero
	}

	for (int i = 0; i < 5; i++)
	{
		printf("The value of marks of student %d is %d\n", i + 1, marks[i]);
	}

	return 0;
}