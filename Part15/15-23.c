#include <stdio.h>

struct point
{
    int x;
    int y;
};

void function(struct point call); // Declaration of function

int main(void)
{
    struct point p = {10, 20};
    function(p); // Call by value

    return 0;
}

void function(struct point call) { // Definition of a function, p copied to call
    printf("%d %d \n", call.x, call.y); 
}