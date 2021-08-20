#include <stdio.h>
int main(void)
{
    // Integer
    char num1 = 10;
    short num2 = 20;
    int num3 = 30;
    long num4 = 40;

    // Real number
    float num5 = 3.14;
    double num6 = 3.15;
    long double num7 = 3.17;

    printf("Integer data types and memory sizes of variables \n");
    printf("size of data type in %d, %d \n", sizeof(char), sizeof(num1));
    printf("size of data type in %d, %d \n", sizeof(short), sizeof(num2));
    printf("size of data type in %d, %d \n", sizeof(int), sizeof(num3));
    printf("size of data type in %d, %d \n", sizeof(long), sizeof(num4));

    printf("Real number data types and memory sizes of variables\n");
    printf("size of data type in %d, %d \n", sizeof(float), sizeof(num5));
    printf("size of data type in %d, %d \n", sizeof(double), sizeof(num6));
    printf("size of data type in %d, %d \n", sizeof(long double), sizeof(num7));

    return 0;
}

// Integer data types and memory sizes of variables 
// size of data type in 1, 1 
// size of data type in 2, 2 
// size of data type in 4, 4 
// size of data type in 8, 8 
// Real number data types and memory sizes of variables
// size of data type in 4, 4 
// size of data type in 8, 8 
// size of data type in 16, 16 