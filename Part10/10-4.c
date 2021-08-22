#include <stdio.h>
int main(void)
{
    int array[3] = {87, 65, 78};
    int i, total = 0;

    for (i = 0; i < 3; i++)
    {
        total = total + array[i];
        printf("array[%d]: %d \n", i, array[i]);
    }
    printf("total %d \n", total);
    printf("average %.2lf \n", (double)total / 3);

    return 0;
}

/*
array[0]: 87 
array[1]: 65 
array[2]: 78 
total 230 
average 76.67 
*/