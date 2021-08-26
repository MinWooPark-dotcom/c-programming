#include <stdio.h>

struct student 
{
    char no[10];
    char name[20];
    double total;
};

int main(void)
{
    struct student stu = {"20101323", "Park", 160};
    struct student *p = NULL; // 구조체 변수로 1차원 포인터 선언

    p = &stu; // struct student의 주소를 저장
    printf("%s %s %lf \n", stu.no, stu.name, stu.total);
    printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total); // 1차원 포인터를 이용한 접근, *p == *&stu  == stu
    printf("%s %s %lf \n", p->no, p->name, p->total); // 1차원 포인터를 이용한 접근, -> 연산자는 포인터 변수에만 사용. -> 연산자는 포인터 변수만으로 구조체의 멤버 변수에 접근 가능, 위 보다 더 많이 사용 

    return 0;
}