#include <stdio.h>
void main()
{
    char c = 3;
    double d = 3.1;

    void *vx = NULL;

    vx = &c;
    printf("Address stored by vx %x \n", vx);
    printf("*Value of vx: %d \n", *(char *)vx);

    vx = &d;
    printf("Address stored by vx %x \n", vx);
    printf("Value of *vx: %lf \n", *(double *)vx);

    vx = &c;
    *(char *)vx = 5;
    printf("Value stored by c: %d \n", c);
    printf("Value of *vx %d \n", *(char *)vx);

    vx = &d;
    *(double *)vx = 5.1;
    printf("Value stored by d: %lf \n", d);
    printf("Value of *vx %lf \n", *(double *)vx);


}

/*
Address stored by vx e41e444f 
*Value of vx: 3 
Address stored by vx e41e4440 
Value of *vx: 3.100000 
Value stored by c: 5 
Value of *vx 5 
Value stored by d: 5.100000 
Value of *vx 5.100000 
*/