#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	int x, num, n, rem;
	int result = 0;
	long fact;
	printf("enter a number you wanna check: ");
	scanf("%d", &num);
	n = num;
	do
	{
		rem = n % 10;
		fact = 1;
		for (x = 1; x <= rem; x++)
		{
			fact *= x;
		}
		result += fact;
		n /= 10;
	} while (n != 0);
	if (result == num)
	{
		printf("It is a strong number");
	}
	else
	{
		printf("It is not a strong number");
	}
}
