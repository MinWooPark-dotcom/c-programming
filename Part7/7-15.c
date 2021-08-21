#include <stdio.h>
int main()
{
    int i;
    int factorial = 1;

    for (i = 1; i <= 10; ) // for(i=1; 1; i++)과 같은 의미, 무한 루프
    {
        factorial = factorial * i;
        i++;
    }
    printf("1부터 10까지의 곱: %d \n", factorial);

    return 0;
}

// 1부터 10까지의 곱(10!): 362880 