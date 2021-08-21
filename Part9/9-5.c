#include <stdio.h>
void func_A(void); // function declaration

int main(void)
    {
        int aaa = 10;
        printf("main() 함수의 aaa 값: %d \n", aaa);

        func_A();
        return 0;
    }

    void func_A(void)
    {
        int aaa = 20;
        int bbb = 30;

        printf("func_A() 함수의 aaa 값: %d \n", aaa);
        printf("func_A() 함수의 bbb 값: %d \n", bbb);
        return;
    }