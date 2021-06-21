#include <stdio.h>

int add(int x, int y)
{
    int sum;
    sum = x + y;
    return (sum);
}

int sub(int x, int y)
{
    return (x - y);
}

int prod(int x, int y)
{
    return (x * y);
}

int div(int x, int y)
{
    return (x / y);
}

int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("the addition is:%d\n", add(a, b));
    printf("the subtraction is: %d\n", sub(a, b));
    printf("the multiplication is: %d\n", prod(a, b));
    printf("the division is: %d\n", div(a, b));

    return 0;
}