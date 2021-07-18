/* adds only the odd numbers*/

#include <stdio.h>
int main()
{
	//declaring the required variables
	int a, b, c, d, e;
	int sum = 0;

	//taking input from the user
	printf("enter the first number: ");
	scanf("%d", &a);
	printf("enter the second number: ");
	scanf("%d", &b);
	printf("enter the third number: ");
	scanf("%d", &c);
	printf("enter the fourth number: ");
	scanf("%d", &d);
	printf("enter the fifth number: ");
	scanf("%d", &e);

	//checking if the input number is odd or not and adding//
	if (a % 2 == 1)
	{

		sum = sum + a;
	}
	if (b % 2 == 1)
	{
		sum = sum + b;
	}
	if (c % 2 == 1)
	{
		sum = sum + c;
	}
	if (d % 2 == 1)
	{
		sum = sum + d;
	}
	if (e % 2 == 1)
	{
		sum = sum + e;
	}
	printf("the sum of all the odd values is %d\n", sum);
}
