int num1 = 5;
int num2 = 10;
int num3 = 20;
// static int num3 = 20; // 정적 전역 변수, 외부에서 참조하지 못함. test.c 영역에서만 전역 변수로 사용

void add(void)
{
    num3 = num1 + num2;
}