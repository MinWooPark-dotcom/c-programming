#include <stdio.h>
int main(void)
{
    int i = 2;
    int j = 1;
    int result = 0;

    while(i<10)
    {
        while(j<10)
        {
            result = i * j;
            printf("%d * %d = %d \n", i, j, result);
            j++;
        }
        i++; // 단을 증가
        j = 1; // 단을 시작 
        printf("--------\n");
    }

    return 0;
}