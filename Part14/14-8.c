#include <stdio.h>

int* func();

int main(void)
{
    int *p = NULL;
    p = func();

    printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
    printf("%d %d %d %d \n", *(p+0), *(p+1), *(p+2), *(p+3));
    return 0;
}

int* func()
{
    int array[] = {10, 20, 30, 40}; // 지역 변수는 함수가 종료되면서 메모리 공간이 소멸됨. static 키워드 필요
    return array;
}