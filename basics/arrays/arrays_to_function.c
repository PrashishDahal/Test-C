#include <stdio.h>

//using pointer variable

// void printArray(int *ptr, int n)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("The value of element %d is %d.\n", i + 1, *(ptr + i));
// 	}
// }

// using array variable

void printArray(int ptr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("The value of element %d is %d.\n", i + 1, (ptr[i]));
	}
	ptr[2] = 33;
}
int main()
{
	int arr[] = {1, 23, 32, 17, 7};
	printArray(arr, 5);
	printf("%d", arr[2]);

	return 0;
}