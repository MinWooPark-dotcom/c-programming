#include <stdio.h>
#include <string.h>
int main(void)
{
    char array[50];
    int num1 = 100;
    double num2 = 3.14;
    char str[50] = "good-morning";

    printf("%d, %lf, %s \n", num1, num2, str);
    sprintf(array, "%d, %lf, %s \n", num1, num2, str);
    printf("%s \n", array);

    return 0;
}