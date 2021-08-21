#include <stdio.h>
int main(void)
{
    int num;

    for (num = 0; num < 101; num++)
    {
        if (num %2 == 1)
            continue; // 홀수인 경우 아래로 안 넘어가고 다시 조건식(num < 101)으로 올라감

        printf("%d \n", num);
    }
    return 0;
}