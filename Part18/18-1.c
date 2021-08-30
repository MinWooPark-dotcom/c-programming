#include <stdio.h>

int a = 10;

int main(void)
{
    int num1 = 10, num2 = 20;
    static int s = 20;

    printf("Data output: %d %d %d %d \n", a, num1, num2, s);
    printf("Code area: %x %x \n", main, printf);
    printf("Stack area: %x %x \n", &num1, &num2);
    printf("Data area: %x %x \n", &a, &s);

    return 0;
}

/*
Data output: 10 10 20 20 
Code area: fc40ea0 2022bfb4 
Stack area: dffc22c8 dffc22c4 
Data area: fc45010 fc45014 
*/