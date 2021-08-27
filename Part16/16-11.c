#include <stdio.h>
#include <string.h>
int main(void)
{
    char array[50] = "100 3.14 good-morning";
    int num1;
    double num2;
    char str[50];

    // scanf("%d %lf %s", &num1, &num2, str); // Received input from keyboard
    sscanf(array, "%d %lf %s", &num1, &num2, str); // Received input from array

    puts("Output");
    printf("%d, %lf, %s \n", num1, num2, str);

    return 0;
}

/*
Output
100, 3.140000, good-morning 
*/