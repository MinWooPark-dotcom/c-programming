#include <stdio.h>
int main(void) 
{
    int age;  
    printf("What is your age? : ");
    scanf("%d", &age); // 키보드로부터 10진수 데이터를 입력받아서 변수 age에 값을 저장, 반드시 변수 앞에 &를 붙여야 함
    printf("Wow! Really? Are you %d years old? \n", age);

    return 0;
}
