#include <stdio.h>

#define OUTPUT1(a, b) a+b
#define OUTPUT2(a, b) #a "+" #b

int main(void)
{
    printf("%d \n", OUTPUT1(11, 22)); // 33
    printf("%s \n", OUTPUT2(11, 22)); // 11+22

    return 0;
}
