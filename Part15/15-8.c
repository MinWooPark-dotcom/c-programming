#include <stdio.h>

struct score
{
    double math;
    double english;
    double total;
};

struct student
{
    int no;
    struct score s;
};

int main(void)
{
    struct student stu = {20101323, {90, 80, 0}};
    // struct student stu = {20101323, 90, 80, 0}; // 중괄호 생략해도 데이터는 순서대로 저장됨

    stu.s.total = stu.s.math + stu.s.english;
    printf("class of %d \n", stu.no);
    printf("total score %lf \n", stu.s.total);

    return 0;
}
