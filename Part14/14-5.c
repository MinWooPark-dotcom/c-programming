#include <stdio.h>

void func(int *p);

int main(void)
{
    int array[2][4] = {10, 20, 30, 40, 50, 60, 70, 80};
    func(array);
    return 0;
}

void func(int *p) // 2차원 배열처럼 접근하려면 void func(int *p[4])
{
    printf("%d %d %d %d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4], p[5], p[6], p[7]);

    // printf("%d %d %d %d %d %d %d %d \n", p[0][1], p[0][2]); // error
}