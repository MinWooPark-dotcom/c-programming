#include <stdio.h>

#ifndef ADD
    #define ADD
#endif

#ifndef MUL
    #define MUL
#endif

int main(void)
{
    double num1 = 3.3, num2 = 1.1;
    double result = 0.0;

    #ifdef ADD
        result = num1 + num2;
        printf("Result of addition: %lf \n", result);
    #endif
    
    #ifdef MUL
        result= num1 * num2;
        printf("Result of multiplication: %lf \n", result);
    #endif

    return 0;
}

/*
Result of addition: 4.400000 
Result of multiplication: 3.630000 
*/