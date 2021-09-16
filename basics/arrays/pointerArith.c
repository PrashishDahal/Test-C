#include <stdio.h>

int main()
{
	int i = 34;
	int *ptr = &i;
	printf("The value of ptr before is %p\n", ptr);
	ptr++;
	// ptr--;
	printf("The value of ptr after is %p\n", ptr); //increases by 4 as size of single integer is 4 bytes
	return 0;
}