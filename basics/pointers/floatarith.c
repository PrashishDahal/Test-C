#include <stdio.h>

int main()
{
	float a = 7.7;
	float *p;
	p = &a;
	printf("The value of a at address p is %.2f\n", a);
	printf("The value of a at address p is %.2f\n", *p);
	printf("The address of a is %u\n", &a);
	printf("The address of a is %u\n", p);
	*p = 7.1;											 // (dereferencing)
	printf("The value of a at address p is %.2f\n", a);	 //the value
	printf("The value of a at address p is %.2f\n", *p); //changes
	printf("The address p is %u\n", p);
	printf("the size of float is %d bytes\n", sizeof(float));
	printf("the address p+1 is %u\n", p + 1);
	return 0;
}