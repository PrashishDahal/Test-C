#include <stdio.h>
void wrongSwap(int a, int b);
void swap(int *a, int *b);
int main()
{
	int a = 5, b = 7;
	printf("The value of a and b before swap is %d and %d\n", a, b);
	wrongSwap(a, b); //called by value so doesn't work
	swap(&a, &b);	 //called by reference so it works
	printf("The value of a and b after swap is %d and %d\n", a, b);
	return 0;
}
void wrongSwap(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
}
void swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
