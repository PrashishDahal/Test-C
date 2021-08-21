#include <stdio.h>
void main()

{

	int a = 5;

	int *p = &a; //p stores the address of a

	printf("%d, %u, %p\n", *p, a, p); //%p is is used to print a pointer value
}
