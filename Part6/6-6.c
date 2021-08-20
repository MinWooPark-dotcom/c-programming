#include <stdio.h>
int main(void)
{
    float num1 = 3.4e+30; // 3.4x10의 30승
    double num2 = 3.4e+30;

    printf("%f, %e, \n", num1, num1);
    printf("%lf, %le, \n", num2, num2);

    return 0;
}

// 3399999900045657695752095268864.000000, 3.400000e+30, 
// 3400000000000000236492710477824.000000, 3.400000e+30,