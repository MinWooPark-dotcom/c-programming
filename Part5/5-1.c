#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 3;
    b = a + 5;

    printf("Address of variable a %x \n", &a);
    printf("Address of variable b %x \n", &b);

    printf("Address of variable a %p \n", &a);
    printf("Address of variable b %p \n", &b);

    return 0;
}