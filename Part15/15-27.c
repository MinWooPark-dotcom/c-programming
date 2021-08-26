#include <stdio.h>

union point // Definition of union
{
    int x;
    int y;
};
struct student // Definition of structure
{
    int a;
    int b;
};

int main(void)
{
    printf("%d %d \n", sizeof(union point), sizeof(struct student)); // 4, 8

    return 0;
}

