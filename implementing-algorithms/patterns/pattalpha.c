// EDCBA  // 54321
// EDCB   // 5432
// EDC    // 543
// ED     // 54
// E      // 5

#include <stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 5; j >= i; j--)
		{
			printf("%c", j + 64);
		}
		printf("\n");
	}
	return 0;
}