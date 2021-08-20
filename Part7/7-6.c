#include <stdio.h>
int main(void)
{
    int num;
    for (num = 0; num < 5; num++)
    {
        printf("반복 내용: %d \n", num);
    }
    printf("반복문을 종료한 후 : %d \n", num);
    return 0;
}

// 반복 내용: 0 
// 반복 내용: 1 
// 반복 내용: 2 
// 반복 내용: 3 
// 반복 내용: 4 
// 반복문을 종료한 후 : 5 