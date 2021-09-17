#include <stdio.h>
// multiplication table of any number
int main()
{
  int mul[10];
  int n;
  printf("Enter the number you want the table of:  ");
  scanf("%d", &n);
  for (int i = 0; i < 10; i++)
  {
    mul[i] = n * (i + 1);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d*%d = %d\n", n, i + 1, mul[i]);
  }
  return 0;
}