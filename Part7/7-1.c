#include <stdio.h>
int main(void)
{
    int num = 0; // 초기값

    while(num<5) // 조건값
    { 
        printf("반복 내용: %d \n", num);
        num++; // 증감값
    }
    printf("반복문을 종료한 후: %d \n", num);

    return 0;
}

// 반복 내용: 0 
// 반복 내용: 1 
// 반복 내용: 2 
// 반복 내용: 3 
// 반복 내용: 4 
// 반복문을 종료한 후: 5 