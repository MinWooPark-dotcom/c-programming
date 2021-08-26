#include <stdio.h>

struct point 
{
    int x;
    int y;
};

int main(void)
{
    struct point p1 = {20, 30};
    // &p1 == &p1.x
    printf("Address of structure variable p1: %x \n", &p1); 
    printf("Address of member variable p1.x: %x \n", &p1.x);

    return 0;
}