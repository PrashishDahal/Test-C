#include <stdio.h>
void natural();
int main()
{
	int n = 1;
	printf("the first 50 natural numbers is: \n");
	natural(n);
	return 0;
}
void natural(int n)
{
	if (n <= 50)
	{
		printf("%d\n", n);
		natural(n + 1);
	}
}