/* 54321
   4321
   321
   21
   1 */

#include <stdio.h>

int main()
{
	int rows, columns;
	for (rows = 5; rows >= 1; rows--)
	{
		for (columns = rows; columns >= 1; columns--)
		{
			printf("%d", columns);
		}
		printf("\n");
	}
	return 0;
}