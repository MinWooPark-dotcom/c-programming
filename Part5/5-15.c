#include <stdio.h>
int main(void)
{
    int num1 = 20, num2 = 16;
    int result1;

    result1 = num1 ^ num2;
    printf("Results in bit units ^ %d \n", result1);
    
    return 0;
}

// Results in bit units ^ 4 
// bit unit ^은 두 개의 비트가 서로 같지 않을 경우 1을 반환
// 0001 0100 
// 0001 0000을 연산하면 
// 0001 0100이 되어 십진수로 4가 됨.