#include <stdio.h>

struct student
{
    char no[10];
    char name[20];
    double total;
};

int main(void)
{

    struct student stu[3];
    int i = 0;

    for (i = 0; i < 3; i++)
    {
        printf("학번 이름 총점 순으로 입력하세요 :");
        scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total); // stu[i].no, stu[i].name, &stu[i].total 모두 주소를 나타냄
        // '구조체 배열.배열 이름'의 형태는 주소를 의미하므로 & 연산자 안 붙임
    }
    printf("\n");

    printf("학생 정보를 출력합니다. \n");
    for (i = 0; i < 3; i++)
    {
        printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total); // stu[i].no, stu[i].name은 구조체의 멤버 변수들의 시작 주소를 나타냄. 
        printf("\n");
    }
    return 0;
}