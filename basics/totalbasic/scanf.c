// taking multiline input
#include <stdio.h>

int main()
{
	char string[128];
	printf("enter a multiline string(enter[;]to end the end the input)\n");
	scanf("%[^;]s", string);
	printf("input string = %s\n", string);
	return 0;
}
