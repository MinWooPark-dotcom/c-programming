#include <stdio.h>
int main()
{
    int a = 0, b = 0, c = 0;
    int* ip = NULL;

    ip = &a;
    *ip = 10; // 변수 a에 간접 접근해서 10을 저장
    printf("%d %d %d %d \n", a, b, c, *ip);

    ip = &b;
    *ip = 20;
    printf("%d %d %d %d \n", a, b, c, *ip);

    ip = &c;
    *ip = 30;
    printf("%d %d %d %d \n", a, b, c, *ip);

    return 0;
}

/*
10 0 0 10 
10 20 0 20 
10 20 30 30                  
*/