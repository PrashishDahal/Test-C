#include <stdio.h>
// int sum(int , int);
int sum(int c, int d); //this is just a prototype
int main()
{
	int value;
	value = sum(2, 4);
	printf("%d\n", value);
	return 0;
}
int sum(int a, int b) //this two variables has to same
{
	int add = a + b; //this two variables has to same
	return add;
}