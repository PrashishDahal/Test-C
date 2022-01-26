// use symbolic constant
//it allows a name to appear in place of a numeric, character or string constants 
// usually defined at the beginning of the program
#include <stdio.h>
#define CONSTANT 6.02
int main()
{
	int c ;
	// printf("CONSTANT = %d\n",c); //"CONSTANT = 0"
	printf("CONSTANT = %.2f\n",CONSTANT); //"CONSTANT = 6.02"
  
  return 0;
}