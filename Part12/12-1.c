#include <stdio.h>
int main()
{
    int num1 = 3;
    char num2 = 'A';

    printf("주소: %x, 값: %d, 값: %d \n", &num1, num1, *&num1);
    printf("주소: %x, 값: %d, 값: %d \n", &num2, num2, *&num2);

    printf("%d %d \n", sizeof(int), sizeof(num1));
    printf("%d %d \n", sizeof(char), sizeof(num2));

    return 0;
}

// 주소: e047a318, 값: 3, 값: 3 
// 주소: e047a317, 값: 65, 값: 65 
// 4 4 
// 1 1 