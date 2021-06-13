#include <stdio.h>
int main()
{
	int a = 7 + 5;
	int x = 7;
	int b = 3.5;	 // int does not take decimal values
	float c = 5.9; //correct way
	char d = 'd';
	printf("%d\n%d\n%.2f\n%c\n%d\n", a, b, c, d, x + 5);
	return 0;
}