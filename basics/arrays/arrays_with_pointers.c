#include <stdio.h>

int main()
{
	int marks[5];
	int *ptr;
	// ptr = &marks[0];
	ptr = marks;
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the value of student %d:  ", i + 1);
		scanf("%d", ptr);
		ptr++;
	}

	for (i = 0; i < 5; i++)
	{
		printf("The value of student %d is %d.\n ", i + 1, marks[i]);
	}
	return 0;
}
