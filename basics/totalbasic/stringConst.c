// string constants
// contain any number of consecutive characters including none.
// enclosed in double quotation("") marks

#include <stdio.h>


int main()
{
  char a[]= "green";  //the compiler automatically adds the null     character (\0) at the end of every string constant in this declaration.
  printf("%s\n",a);

  char b[]="Welcome to the goodnight.";
  printf("%s\n",b); 

  char c[]= "Line1\nLine2\nLine3\n";
  printf("%s",c);

  //some special characters can also be used as an string constant
  char d[]="\t To continue press\"RETURN\" key\n";
  printf("%s",d);
  return 0;
}
