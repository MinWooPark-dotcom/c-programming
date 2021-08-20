#include <stdio.h>
typedef int good;
good main(void)
{
    good num1 = 3000;
    good num2 = 10000;
    good num3 = 2000;
    good num4 = 0;

    num4 = num1 + num2 + num3;
    printf("total good: %d \n", num4);

    return 0;
}

// total good: 15000 