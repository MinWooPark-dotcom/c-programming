#include <stdio.h>

extern int a, b;

int main(void)
{
    int result = 0;
    result = a + b;
    printf("Result of addition: %d \n", result);

    return 0;
}