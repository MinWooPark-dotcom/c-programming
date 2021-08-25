#include <stdio.h>

int main(int argc, char* argv[]) // int argc: 문자열 수를 저장, char* argv[]: 문자열의 첫 번째 주소를 저장
{
    int i = 0;
    printf("문자열의 수: %d \n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("%d번 째 문자열: %s \n", i, argv[i]);
    }

    return 0;
}

// 문자열의 수: 1   
// 0번 째 문자열: ./a.out 