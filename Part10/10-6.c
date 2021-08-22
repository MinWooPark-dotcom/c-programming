#include <stdio.h>
int main(void)
{
    int array[3] = {1, 2, 3};

    printf("%x %x %x \n", array+0, array+1, array+2); // 배열 이름은 배열의 시작 주소,
    printf("%x %x %x \n", &array[0], &array[1], &array[2]); // &는 주소를 참조하는 연산자, &배열 요소로 접근

    return 0;
}