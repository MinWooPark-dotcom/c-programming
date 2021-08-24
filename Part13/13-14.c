#include <stdio.h>
int main(void)
{
    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int *p = NULL;

    p = array; // array(2차원 배열의 시작 주소), p = array == p=&array[0][0] == p = array[0]

    printf("-----\n");
    printf("%x %x %x \n", &p[0], &p[1], &p[2]); // printf("%x %x %x \n", p+0, p+1, p+2)
    printf("%x %x %x \n", &p[3], &p[4], &p[5]);

    printf("-----\n");
    printf("%d %d %d \n", p[0], p[1], p[2]); // \*(p+0), \*(p+1), \*(p+2)
    printf("%d %d %d \n", p[3], p[4], p[5]);

    return 0;
}

/*
-----
ea6a7300 ea6a7304 ea6a7308 
ea6a730c ea6a7310 ea6a7314 
-----
10 20 30 
40 50 60 
*/