#include <stdio.h>

int main()
{
	int radius;
	float area, pi = 3.14;
	printf("enter the radius of circle: ");
	scanf("%d", &radius);
	area = (pi * radius * radius);
	printf("the area of circle is: %0.2f\n", area);
	// modified to find volume of cylinder
	int height;
	printf("the height of cylinder: ");
	scanf("%d", &height);
	float volume = (pi * radius * radius * height);
	printf("the volume of cylinder is %0.2f\n", volume);
	return 0;
}