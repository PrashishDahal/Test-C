#include <stdio.h>

int main()
{
    int a = 10;
    int *p;
    p = &a;
    printf("%d\n", p);
    printf("the size of integer is %d bytes\n", sizeof(int));
    printf("%d\n", p + 1);
    printf("The address p is %d\n", p);
    printf("The value at address p is %d\n", *p);
    printf("The address p+1 is %d\n", p + 1);
    printf("The value at address p+1 is %d\n", *(p + 1));

    return 0;
}