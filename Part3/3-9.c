#include <stdio.h>
int main(void)
{
    int a = 3;
    int b = 4;

    printf("The value of a is %d \n", a);
    printf("The value of b is %d \n", b);

    printf("Starting address of varibale a: %x \n", &a);
    printf("Starting address of variable b: %x \n", &b);

    return 0;
}