#include <stdio.h>

int main()
{
	int i, j, n;
	printf("enter how many rows you want: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j += 2)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}