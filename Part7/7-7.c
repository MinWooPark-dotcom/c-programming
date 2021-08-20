#include <stdio.h>
int main(void)
{
    int i, sum = 1;
    for (i = 1; i <= 10; i++)
    {
        sum = sum * i;
        printf("i = %d, sum = %d \n", i, sum);
    }
    printf("-----반복문 종료-----\n");
    return 0;
}

// i = 0, sum = 0 
// i = 1, sum = 1 
// i = 2, sum = 3 
// i = 3, sum = 6 
// i = 4, sum = 10 
// i = 5, sum = 15 
// i = 6, sum = 21 
// i = 7, sum = 28 
// i = 8, sum = 36 
// i = 9, sum = 45 
// i = 10, sum = 55 
// -----반복문 종료-----