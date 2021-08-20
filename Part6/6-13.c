#include <stdio.h>
int main(void)
{
    int num1 = 10;
    int num2 = 3;

    double result;

    // 정수 / 정수
    result = num1 / num2;
    printf("result: %lf \n", result);

    // 실수 / 정수
    result = (double)num1 / num2;
    printf("result: %lf \n", result);

    // 정수 / 실수
    result = num1 / (double)num2;
    printf("result: %lf \n", result);

    // 실수 / 실수
    result = (double)num1 / (double)num2;
    printf("result: %lf \n", result);

    return 0;
}

// result: 3.000000 
// result: 3.333333 
// result: 3.333333 
// result: 3.333333 