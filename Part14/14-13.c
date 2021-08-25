#include <stdio.h>

int main(int argc, char* argv[]) // int argc: 문자열 수를 저장, char* argv[]: 문자열의 첫 번째 주소를 저장
{
    int i = 0;
    if(argc>4)
    {
        printf("문자열의 수가 너무 많습니다. \n");
        printf("프로그램을 종료합니다. \n");
        return 1;
    }

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s \n", i, argv[i]);
    }

    return 0;
}

