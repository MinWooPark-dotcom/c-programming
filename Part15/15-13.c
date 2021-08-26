#include <stdio.h>

struct student
{
    char no[10];
    char name[20];
};

int main(void)
{
    int i = 0;
    struct student stu;

    // stu.no = "20101323"; // error, no는 배열 이름, 배열 이름은 배열의 시작 주소인데 시작 주소에 문자열을 저장하므로 에러 
    // stu.name="Park"; // error, name은 배열 이름
    pritnf("class of: %s, name: %s \n", stu.no, stu.name);

    return 0;
}
