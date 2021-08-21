#include <stdio.h>
int subtract(int x, int y);

int main(void)
{
    int a = 5, b = 3;
    int result = 0;

    result = subtract(a, b); 
    printf("Subtraction results : %d \n", result);
    return 0;
}

int subtract(int x, int y) // 9행 실행 시 매개변수에 인자로 넣은 값이 복사되어 매개변수 x, y 메모리 생성
{
    return x - y;
}