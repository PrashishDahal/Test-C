// WAP to print the address of a variable and
// use the address to get the value of given variable

#include <stdio.h>

int main()
{
	int a = 7;
	int *p;
	p = &a;
	printf("The address of the variable is: %p\n", p);
	printf("The address of the variable is: %p\n", &a);
	printf("The value of the variable is: %d\n", *p);

	return 0;
}