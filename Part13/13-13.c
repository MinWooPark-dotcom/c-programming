#include <stdio.h>
int main(void)
{
    int array[2][3] = {10, 20, 30, 40, 50, 60};

    printf("-----#1-----\n");
    printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
    printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

    printf("-----#2-----\n");
    printf("%x %x \n", array, array + 1);
    printf("%x %x \n", array[0], array[1]);
    printf("%x %x \n", *(array + 0), *(array + 1));

    printf("-----#3-----\n");
    printf("%d %d %d \n", *(array[0] + 0), *(array[0] + 1), *(array[0] + 2)); // array[0]은 0번 행의 주소를, array[0]+0은 0행 0열의 주소
    printf("%d %d %d \n", *(array[1] + 0), *(array[1] + 1), *(array[1] + 2));
    
    // array[0] == *(array+0)
    // array[1] == *(array+1)

    printf("-----#4-----\n");
    printf("%d %d %d \n", *(*(array + 0) + 0), *(*(array + 0) + 1), *(*(array + 0) + 2)); // 0행 0열, 0행 1열, 0행 2열
    printf("%d %d %d \n", *(*(array + 1) + 0), *(*(array + 1) + 1), *(*(array + 1) + 2)); // 1행 0열, 1행 1열, 1행 2열


    return 0;
}

/*
-----#1-----
e9807300 e9807304 e9807308 
e980730c e9807310 e9807314 
-----#2-----
e9807300 e980730c 
e9807300 e980730c 
e9807300 e980730c 
-----#3-----
10 20 30 
40 50 60 
-----#4-----
10 20 30 
40 50 60 
*/