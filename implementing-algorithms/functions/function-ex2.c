#include <stdio.h>
#include <stdlib.h>
void swap(double, double); //parameters
int main()
{
	double a, b;
	printf("enter two numbers to swap: ");
	scanf("%lf%lf", &a, &b);
	printf("before swapping:a=%.2lf,b=%.2lf\n", a, b);
	swap(a, b); //arguments
	return 0;
}
void swap(double n1, double n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("after swapping:a=%.2lf,b=%.2lf\n", n1, n2);
}