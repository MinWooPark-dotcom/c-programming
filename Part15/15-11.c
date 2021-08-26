#include <stdio.h>

struct student
{
    char no[10];
    char name[20];
    double math;
    double english;
    double total;
};

int main(void)
{
    int i = 0;
    struct student stu[3] = { // 구조체 배열 선언과 동시에 초기화 
        {"20101323", "Park", 80, 80, 0},
        {"20101324", "Kim", 95, 85, 0},
        {"20101325", "Lee", 100, 90, 0},
    };
    

    for (i = 0; i < 3; i++)
    {
        stu[i].total = stu[i].math + stu[i].english;
        printf("class of: %s, name: %s \n", stu[i].no, stu[i].name);
        printf("total score: %lf \n", stu[i].total);
        printf("\n");
    }

    return 0;
}