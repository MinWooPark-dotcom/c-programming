#include <stdio.h>
int main(void)
{
    char num1 = -129; // 최솟값(-128)보다 -1만큼 작은 값 => underflow
    char num2 = 128; // 최댓값(127)보다 +1만큼 큰 값 => overflow

    printf("%d \n", num1); 
    printf("%d \n", num2);

    num1 = -130;
    num2 = 129;

    printf("%d \n", num1);
    printf("%d \n", num2);

    return 0;
}

// 127 
// -128 
// 126 
// -127 