#include <stdio.h>
int main(void)
{
    int num = 0, i, result = 0;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num); // 입력한 값을 &num 메모리 주소에 %d 형태로 넣는다.

    for (i = 1; i < 10; i= i+2)
        {
            result = num * i;
            printf("%d * %d = %d \n", num, i, result);
        }
        return 0;
}

/*
숫자를 입력하세요: 3
3 * 1 = 3 
3 * 3 = 9 
3 * 5 = 15 
3 * 7 = 21 
3 * 9 = 27 
*/