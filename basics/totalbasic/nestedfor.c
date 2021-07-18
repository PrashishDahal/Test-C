// understanding the nested for loop
#include <stdio.h>

int main()
{
	int row, columns;
	for (row = 1; row <= 5; row++) //first loop

	/* for each value of row in outer loop
	the inner loop completes its iteration
	*/

	{
		for (columns = 1; columns <= row; columns++) //second loop
		{
			printf("A");
		}
		printf("\n");
	}

	return 0;
}