#include <stdio.h>
void display(); //function prototype
int main()
{
	//int a;
	printf("Initializing display function\n");
	display(); //calling the function
	display(); //call it any number of times
	printf("Work completed\n");
	return 0;
}
void display() // function definition
{
	printf("I am displaying something.\n");
}