#include <stdio.h>
#include <string.h>

struct student
{
    char no[10];
    char name[20];
};

int main(void)
{
    int i = 0;
    // 구조체 멤버 변수로 문자열 배열을 사용하는 경우 구조체 변수를 선언하고 동시에 초기화하지 않으면, 함수를 사용해서 문자열을 저장해야 함
    struct student stu;
    // str(string) cpy(copy)
    strcpy(stu.no, "20101323");
    strcpy(stu.name, "Park");
    printf("class of: %s, name: %s \n", stu.no, stu.name);

    return 0;
}