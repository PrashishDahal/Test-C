// with no return type and no arguments
#include <stdio.h>
void factorial();
int main()
{
	factorial();
	return 0;
}
void factorial()
{
	int i, n, fact = 1;
	printf("the number you want to find the factorial of: ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			fact *= i;
		}
		printf("the factorial of %d is %d\n", n, fact);
	}
	else
	{
		printf("the factorial of %d is infinity.", n);
	}
}