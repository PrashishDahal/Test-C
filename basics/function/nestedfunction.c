#include <stdio.h>
void afternoon();
void morning()
{
	printf("Good morning dude.\n");
	afternoon();
}
void night()
{
	printf("Good night babe.\n");
}
int main()
{
	morning();
	return 0;
}
void afternoon()
{
	printf("Good afternoon guys.\n");
	night();
}