#include <stdio.h>
int main(void)
{
    int a; // 변수 선언 시 메모리 할당, 값을 넣지 않았기에 garbage value가 담겨있음.
    int b;

    printf("%d \n", a);
    printf("%d \n", b);

    return 0;
}

/**
150511653
32766 
**/