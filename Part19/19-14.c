#include <stdio.h>

#define CODE 3

int main(void)
{
    double num1 = 3.3, num2 = 1.1;
    double result = 0.0;

    #if (CODE < 0)
        result = num1 + num2;
        printf("Result of addition: %lf \n", result);

    #elif (CODE == 1)
        result = num1 / num2;
        printf("Result of subtraction: %lf \n", result);

    #elif (CODE == 2)
        result = num1 * num2;
        printf("Result of multiplication: %lf \n", result);

    #elif (CODE == 3)
        result = num1 - num2;
        printf("Result of subtraction: %lf \n", result); // Result of subtraction: 2.200000 

    #else
        printf("Exit the program \n");

    #endif

    return 0;
}