#include <stdio.h>
int main()
{
	double a, b;
	printf("enter two numbers:");
	scanf("%lf%lf", &a, &b); //does not quite work for 0
	printf("before swapping:a=%.2lf,b=%.2lf\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	// a = a * b;
	// b = a / b;
	// a = a / b;
	printf("after swapping: a=%.2lf,b=%.2lf\n", a, b);
	return 0;
}