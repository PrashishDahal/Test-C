#include <stdio.h>

int main()
{
    int n, c, i;
    printf("enter the number you want the multiplication table of: ");
    scanf("%d", &n);
    printf("specify up to how many numbers you want the table to show: ");
    scanf("%d", &c);
    for (i = 1; i <= c; i++)
    {
        printf("%d*%d = %d\n", n, i, n * i);
    }
    return 0;
}