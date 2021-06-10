#include <stdio.h>
#include <stdlib.h>
int main()
{
	//initializing the array
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7};

	//finding size of the array
	int length = sizeof(num) / sizeof(num[0]);

	//printing the number of elements
	printf("Number of elements in the array: %d\n", length);

	return 0;
}