#include <stdio.h>
int main(void)
{
    char a = 'A';
    char b = 'B';

    char *const p = &a; // p = &a 상수화, 포인터 p 변수에 다른 주소 저장 불가

    *p = 'C';
    printf("%c \n", *p);
    printf("%c \n", a);

    // p = &b; // error

    return 0;
}