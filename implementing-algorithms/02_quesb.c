#include <stdio.h>

int main()
{
	float pi = 3.141, radius = 7, area, volume;
	area = pi * radius * radius;
	printf("area of circle is %.2f\n", area);
	float height = 5.5;
	volume = area * height;
	printf("volume of cylinder is %.2f\n", volume);
	return 0;
}