#include <stdio.h>

int main()
{
	int file_manager = 2;		  //here first 8 characters are same so it is not a good idea
	int file_management = 1;	  //to use the type of identifiers as come compilers are
	printf("%d\n", file_manager); //not able to distinguish between them
	printf("%d\n", file_management);
	return 0;
}