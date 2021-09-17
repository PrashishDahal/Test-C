#include <stdio.h>

int main()
{
	int arr[7] = {1, 2, 3, 4, 5, 6, 7};
	printf("\nThe original order is.......\n");
	for (int i = 0; i < 7; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n\n");

	for (int i = 0; i < (7 / 2); i++)
	{
		int temp;
		temp = arr[i];
		arr[i] = arr[7 - i - 1];
		arr[7 - i - 1] = temp;
	}

	printf("\nThe reverse order is:\n  ");
	for (int i = 0; i < 7; i++)
	{
		printf("\nThe value of %d element is %d\n", i, arr[i]);
	}

	return 0;
}