#include <stdio.h>
int main(void)
{
    double area, circum, radius;

    fputs("Enter a radius: ", stdout);
    scanf("%lf", &radius);

    area = 3.14 * radius * radius;
    circum = 2 * 3.14 * radius;

    pritnf("The width of circle: %lf \n", area);
    printf("The circumference of a circle: %lf \n", circum);

    return 0;
}