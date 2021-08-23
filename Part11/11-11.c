#include <stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    // 열 요소의 주소 앞에 * 연산자를 붙임 => 주소에 저장된 '값'을 참조
    printf("%d %d \n", *&array[0][0], *&array[0][1]); // 10, 20
    printf("%d %d \n", *&array[1][0], *&array[1][1]); // 30, 40
    printf("--------\n");

    // \* 연산자가 + 연산자보다 우선순위가 높아서 *array[i]이 먼저 수행되고 +n을 하게 됨
    printf("%d %d \n", *array[0]+0, *array[0]+1); // 10, 11
    printf("%d %d \n", *array[1]+0, *array[1]+1); // 30, 31
    printf("--------\n");

    // \* 연산자가 + 연산자보다 우선순위가 높아서 **(array+0)이 먼저 수행되고 +n을 하게 됨
    // \*(array+0) == array[0], 주소를 나타내는 동일 표현. 
    // 여기에 *을 하나 더 붙여 **(array+0) == *array[0] 주소에 저장된 '값'을 참조
    printf("%d %d \n", **(array+0)+0, **(array+0)+1); // 10, 11
    printf("%d %d \n", **(array+1)+0, **(array+1)+1); // 30, 31

    return 0;
}