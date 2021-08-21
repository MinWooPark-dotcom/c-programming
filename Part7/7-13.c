#include <stdio.h>
int main()
{
    int i;
    int factorial = 1;

    for (; i < 10; i++) // 초깃값이 없는 경우
    {
        // 1*2*3*4*5*6*7*8*9의 결과 저장
        factorial = factorial * i;
    }
    printf("1부터 10까지의 곱: %d \n", factorial);

    return 0;
}

// 1부터 10까지의 곱(10!): 362880 