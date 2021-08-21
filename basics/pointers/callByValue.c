#include <stdio.h>
int sum(int, int);
int main()
{
	int a = 4, b = 7;
	printf("The value of a and b before function call is %d and %d\n", a, b);
	printf("The value of 4+7 is %d\n", sum(a, b));
	printf("The value of a and b after function call is %d and %d\n", a, b);
	return 0;
}
int sum(int x, int y)
{
	int c;
	c = x + y;
	x = 33; //these variables are
	y = 33; //not the same as above function's variables
	return c;
}