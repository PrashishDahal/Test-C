#include <stdio.h>
int fibseries(int);
int main()
{
	int n, i = 0;
	printf("enter the number of terms you want: ");
	scanf("%d", &n);
	printf("fibonassi series:\n");

	for (i = 0; i <= n; i++)
	{
		printf("%d\n", fibseries(i));
	}

	return 0;
}

int fibseries(int x)
{
	if (x == 0)
		return 0;
	else if (x == 1)
		return 1;
	else
		return (fibseries(x - 1) + fibseries(x - 2));
}
