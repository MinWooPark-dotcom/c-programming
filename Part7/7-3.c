#include <stdio.h>
int main(void)
{
    int i = 0;
    while(1)
    {
        printf("반복 횟수: %d \n", i);
        i++;
		
        // 무한 루프 탈출하는 break 문
        // if(i>10)
        // break;
    }
    return 0;
}