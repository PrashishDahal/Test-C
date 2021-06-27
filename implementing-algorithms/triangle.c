#include <stdio.h>

int main()
{
	int i, j, k, n;
	printf("enter the no of rows: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		//printing the spaces in the pattern
		for (k = 1; k < i; k++)
		{
			printf(" ");
		}
		for (j = i; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}