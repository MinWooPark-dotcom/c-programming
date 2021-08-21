#include <stdio.h>

int main(void)
{
    extern int num1;
    extern int num2;
    extern int num3;

    printf("Value of num1: %d \n", num1);
    printf("Value of num2: %d \n", num2);
    printf("Value of num3: %d \n", num3);
    printf("Additional results: %d \n", num1 + num2 + num3);
}