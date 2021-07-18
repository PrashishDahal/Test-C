#include <stdio.h>
#include <math.h>
double square(double);
int main()
{
	double n, value;
	printf("enter a number: ");
	scanf("%lf", &n);
	value = square(n);
	printf("the square of given number is %.2f\n", value);
	return 0;
}
double square(double n)
{
	//int sq;
	return pow(n, 2);
	//return (n*n);
	//return sq;
}