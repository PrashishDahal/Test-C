#include <stdio.h>
void change(int);
int main()
{
	int b = 25;
	printf("the inital value of b is %d\n", b);
	change(b);
	printf("the changed value of b is %d\n", b); // the value of b doesnot change
	return 0;									 //as a copy of b is passed to change function
}
void change(int a)
{
	a = 7;
}
