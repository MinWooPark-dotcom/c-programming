#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i = 0;
    puts("It generates 10 random numbers");

    while(i<10)
    {
        printf("%d \t", rand());
        i = i + 1;
    }

    return 0;
}

/*
It generates 10 random numbers
16807   282475249       1622650073      984943658       1144108930      470211272       101027544       1457850878      1458777923      2007237709      %  
*/