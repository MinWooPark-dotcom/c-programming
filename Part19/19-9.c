#include <stdio.h>

#define OUTPUT(a, b, c) a ## b ## c // Define macro function that combine tokens

int main(void)
{
    int a = 3;

    printf("%d \n", a); // 3
    printf("%d \n", OUTPUT(a, =, 5)); // a = 5
    printf("%d \n", a); // 5 

    return 0;
}