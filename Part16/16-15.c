#include <stdio.h>
#include <math.h>
int main(void)
{
    double a1 = 3.14;
    double a2 = -3.14;

    printf("%.21f \n", ceil(a1));
    printf("%.21f \n", floor(a1));
    printf("-----\n");

    printf("%.21f \n", fabs(a2));
    printf("%.21lf \n", pow(2, 8));
    printf("%.21lf \n", sqrt(2));
    printf("-----\n");

    printf("%.21lf \n", exp(1));
    printf("%.21f \n", log(exp(1)));
    printf("%.21lf \n", log10(10));
    printf("-----\n");

    return 0;
}

/*
4.000000000000000000000 
3.000000000000000000000 
-----
3.140000000000000124345 
256.000000000000000000000 
1.414213562373095145475 
-----
2.718281828459045090796 
1.000000000000000000000 
1.000000000000000000000 
-----
*/