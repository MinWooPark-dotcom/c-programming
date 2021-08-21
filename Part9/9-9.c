#include <stdio.h>
void count(void);

int main(void)
{
    count();
    count();
    count();
    return 0;
}

void count(void)
{
    static int x = 0; // 정적 변수는 최초 한 번만 초기화 => 값이 유지됨
    int y = 0; // 지역 변수는 매번 초기화 => 값이 자동으로 소멸됨

    x = x + 1;
    y = y + 1;

    printf("x: %d, y: %d, \n", x, y);
}