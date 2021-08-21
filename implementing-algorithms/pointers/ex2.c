// WAP to print the address of a variable before and after passing it to a function

#include <stdio.h>
void pointer(int);
int main()
{
	int i = 7;
	int *ptr = &i;
	printf("The address of i before calling the function is %p.\n", ptr);
	pointer(i);
	return 0;
}
void pointer(int x)
{
	printf("The address of x after calling the function is %p.\n", &x);
}