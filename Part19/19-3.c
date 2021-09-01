#include <stdio.h>

#define MAX 100
#define PI 3.14
#define STRING "Hello C"
#define OUTPUT printf
#define DATA int

int main(void)
{
    DATA a = 3;
    OUTPUT("%d, %lf, %s, %d \n", MAX, PI, STRING, a);

    return 0;
}