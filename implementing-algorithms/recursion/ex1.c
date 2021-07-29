#include <stdio.h>
long int factorial(int);
int main()
{
	int n;
	printf("Enter a number to find the factorial:  ");
	scanf("%d", &n);
	printf("the factorial of %d is %ld.\n", n, factorial(n));
	return 0;
}

long int factorial(int x)
{
	if (x > 1)
	{
		return x * factorial(x - 1);
	}
	else
	{
		return 1;
	}
}