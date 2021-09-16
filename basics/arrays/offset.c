#include <stdio.h>

int main()
{
	int data[5] = {1, 2, 3, 4, 5};
	int i;
	printf("Array address: %p\n", data); //Address of the array is the same as address of zero index
	for (i = 0; i <= 5; i++)
	{
		printf("Array[%d] = %p\n", i, &data[i]); //prints the address of each index
	}
	printf("Size is : %ld\n", sizeof(short));

	return 0;
}