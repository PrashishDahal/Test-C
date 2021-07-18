// A
// BA
// CBA
// DCBA
// EDCBA
//  ..
#include <stdio.h>

int main()
{
	int i, j, n;
	printf("enter the no of rows you want to print: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = i; j >= 1; j--)
		{
			printf("%c", j + 64);
		}
		printf("\n");
	}
	return 0;
}