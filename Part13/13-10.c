// To access memory space in an array with pointer variable fixed
#include <stdio.h>
int main(void)
{
    int array[3];
    int *p = NULL;

    p = array;

    *p = 10;
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("-----\n");

    *(p+1) = 20;
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("-----\n");

    *(p+2) = 30;
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("-----\n");

    printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("----\n");

    return 0;
}

/*
10 -436813000(garbage value) 32766(garbage value) 
-----
10 20 32766(garbage value) 
-----
10 20 30 
-----
10 20 30 
10 20 30 
----
*/