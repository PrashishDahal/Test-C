//*
//***
//*****
//*******

#include <stdio.h>
void pattern(int);
int main()
{
	int n;
	printf("enter how many lines you want to print: ");
	scanf("%d", &n);
	pattern(n);
	return 0;
}
void pattern(int x)
{
	if (x == 1)
	{
		printf("*\n");
		return;
	}
	else if (x == 0)
	{
		printf("put a valid number.");
	}
	pattern(x - 1);
	for (int i = 0; i < (2 * x - 1); i++)
	{
		printf("*");
	}
	printf("\n");
}