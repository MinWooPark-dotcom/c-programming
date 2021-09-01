#include <stdio.h>

#define MUL(x, y) x*y

int main(void)
{
    int a, b;
    double c, d;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("%d * %d = %d \n", a, b, MUL(a, b));

    printf("Enter two real numbers: ");
    scanf("%lf %lf", &c, &d);
    printf("%lf * %lf = %lf \n", c, d, MUL(c, d));

    return 0;
}