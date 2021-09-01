#include <stdio.h>

#define PI 3.14

int main(void)
{
    double area, circum, radius;

    fputs("Enter a radius: ", stdout);
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circum = 2 * PI * radius;

    pritnf("The width of circle: %lf \n", area);
    printf("The circumference of a circle: %lf \n", circum);

    return 0;
}