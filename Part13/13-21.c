#include <stdio.h>
int main(void)
{
    int a = 10, b = 20, c = 30;
    int *ap[3] = {NULL, NULL, NULL}; // 포인터 배열

    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int(*p)[3] = NULL; // 배열 포인터 변수

    ap[0] = &a;
    ap[1] = &b;
    ap[2] = &c;

    printf("%x %x %x \n", &a, &b, &c);
    printf("%x %x %x \n", ap[0], ap[1], ap[2]);
    printf("%x %x %x \n", *(ap + 0), *(ap + 1), *(ap + 2));
    printf("-----\n");
    // ap[i] == *(ap+i)
    printf("%d %d %d \n", *&a, *&b, *&c);
    printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);
    printf("%d %d %d \n", **(ap + 0), **(ap + 1), **(ap + 2));
    printf("-----\n");
    p = array; // 배열 포인터 변수에 배열의 시작 주소를 저장

    printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
    printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);
    printf("-----\n");

    printf("%d %d %d \n", *(p[0] + 0), *(p[0] + 1), *(p[0] + 2));
    printf("%d %d %d \n", *(p[1] + 0), *(p[1] + 1), *(p[1] + 2));
    printf("-----\n");

    printf("%d %d %d \n", *(*(p + 0) + 0), *(*(p + 0) + 1), *(*(p + 0) + 2));
    printf("%d %d %d \n", *(*(p + 1) + 0), *(*(p + 1) + 1), *(*(p + 1) + 2));
    printf("-----\n");

    return 0;
}

/*
e8c562d8 e8c562d4 e8c562d0 
e8c562d8 e8c562d4 e8c562d0 
e8c562d8 e8c562d4 e8c562d0 
-----
10 20 30 
10 20 30 
10 20 30 
-----
10 20 30 
40 50 60 
-----
10 20 30 
40 50 60 
-----
10 20 30 
40 50 60 
-----
*/