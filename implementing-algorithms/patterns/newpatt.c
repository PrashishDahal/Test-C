/* 5
   54
   543
   5432
   54321*/

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("enter the no of rows you want to print: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {

        for (j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}