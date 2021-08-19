#include <stdio.h>
int main(void) 
{
    printf("%d \n", 2147483647);
    printf("%d \n", 2147483650);
    printf("%u \n", 4294967295);

    return 0;
}

/**
2147483647 
-2147483646 // %d로 표현할 수 있는 최댓값을 초과
4294967295 
**/