#include <stdio.h>
int main(void)
{
    float num1 = 0.123456789012345;
    double num2 = 0.123456789012345;

    printf("float %f \n", num1);
    printf("double %lf \n", num2);

    printf("float %.15f \n", num1);
    printf("double %.15lf \n", num2);

    return 0;
}

// float 0.123457 // 소수점 6자리까지 표현 가능. 7자리에서 반올림
// double 0.123457 // 특정 길이 지정 없으면 기본 6자리
// float 0.123456791043282 // 6자리 초과부터 오차 발생
// double 0.123456789012345 // 오차없이 출력