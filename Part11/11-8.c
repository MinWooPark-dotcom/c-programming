#include <stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%x %x \n", array[0], &array[0][0]); // 0행의 대표 주소 즉, 0행 0열의 주소
    printf("%x %x \n", array[1], &array[1][0]); // 1행의 대표 주소 즉, 1행 0열의 주소

    return 0;
}

// e123d300 e123d300 
// e123d308 e123d308 