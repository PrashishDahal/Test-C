#include <stdio.h>
//create an array of 10 numbers and show (ptr+2) points to the 3rd element

int main()
{
	int arr[10];
	//int *ptr = arr;
	int *ptr = &arr[0];
	ptr = ptr + 2;
	if (ptr == &arr[2])
	{
		printf("It points to the 3rd character.\n");
	}
	else
	{
		printf("It does not point to the 3rd character.\n");
	}
	return 0;
}