//AAAAA
//AAAA
//AAA
//AA
//A
#include <stdio.h>

int main()
{
	int i, j;
	for (i = 5; i >= 1; i--)
	//for (i = 1; i <= 5; i++) //(for printing the exact opposite pattern)
	{
		for (j = 1; j <= i; j++)
		{
			printf("A");
		}
		printf("\n");
	}
	return 0;
}