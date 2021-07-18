#include <stdio.h>
int main()
{
    //declaring the variables
    char color[20];
    char pluralNoun[20];
    char personNameF[20];
    char personNameL[20];

    //taking input from the user
    printf("enter a color: ");
    scanf("%s", color);
    printf("enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("enter a person's full name: ");
    scanf("%s %s", personNameF, personNameL);

    //printing out the combination
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I have a huge crush on %s %s\n", personNameF, personNameL);
    return 0;
}