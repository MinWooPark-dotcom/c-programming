#include <stdio.h>
int main(void)
{
    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int(*p)[3] = NULL;

    p = array;
    printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
    printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

    printf("-----\n");
    printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);
    printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);

    printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
    printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);

    printf("-----\n");
    printf("%d %d %d \n", *&p[0][0], *&p[0][1], *&p[0][2]);
    printf("%d %d %d \n", *&p[1][0], *&p[1][1], *&p[1][2]);

    printf("-----\n");
    printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
    printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);

    printf("-----\n");
    printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
    printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);

    return 0;
}

/*
ef005300 ef005304 ef005308 
ef00530c ef005310 ef005314 
-----
ef005300 ef005304 ef005308 
ef00530c ef005310 ef005314 
10 20 30 
40 50 60 
-----
10 20 30 
40 50 60 
-----
10 20 30 
40 50 60 
-----
10 20 30 
40 50 60 
*/