#include <stdio.h>
int main(void)
{
    char c = 3;
    double d = 3.1;

    void *vx = NULL;

    vx = &c;
    printf("Address of vx: %x \n", vx);
    // printf("Value of vx: %d \n", *vx) // error
    printf("Value of vx: %d \n", *(char *)vx); // Force type change

    vx = &d;
    printf("Address of vx: %x \n", vx);
    // printf("Value of vx: %d \n", *vx) // error
    printf("Value of vx: %d \n", *(double *)vx); // Force type change

    return 0;
}