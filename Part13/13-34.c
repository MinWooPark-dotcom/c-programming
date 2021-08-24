#include <stdio.h>
int main(void)
{
    char a = 'A';
    char b = 'B';
    const char *p = &a; // char* p 상수화, *p를 통해서 값 변경 불가

    printf("%c \n", *p);
    printf("%c \n", a);

    p = &b;
    printf("%c \n", *p);
    printf("%c \n", b);

    a = 'X';
    b = 'C';
    // *p = 'D'; // error

    return 0;
}