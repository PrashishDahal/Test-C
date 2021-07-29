#include <stdio.h>
int fib(int);
int main()
{
	int n, value;
	printf("Enter the position of the number you want; ");
	scanf("%d", &n);
	printf("considering the series starts from 0 as.....0,1,1,2,3,5,8,....\n");
	value = fib(n);
	if (value < 0)
	{
		printf("Enter a valid position.\n");
	}
	else
	{
		printf("The required number of %dth position is %d\n.", n, value);
	}
	return 0;
}
int fib(int x)
{
	if (x == 0)
	{
		return -1;
	}

	else if (x == 1)
	{
		return 0;
	}
	else if (x == 2)
	{
		return 1;
	}
	else
	{
		return fib(x - 1) + fib(x - 2);
	}
}