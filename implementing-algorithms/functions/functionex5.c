#include <stdio.h>
double average(double, double, double);
int main()
{
	double n1, n2, n3, value;
	printf("Enter any three numbers to find the average: ");
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	value = average(n1, n2, n3);
	printf("The average of two numbers %.2lf, %.2lf and %.2lf is %.2lf", n1, n2, n3, value);
	return 0;
}
double average(double a, double b, double c)
{
	double avg;
	avg = (a + b + c) / 3;
	return avg;
}