#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, rem, n;
	int palin = 0;
	printf("enter a number to check for palindrome: ");
	scanf("%d", &num);
	n = num;
	while (n != 0)
	{
		rem = n % 10;
		palin = palin * 10 + rem;
		n = n / 10;
	}
	if (palin == num)
	{
		printf("The number is palindrome\n.");
	}
	else
	{
		printf("The number is not palindrome\n");
	}
}
