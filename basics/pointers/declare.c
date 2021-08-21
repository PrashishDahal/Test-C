#include <stdio.h>

int main()
{
	int i = 77;
	int *j; //declaring int pointer type variable
	j = &i; //j will store the address of i
	int **r;
	r = &j;
	printf("The value of i in decimal is %d and hexadecimal is  %x\n", i, i);
	printf("The value of i is %d\n", *j);
	printf("The value of i is %d\n", *(&i));
	printf("The address of i is %p\n", &i);
	printf("The address of i is %p\n", j);
	printf("The address of j is %p\n", &j);
	printf("The value of j is %p\n", *(&j));
	printf("The address of j is %p\n", r);
	printf("The value of j is %p\n", *r);
	return 0;
}