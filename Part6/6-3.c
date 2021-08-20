#include <stdio.h>
int main(void)
{
    // char의 메모리 크기는 1Byte(-128~127 표현 범위)
    signed char num1 = 130; 
    unsigned char num2 = 130;

    printf("%d \n", num1);
    printf("%d \n", num2);

    return 0;
}

// 6-3.c:4:24: warning: implicit conversion from 'int' to 'signed char' changes value from 130 to -126 [-Wconstant-conversion]
// -126 // 오버플로우
// 130