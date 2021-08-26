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
    struct score s; // 구조체 변수 s를 student의 멤버 변수로 사용(중첩 구조체)
};

int main(void)
{
    struct student stu;
    stu.no = 20101323;
    stu.s.math = 90;
    stu.s.english = 80;
    stu.s.total = stu.s.math + stu.s.english;

    printf("class of: %d \n", stu.no);
    printf("total score: %lf \n", stu.s.total);

    return 0;
}

// class of: 20101323 
// total score: 170.000000 