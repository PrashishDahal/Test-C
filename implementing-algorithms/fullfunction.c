//with both return type and arguments
#include <stdio.h>
int palin(int);
int main()
{
	int n, result;
	printf("enter a number to check: ");
	scanf("%d", &n);
	result = palin(n);
	if (result == n)
	{
		printf("the number %d is palindrome\n", n);
	}
	else
	{
		printf("the number %d is not palindrome\n", n);
	}

	return 0;
}

int palin(int a)
{
	int b, rem, sum = 0;
	b = a;
	while (b != 0)
	{
		rem = b % 10;
		sum = sum * 10 + rem;
		b = b / 10;
	}
	return sum;
}