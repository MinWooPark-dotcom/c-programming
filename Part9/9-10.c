#include <stdio.h>
#include <time.h> // 연산 속도 측정을 위해 clock() 함수 사용

#define MAX 1000000 // 백만율 상수화

int main(void)
{
    register int i;
    clock_t startTime, endTime, result; // clock_t는 long형

    startTime = clock();
    for (i = 0; i <= MAX; i++)
    {
        printf("%d \n", i);

    }
    endTime = clock();

    result = endTime - startTime;
    printf("레지스터 변수 속도: %lf초 \n", (double)result / 1000); //millisecond 단위로 출력하기 위해 1000으로 나눔

    return 0;
}