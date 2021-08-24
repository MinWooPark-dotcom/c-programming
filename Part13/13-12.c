#include <stdio.h>
int main(void)
{
    int array[3][3] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
    printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
    printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);
    printf("-----\n");

    printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
    printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);
    printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);
    printf("-----\n");

    printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
    printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
    printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);
    printf("-----\n");

    return 0;
}

/*
ef9e32f0 ef9e32f4 ef9e32f8 
ef9e32fc ef9e3300 ef9e3304 
ef9e3308 ef9e330c ef9e3310 
-----
10 20 30 
70 80 90 
40 50 60 
-----
10 20 30 
40 50 60 
70 80 90 
-----
*/