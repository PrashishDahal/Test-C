#include <stdio.h>
#include <stdlib.h>
int main()
{
	double num1, num2;
	printf("Enter first number:");
	scanf("%lf", &num1);
	printf("Enter second number:");
	scanf("%lf", &num2);
	printf("The answer of the operation is %.2f\n", num1 + num2);

	return 0;
}