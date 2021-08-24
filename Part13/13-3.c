#include <stdio.h>
int main(void)
{
    int array[3] = {10, 20, 30};

    printf("%d %d %d \n",  *(array+0), *&array[0], array[0]);
    printf("%d %d \n", *(array + 1), *&array[1], array[1]);
    printf("%d %d \n", *(array + 2), *&array[2], array[2]);
    // \*(array+i) == *&array[i] == array[i]는 값을 나타내는 같은 표현

    return 0;
}

/*
10 10 10 
20 20 
30 30 
*/