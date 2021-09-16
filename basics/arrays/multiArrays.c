#include <stdio.h>

// create a multi-dimentional array to input marks of 2 students on 5 subjects

int main()
{
	int students = 2;
	int subjects = 5;
	int marks[2][5];
	for (int i = 0; i < students; i++)
	{
		for (int j = 0; j < subjects; j++)
		{
			printf("Enter the marks of student %d in subject %d:  ", i + 1, j + 1);
			scanf("%d", &marks[i][j]);
		}
	}

	for (int i = 0; i < students; i++)
	{
		for (int j = 0; j < subjects; j++)
		{
			printf("\nThe marks of student %d in subject %d is %d.\n  ", i + 1, j + 1, marks[i][j]);
		}
	}
	return 0;
}