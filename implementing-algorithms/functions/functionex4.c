#include <stdio.h>
int primeCom();
int main()
{
	int value;
	value = primeCom();
	if (value == 0)
	{
		printf("The number is composite.\n");
	}
	else
	{
		printf("The number is prime.\n");
	}

	return 0;
}
int primeCom()
{
	int i, n, rem, count = 0;
	printf("enter a number to check for prime or composite: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		rem = n % i;
		if (rem == 0)
		{
			count += 1;
		}
	}
	if (count > 2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}