#include <stdio.h>
#include <math.h>
int main()
{
    int length;
    float volume;
    printf("enter the length of a side of square: ");
    scanf("%d", &length);
    volume = pow(length, 2); //pow returns floating value
    printf("volume of square is %.2f", volume);
    return 0;
}