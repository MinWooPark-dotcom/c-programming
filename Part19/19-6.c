#include <stdio.h>

#define MUL(x, y) x*y
int mul(int x, int y);

int main(void)
{
    int a, b;
    double c, d;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Macro function call result: %d \n", MUL(a+1, b+1));
    printf("Standard function call result: %d \n", mul(a+1, b+1));

    return 0;
}

int mul(int x, int y)
{
    return x * y;
}