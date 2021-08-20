#include <stdio.h>
int main(void)
{
    int num1 = 10;
    int result1;
    result1 = num1 << 2;
    printf("Results in bit units << operations %d \n", result1);

    return 0;
}

// Results in bit units << operations 40 
// 0000 1010 (10)
// after << 2 
// 0010 1000 (40), empty space filled with zero