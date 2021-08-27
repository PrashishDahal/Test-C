#include <stdio.h>

int main()
{
	for (int i = '\v'; i < 'o'; i++) // \v and o are 100 values apart   11 and 111
	{
		char d = i - '\v';
		printf("%d  ", ++d);
	}
	return 0;
}