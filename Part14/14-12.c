#include <stdio.h>

int main(int argc, char* argv[]) // int argc: 문자열 수를 저장, char* argv[]: 문자열의 첫 번째 주소를 저장
{
    int i = 0;
    printf("문자열의 수: %d \n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d]: %s \n", i, argv[i]);
    }

    return 0;
}

