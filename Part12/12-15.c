#include <stdio.h>
void add(double num1, double num2);

int main()
{
    double x = 3.1, y = 5.1;
    void (*pointer)(double, double); // 함수 포인터, 가르키는 대상이 되는 add() 함수의 출력 형태, 입력 형태를 맞추어 함수 포인터 선언 

    printf("add 함수의 주소:  %x \n", add);
    printf("함수 포인터의 주소: %x \n", &pointer);

    pointer = add; // 함수 포인터에 함수 시작 주소를 저장
    pointer(x, y); // 함수 포인터를 이용한 함수 호출

    return 0;
}

void add(double num1, double num2)
{
    double result;
    result = num1 + num2;
    printf("%lf + %lf = %lf \n", num1, num2, result);
}

/*
add 함수의 주소:  50efef0 
함수 포인터의 주소: eab13300 
3.100000 + 5.100000 = 8.200000 
*/