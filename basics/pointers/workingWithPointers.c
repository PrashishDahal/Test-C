#include <stdio.h>

int main()
{
	int a;
	int *p;
	printf("a=%d\n", a);
	a = 10;
	p = &a;
	printf("%p\n", p);
	printf("%d\n", *p); //*p- value at address pointed by p
	printf("%p\n", &a);
	printf("a=%d\n", a); // a=10
	*p = 12;			 //dereferencing
	printf("a=%d\n", a); //a=12
	return 0;
}