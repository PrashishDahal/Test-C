#include <stdio.h>
#include <math.h>
int main()
{
	int length;
	float area;
	printf("enter the length of side of square:");
	scanf("%d", &length);
	area = pow(length, 2);
	printf("the area of square is: %.2f\n", area);
	return 0;
}