//     *
//    **
//   ***
//  ****
// *****
#include <stdio.h>

int main()
{
	int i, j, k, n;
	printf("enter the no of rows you want: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		//printing the spaces
		for (k = i; k < n; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}