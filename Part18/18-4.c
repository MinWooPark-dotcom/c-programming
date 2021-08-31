#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0;
    int *p = (int *)calloc(sizeof(int), sizeof(int)); // 4 * 4 = 16Bytes

    if(p==NULL)
        printf("Failed to allocate dynamic memory to heap region \n");

    for (i = 0; i < 4; i++)
    {
        p[i] = i;
        printf("Address: %x \n", &p[i]);
        printf("Value: %d \n", p[i]);
    }

    free(p);
    p = NULL;

    return 0;
}

/*
Address: 5d405b20 
Value: 0 
Address: 5d405b24 
Value: 1 
Address: 5d405b28 
Value: 2 
Address: 5d405b2c 
Value: 3 
*/