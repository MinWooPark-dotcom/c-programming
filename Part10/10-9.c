#include <stdio.h>
int main(void)
{
    int array[3] = {1, 2, 3};

    printf("%x %x %x \n", array+0, array+1, array+2); // 배열 이름은 원래 array+0을 표현하는 것인데 +0을 생략한 것임
    printf("%x %x %x \n", *(array+0), *(array+1), *(array+2)); 
    printf("%x %x \n", *(array+0), *array); 

    return 0;
}