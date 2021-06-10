/* a program that generates a random number 
and asks the user to guess it. 
If the player's guess is higher than the actual number,
then the program asks for a lower no.
Similarly if the user's guess is lower, 
it asks for a higher no until he guesses the no 
and finally when the user guess the correct number
the program displas the number of guesses user took 
to make the right guess*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
	int n;
	int guess, nguess = 1;
	srand(time(0));
	n = rand() % 100 + 1; //Generates ramdom number between 1-100

	//keep running the loop until the number is guessed

	do
	{
		printf("Guess a number 1-100\n");
		scanf("%d", &guess);

		if (guess > n)
		{
			printf("Please enter the lower please\n");
		}
		else if (guess < n)
		{
			printf("Please enter the higher number\n");
		}
		else
		{
			printf("Congrats! You guessed it in %d attempts\n", nguess);
		}
		nguess++;
	} while (guess != n);
	printf("The number is %d\n", n);

	return (0);
}