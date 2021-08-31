#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p1 = (int *)calloc(1, sizeof(int));
    int *p2 = (int *)malloc(4);

    printf("Value of p1: %d \n", *p1);
    printf("Value of p2: %d \n", *p2);

    free(p1);
    p1 = NULL;

    free(p2);
    p2 = NULL;

    return 0;
}

/*
Value of p1: 0  // calloc()은 자동 초기화 0
Value of p2: 0  // malloc()은 자동 초기화가 안되서 원래는 garbage value가 나옴
*/