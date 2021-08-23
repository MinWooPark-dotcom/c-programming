#include <stdio.h>
int main(void)
{
    int array[2][2] = {10, 20, 30, 40};

    printf("%d %d \n", *&array[0][0], *&array[0][1]);
    printf("%d %d \n", *&array[1][0], *&array[1][1]);
    printf("------\n");

    // 2차원 배열 요소를 먼저 연산하게 하고, 이후에 * 연산자로 값을 참조
    // array[i] + n에서 +n은 선언된 자료형의 크기만큼 더하라는 의미
    printf("%d %d \n", *(array[0] + 0), *(array[0] + 1));
    printf("%d %d \n", *(array[1] + 0), *(array[1] + 1));
    printf("------\n");

    // \*(array + i) == array[0]이므로 여기에 +n을 한 후 * 연산자로 값을 참조
    printf("%d %d \n", *(*(array + 0) + 0), *(*(array + 0) + 1));
    printf("%d %d \n", *(*(array + 1) + 0), *(*(array + 1) + 1));

    // 배열의 물리적 메모리는 한 줄로 되어 있음. *(array+0) 기준으로 12바이트  건너뛴 주소의 값
    // 논리적 주소로는 0행이 아니지만, 물리적 주소는 한 줄로 이루어졌기에 접근이 가능
    printf("%d \n", *(*(array+0) + 3)); // 40 

    return 0;
}