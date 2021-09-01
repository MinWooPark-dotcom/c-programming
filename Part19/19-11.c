#include <stdio.h>
int main(void)
{
    double num1, num2, result;
    printf("Enter tow real numbers: ");
    scanf("%lf %lf", &num1, &num2);
    result = num1 / num2;

    if (result>0)
    {
        printf("%lf \n", result);
        printf("Compilation Date: %s \n", __DATE__);
        printf("Compile time: %s \n", __TIME__);
        printf("File name: %s \n", __FILE__);
    }
    else 
    {
        printf("Error occured \n");
        printf("Row number: %d \n", __LINE__);
    }

    return 0;
}

/*
Enter tow real numbers: 1 2 
0.500000 
Compilation Date: Sep  1 2021 
Compile time: 18:41:24 
File name: 19-11.c 
*/