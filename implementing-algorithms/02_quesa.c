#include <stdio.h>

int main()
{
	float l, b, area;
	printf("enter the length of the rectangle: ");
	scanf("%f", &l);
	printf("enter the breadth of the rectangle: ");
	scanf("%f", &b);
	area = l * b;
	printf("the area of req rectangle is %.2f", area);
	return 0;
}