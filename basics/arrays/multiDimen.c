#include <stdio.h>

//enter the marks of n students on m subjects

int main()
{
	int n, m;
	printf("Enter the number of students: ");
	scanf("%d", &n);
	printf("Enter the number of subjects: ");
	scanf("%d", &m);
	int marks[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("Enter the marks of student%d in subject%d:  ", i + 1, j + 1);
			scanf("%d", &marks[i][j]);
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("\nThe marks of student%d in subject%d is %d\n  ", i + 1, j + 1, marks[i][j]);
		}
	}
	return 0;
}