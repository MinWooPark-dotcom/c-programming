#include <stdio.h>
int main(void)
{
    int num;

    printf("5의 배수: ");
    for (num = 1; num <= 100; num++)
    {
        if(num%5 == 0)
            printf("%3d", num);
    }

    return 0;
}

// 5의 배수:   5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100