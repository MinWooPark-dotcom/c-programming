#include <stdio.h>

typedef struct score // 구조체에서 typedef를 사용하는 방법 1
{
    double math;
    double english;
    double average;
} SCORE;

struct student 
{
    int no;
    // struct score s;
    SCORE s;
};

typedef struct student STUDENT; // 구조체에서 typedef를 사용하는 방법 2

int main(void)
{
    // struct student stu = {20101323, {90, 80, 0}};
    STUDENT stu = {20101323, {90, 80, 0}};

    stu.s.average = (stu.s.math + stu.s.english) / 2;
    printf("Class of: %d \n", stu.no);
    printf("Average socre: %lf \n", stu.s.average);

    return 0;
}

// Class of: 20101323 
// Average socre: 85.000000 