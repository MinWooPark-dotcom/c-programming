#include <stdio.h>
int main(void)
{
    int num, j = 9, result = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    for (; num > 0; num--) // 초깃값이 빠졌지만 위에 선언되어 있기에 에러 아님
    {
        for (j = 9; j > 0; j--)
        {
            result = num * j;
            printf("%d * %d = %d \n", num, j, result);
        }
        printf("-----\n");
    }
    return 0;
}