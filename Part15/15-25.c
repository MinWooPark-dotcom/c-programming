#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct point function(void); // Declaration of function

int main(void)
{
    struct point p;
    p = function(); // function call
    printf("%d %d \n", p.x, p.y);

    return 0;
}

struct point function(void) // Definition of a function
{
    struct point call = {10, 20};
    return call; 
}