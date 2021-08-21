#include <stdio.h>
int main(void)
{
    int i = 0;
    int total = 0; 

    for (i = 1; i < 3; i++)
    {
        int total = 0; // for문의 지역 변수이기에 13행에서 사용 불가 
        total = total + i;
    }

    if(total<10) // 5행 주석 풀어야 사용 가능
    {
        printf("Total value is %d \n", total);
    }
}