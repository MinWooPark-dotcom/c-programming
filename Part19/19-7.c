#include <stdio.h>

#define OUTPUT1(a) a
#define OUTPUT2(a) #a

int main(void)
{
    printf("%d \n", OUTPUT1(1234)); // decimal 1234
    printf("%s \n", OUTPUT2(1234)); // string '1234'

    return 0;
}