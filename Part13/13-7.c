#include <stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};
    int *p = NULL;

    p = array;
    printf("%d %d %d \n", array[0], array[1], array[2]);
    printf("%d %d %d \n", *(array+0), *(array+1), *(array+2));
    printf("%d %d %d \n", p[0], p[1], p[2]);
    printf("%d %d %d \n", *(p + 0), *(p + 1), *(p + 2));

    printf("size of array: %d size of pointer: %d \n", sizeof(array), sizeof(p));

    return 0;
}


/*
10 20 30 
10 20 30 
10 20 30 
10 20 30 
size of array: 12 size of pointer: 8 
*/