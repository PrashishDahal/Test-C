#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int count = 0, i;
	printf("enter a string:");
	fgets(str, 100, stdin);
	for (int i = 1; i < strlen(str); i++) //the function strlen returns the length of string
	{
		if (str[i] != ' ')
			count++;
	}
	printf("the number of characters in the string is %d.\n", count);
	return 0;
}