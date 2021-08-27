#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0;
    puts("It generates 10 random numbers");
    srand(3);

    while(i<10)
    {
        printf("%d \t", rand());
        i = i + 1;
    }

    return 0;
}