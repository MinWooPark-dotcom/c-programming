#include <stdio.h>
int main(void)
{
    int a;
    int b;

    a = 1;
    b = 2;

    // 변수 선언은 제일 앞쪽에 해야 하는 규칙을 C++과 같이 변수가 사용되지 전이라면 어디든 놓을 수 있도록 변경
    int c;
    c = 3;

    printf("a's values is %d \n", a);
    printf("b's values is %d \n", b);
    printf("c's values is %d \n", c);

    return 0;
}