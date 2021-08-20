#include <stdio.h>
int main(void)
{
    int num1 = 20, num2 = 16;
    int result1;

    result1 = num1 & num2;
    printf("bit units num1 %d \n", num1);
    printf("bit units num2 %d \n", num2);
    printf("Results in bit units & operations %d \n", result1);

    return 0;
}

// bit units num1 20 
// bit units num2 16 
// Results in bit units & operations 16 
// num1이 0001 0100이고 num2가 0001 0000이니 & 연산하면 0001 0000이 되어서 10진수로 16임 