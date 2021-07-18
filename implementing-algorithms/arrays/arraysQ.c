#include <stdio.h>
#include <stdlib.h>
int main()
{
	int length;
	printf("enter the number of elements you want to put in the array: ");
	scanf("%d", &length);
	int num[length];
	for (int i = 0; i < length; i++)
	{
		printf("enter value for position %d:  ", i);
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < length; i++)
	{
	}
	return 0;
}