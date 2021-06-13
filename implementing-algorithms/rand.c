#include <stdio.h>
#include <stdlib.h>
int main()
{
    //genereting same sequence of random numbers on every program run

    int i;
    for(i=0; i<=5; i++)
    printf("  %d  ", rand());
    return 0;

}