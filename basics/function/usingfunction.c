#include <stdio.h>
void morning()
{
	printf("Good morning dude.\n");
}
void afternoon();
void night()
{
	printf("Good night babe.\n");
}
int main()
{
	morning();
	morning();
	afternoon();
	night();
	return 0;
}
void afternoon()
{
	printf("Good afternoon guys.\n");
}