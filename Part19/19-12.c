#include <stdio.h>

#define CODE 2

int main(void)
{
    double num1 = 0, num2 = 0, result = 0;

    printf("Enter two real numbers: ");
    scanf("%lf %lf", &num1, &num2);

    #if (CODE == 1)
        result = num1 / num2;
        printf("Result of division: %lf \n", result);
    #endif

    #if (CODE == 2)
        result = num1 + num2;
        printf("Result of addition: %lf \n", result);
    #endif
    
    #if (CODE == 3)
        result = num1 * num2;
        printf("Result of multiplication: %lf \n", result);
    #endif

    #if (CODE ==4 )
        result = num1 - num2;
        printf("Result of subtraction: %lf \n", resuilt);
    #endif

        return 0;
}