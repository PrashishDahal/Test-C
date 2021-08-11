#include <stdio.h>
int sum(int);
int main()
{
	int n, value;
	printf("enter the positive number up to which you want the sum: ");
	scanf("%d", &n);
	value = sum(n);
	printf("the sum of first %d numbers is: %d\n", n, value);
	return 0;
}
int sum(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else
	{
		return x + sum(x - 1);
	}
}
