// finding area using symbolic constant
#include <stdio.h>
// #define LENGTH 50
// #define BREADTH 10
#define PI 3.14286
int main()
{
  // printf("The area of the square is: %d\n",LENGTH*BREADTH); // only using constants

  
  int r, area;
  printf("enter radius of the circle: ");
  scanf("%d",&r);
  area = 2*PI*r;
  printf("The area of circle is: %d\n",area);
  return 0;
}