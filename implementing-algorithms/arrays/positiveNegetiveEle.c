#include <stdio.h>

int main()
{
	int n;
	int positive = 0;
	int negative = 0;

	// taking the input from the user
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
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

	// counting the number positive and negative elements

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			positive++;
		}
		else if (arr[i] < 0)
		{
			negative++;
		}
	}
	printf("\nThe number of positive elements in this array = %d\n", positive);
	printf("\nThe number of negative elements in this array = %d\n", negative);

	return 0;
}
