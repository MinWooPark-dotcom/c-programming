#include <stdio.h>

#define CODE 3

int main(void)
{
    double num1 = 0, num2 = 0, result = 0;

    printf("Enter two real numbers: ");
    scanf("%lf %lf", &num1, &num2);

    #if (CODE == 1)
        result = num1 / num2;
        printf("Result of division: %lf \n", result);

    #else 
        result = num1 + num2;
        printf("Result of addition: %lf \n", result);
    
    #endif

    return 0;
}