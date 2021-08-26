#include <stdio.h>

struct student 
{
    char no[10]; // 10바이트 크기의 문자열 배열 선언
    char name[20];
    double math;
    double english;
    double total;
};

int main(void)
{
    struct student stu1 = {"20101323", "Park", 80, 80, 0};
    struct student stu2 = {"20101324", "Kim", 95, 85, 0};
    struct student stu3 = {"20101325", "Lee", 100, 90, 0};

    stu1.total = stu1.math + stu1.english;
    printf("class of: %s, name: %s \n", stu1.no, stu1.name);
    printf("total score: %lf \n", stu1.total);

    printf("\n");
    stu2.total = stu2.math + stu2.english;
    printf("class of: %s, name: %s \n", stu2.no, stu2.name);
    printf("total score: %lf \n", stu2.total);

    printf("\n");
    stu3.total = stu3.math + stu3.english;
    printf("class of: %s, name: %s \n", stu3.no, stu3.name);
    printf("total score: %lf \n", stu3.total);

    return 0;
}

/*
class of: 20101323, name: Park 
total score: 160.000000 

class of: 20101324, name: Kim 
total score: 180.000000 

class of: 20101325, name: Lee 
total score: 190.000000 
*/