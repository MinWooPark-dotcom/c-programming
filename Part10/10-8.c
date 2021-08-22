#include <stdio.h>
int main(void)
{
    int array[3] = {1, 2, 3};

    printf("%x %x %x \n", &array[0], &array[1], &array[2]); // &는 주소를 참조하는 연산자, &배열 요소로 접근
    printf("%x %x %x \n", *&array[0], *&array[1], *&array[2]); // \*는 메모리 공간에 저장된 값을 참조하는 연산자 
    printf("%x %x %x \n", array[0], array[1], array[2]); 
    printf("%x %x %x \n", *&*&array[0], *&*&array[1], *&*&array[2]); 

    return 0;
}