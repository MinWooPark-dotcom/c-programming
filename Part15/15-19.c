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
    struct student *p = NULL; // Declare a one-dimensional pointer as a structure variable
    struct student **pp = NULL; // Declare a two-dimensional pointer as a structure variable

    p = &stu;
    pp = &p;

    printf("%s %s %lf \n", stu.no, stu.name, stu.total);
    
    // Access with a one-dimensional pointer
    printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
    printf("%s %s %lf \n", p->no, p->name, p->total);

    // Access with a two-dimensional pointer
    printf("%s %s %lf \n", (**pp).no, (**pp).name, (**pp).total); // (**pp) == (**&p) == (*p) == (*&stu) == stu
    printf("%s %s %lf \n", (*pp)->no, (*pp)->name, (*pp)->total);

    return 0;
}
