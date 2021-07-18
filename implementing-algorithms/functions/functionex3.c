#include <stdio.h>
int oddEven();
void main()
{
	int value;
	value = oddEven();
	if (value == 1)
	{
		printf("the number is even\n");
	}
	else if (value == 0)
	{
		printf("the number is odd\n");
	}
}
int oddEven()
{
	int n, rem;
	printf("enter a number to be checked: ");
	scanf("%d", &n);
	rem = n % 2;
	if (rem == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}