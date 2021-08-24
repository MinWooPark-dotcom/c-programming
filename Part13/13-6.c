#include <stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int i = 0;
    int *p = NULL;

    p = array; // p = &array[0];과 같음, 포인터 변수에 배열의 시작 주소를 저장

    for (i = 0; i < 3; i++)
    {
        printf("%d %d %d \n", *(p + i), *&p[i], p[i]);
    }

    printf("----------\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d %d %d \n", *(array + i), *&array[i], array[i]);
    }

    return 0;
}

/*
10 10 10 
20 20 20 
30 30 30 
----------
10 10 10 
20 20 20 
30 30 30 
*/