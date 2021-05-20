#include <stdio.h>
#define PI 3.141

int main()
{
    //declaring the variables
    float r;
    float area;

    /* taking radius as input from the user*/
    printf("enter radius of desired circle: ");
    scanf("%f",&r);

    //calculating the area of circle//
    area = (PI*(r*r));
    printf("area of circle is %.2f\n",area);
    
    return 0;

}