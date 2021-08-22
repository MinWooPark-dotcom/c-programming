#include <stdio.h>
int main(void)
{
    int array[3] = {87, 99, 80};
    int total = 0;

    total = array[0] + array[1] + array[2];
    printf("total %d \n", total);
    printf("average %.2lf \n", (double)total / 3);

    return 0;
}

// total 266 
// average 88.67 