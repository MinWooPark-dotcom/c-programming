#include <stdio.h>
int num; // Global Variable, default value 0
void grow(void);

int main(void)
{
    printf("Before function call num: %d \n", num);

    grow();
    printf("After function call num: %d \n", num);

    return 0;
}

void grow(void)
{
    num = 60; // Change value of  global variable num
}
