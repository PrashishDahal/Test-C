#include <stdio.h>
int fib(int);
int main()
{
	int n;
	printf("Enter the position of the number you want; ");
	scanf("%d", &n);
	printf("considering the series starts from 0 as.....0,1,1,2,3,5,8,....\n");
	printf("The required number of %dth position is %d\n.", n, fib(n));
	return 0;
}
int fib(int x)
{
	if (x >= 2)
	{
		return fib(x - 1) + fib(x - 2);
	}
	else if (x == 1)
	{
		return 1;
	}

	// else
	// {
	// return 0;
	// }
}