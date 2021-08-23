#include <stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x %x \n", array[0], *(array + 0), *array);
    printf("%x %x \n", array[1], *(array + 1));

    return 0;
}

// e6754300 e6754300 e6754300 
// e6754308 e6754308 