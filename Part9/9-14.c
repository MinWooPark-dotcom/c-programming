#include <stdio.h>
int factorial(int n);

int main(void)
{
    int a;
    int result;

    printf("Enter integer: ");
    scanf("%d", &a);

    result = factorial(a);
    printf("%d factorial is %d \n", a, result);
    return 0;
}

int factorial(int n)
{
    if (n<=1)
        return 1;
    else
        return n * factorial(n - 1);
}