#include <stdio.h>

union point
{
    int x;
    int y;
};

int main(void)
{
    union point p;
    p.x = 10;
    p.y = 20;
    printf("%d %d \n", p.x, p.y);

    return 0;
}