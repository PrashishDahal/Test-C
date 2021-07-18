#include <stdio.h>
#include <stdlib.h>
int main()
{
	// printing the fibonassi series
	int a = 0, b = 1, c = 0;
	int x, n;
	printf("enter number of terms you want to display:");
	scanf("%d", &n);
	printf("%d\n%d\n", a, b);
	for (x = 0; x < n - 2; x++)
	{

		c = (a + b);
		//printf("%d\n",c);
		a = b;
		b = c;
		printf("%d\n", c);
	}

	return 0;
}