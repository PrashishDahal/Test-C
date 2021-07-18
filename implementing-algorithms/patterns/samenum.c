//11111
//22222
//33333
//44444
//55555
#include <stdio.h>

int main()
{
	int i, j, n;
	printf("enter the no of rows you want: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			printf("%d", i);
		}
		printf("\n");
	}

	return 0;
}