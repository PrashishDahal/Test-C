#include <stdio.h>

int main()
{
	printf("\""); //printing the double quotation("") without \n gives error
	printf("\\"); //backslash
	printf("\'"); //apostrophe
	printf("\?"); //question mark
	printf("\t"); // horizontal tab
	printf("\n"); // new line
	printf("\v"); // vertical tab
	return 0;
}