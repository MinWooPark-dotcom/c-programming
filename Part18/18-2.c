#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int *p = NULL;
    p = (int *)malloc(4);

    if(p == NULL)
        printf("Failed to allcoate dynamic memory to heap region");

    *p = 10;
    printf("Address: %x \n", p);
    printf("Value: %d \n", *p);

    free(p);
    p = NULL;

    return 0;
}

/*
Address: e8c05b20 
Value: 10 
*/