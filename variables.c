#include <stdio.h>
#include <stdlib.h>
int main ()
{
    char characterName[]="Arthur";
    int characterAge= 19;
    printf("There was a boy named %s\n",characterName);
    printf("He was %d years old\n",characterAge);
    characterAge= 22;
    printf("He really liked the name %s but did not like the fact that he was just %d years old\n",characterName,characterAge);
    return 0;
}


