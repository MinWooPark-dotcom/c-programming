#include <stdio.h>
int main(void)
{
    char num1 = 130; // 대입 연산자 기준으로 오른쪽(130)에서 왼쪽 num1(char)으로 자동 형변환
    int num2 = 3.14;
    double num3 = 3;

    printf("%d, %d, %lf \n", num1, num2, num3);

    return 0;
}

// -126, 3, 3.000000 