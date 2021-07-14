// with no return type but with arguments
#include <stdio.h>
void factorial(int n);
int main()
{
	int n;
	printf("enter the number to find the factorial: ");
	scanf("%d", &n);
	factorial(n); // factorial (any number)
	return 0;
}
void factorial(int n)
{
	if (n >= 0)
	{
		int fact = 1, i;
		for (i = 1; i <= n; i++)
		{
			fact *= i;
		}
		printf("the factorial of %d is %d\n", n, fact);
	}
	else
	{
		printf("the factorial of %d is infinity.\n", n);
	}
}