#include <stdio.h>
int main(void)
{
    int num1 = 10;
    int num2 = -10;

    int result1;
    int result2;

    result1 = num1 >> 1;
    result2 = num2 >> 1;

    printf("Results in bit units >> operations %d \n", result1);
    printf("Results in bit units >> operations %d \n", result2);

    return 0;
}

// Results in bit units >> operations 5 
// Results in bit units >> operations -5 
// Each time you move a value to the right by one bit, two is divided