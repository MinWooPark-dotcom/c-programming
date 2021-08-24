#include <stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};

    printf("%x %x %x \n", array, array + 0, &array[0]);
    printf("%x %x \n",  array + 1 , &array[1]);
    printf("%x %x \n",  array + 2, &array[2]);

    // array와 array +0은 같은 주소를 가르키고 있지만 크기가 다름.
    // array는 배역의 시작 주소를 으미, array + 0은 0번 요소의 주소를 의미, 
    printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));
    return 0;
}