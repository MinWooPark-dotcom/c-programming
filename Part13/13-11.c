// To access memory space in an array by moving pointer variable
#include <stdio.h>
int main(void)
{
    int array[3];
    int *p = NULL;

    p = array;

    *p = 10;
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("-----\n");

    p = p + 1;
    *p = 20;
    printf("%d %d %d \n", p[-1], p[0], p[1]);
    printf("-----\n");

    p = p + 1;
    *p = 30;
    printf("%d %d %d \n", p[-2], p[-1], p[0]);
    printf("-----\n");

    printf("%d %d %d \n", p[-2], p[-1], p[0]);
    printf("%d %d %d \n", *(p-2), *(p-1), *p);
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