// /* importance.h */
// extern double circle(int radius);
// extern double area(int radius);

// /* importance.c */
// #define PI 3.14
// double circle(int radius)
// {
//     double result = 2 * PI * radius;
//     return result;
// }

// double area(int radius)
// {
//     double result = PI * radius * radius;
//     return result;
// }

/* main.c */
#include <stdio.h>
#include "importance.h"

int main(void)
{
    printf("Circle circumference of radius 3: %lf \n", circle(3));
    printf("The area of a circle with a radius of three: %lf \n", area(3));

    return 0;
}