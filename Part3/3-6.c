#include <stdio.h>
int main(void) 
{
    int a=0;
    int b=1;

    printf("Character a's value is %d \n", a);
    printf("Character b's value is %d \n", b);

    a=a+10;
    b=b+10;

    printf("Character a's value changed %d \n", a);
    printf("Character b's value changed %d \n", b);

    return 0;
}

/**
Character a's value is 0 
Character b's value is 1 
Character a's value changed 10 
Character b's value changed 11 
**/