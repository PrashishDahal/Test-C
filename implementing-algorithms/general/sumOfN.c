#include <stdio.h>

int main()
{
	int c, n, i, sum = 0;
	printf("enter how many numbers you want to add: ");
	scanf("%d", &c);
	printf("enter the numbers you want to add: ");
	for (i = 1; i <= c; i++)
	{
		scanf("%d", &n);
		sum += n;
		printf("%d", sum);
	}
	return 0;
}