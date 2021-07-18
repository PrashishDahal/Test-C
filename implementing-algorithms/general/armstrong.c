#include <stdio.h>
#include <stdlib.h>
int main()
{
	//checking the armstrong number of 3 digits
	int x, rem, num, n;
	int result = 0;

	//taking input from the user
	printf("enter the 3 digit number you wanna check: ");
	scanf("%d", &n);
	num = n;
	for (x = 0; x < num; x++)
	{
		rem = num % 10;											 //taking out the remainder
		result = result + (rem * rem * rem); //cubing the remainder and keeping it in result
		num = num / 10;											 //excluding the last digit of the number
	}

	if (result == n)
	{
		printf("It is an armstrong number.\n");
	}
	else
	{
		printf("It is not an armstrong number.\n");
	}

	return 0;
}