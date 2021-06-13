#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    //generates new sequence of random numbers every time
    srand(time(0));
    for (int i=0; i<5; i++)
    printf(" %d ",rand());
    return 0;
}