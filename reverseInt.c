#include<stdio.h>
#include<stdlib.h>
int main()
{     
  int n,num,l;
	int rev=0;
  printf("enter the integer you want to reverse: ");
  scanf("%d",&num);
	
  do{
    l = num%10;
    rev = rev*10 + l;
    num = num/10;
  }
	while (num!=0);	
	printf("the reverse of number %d is %d\n.", num, rev);

  return 0;
}