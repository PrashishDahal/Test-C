#include <stdio.h>
long int fact(int n);
int main()
{
	int n;
	printf("Enter a positive number to find the factorial: ");
	scanf("%d", &n);
	printf("The factorial of %d is %ld\n", n, fact(n));
	return 0;
}
long int fact(int a)
{
	printf("calling factorial(%d)\n", a); // to check the flow of calling process
	if (a == 0 || a == 1)
	{
		return 1;
	}
	else
	{
		return a * (fact(a - 1));
	}

	//we can use this as well....
	// if (a >= 1)  but if we use (a>1) the function will always return 1
	// {            as else returns value 1 whenever a=1
	// 	return a * (fact(a - 1)); //the function is calling itself
	// }
	// else
	// {
	// 	return 1; //a base
	// }
}