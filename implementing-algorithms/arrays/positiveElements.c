#include <stdio.h>

int main()
{
	int n, arr[n];
	int count = 0;

	// taking the input from the user
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	printf("Enter the elements of the array:");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	// printing the elements of the array
	printf("The elements you input are....\n");
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}

	// counting the number positive elements

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			count++;
		}
	}
	printf("\nThe number of positive elements in this array = %d\n", count);
	return 0;
}
