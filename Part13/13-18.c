#include <stdio.h>
int main(void)
{
    int array[2][3] = {10, 20, 30, 40, 50, 60};
    int(*p)[3] = NULL;

    p = array; // &array[0][0] // array[0]

    printf("-----#1----- Address of array elements \n");
    printf("%x %x %x \n", &p[0][0], &p[0][1], &p[0][2]);
    printf("%x %x %x \n", &p[1][0], &p[1][1], &p[1][2]);

    printf("-----#2----- Address in each row \n"); 
    printf("%x %x \n", p, p + 1);
    printf("%x %x \n", p[0], p[1]);
    printf("%x %x \n", *(p+0), *(p+1));

    printf("-----#3----- Value \n");
    printf("%d %d %d \n", *(p[0] + 0), *(p[0] + 1), *(p[0] + 2));
    printf("%d %d %d \n", *(p[1] + 0), *(p[1] + 1), *(p[1] + 2));

    printf("-----#4----- Value \n");
    printf("%d %d %d \n", *(*(p+0)+0), *(*(p+0)+1), *(*(p+0)+2));
    printf("%d %d %d \n", *(*(p + 1) + 0), *(*(p + 1) + 1), *(*(p + 1) + 2));

    // p[0] == *(p+0)

    return 0;
}

/*
-----#1----- Address of array elements 
ece33300 ece33304 ece33308 
ece3330c ece33310 ece33314 
-----#2----- Address in each row 
ece33300 ece3330c 
ece33300 ece3330c 
ece33300 ece3330c 
-----#3----- Value 
10 20 30 
40 50 60 
-----#4----- Value 
10 20 30 
40 50 60 
*/