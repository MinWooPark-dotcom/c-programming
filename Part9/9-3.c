#include <stdio.h>
double divide(double x, double y); // Function declaration
double input(void); // Function declaration
void output(double x); // Function declaration
void information(void); // Function declaration

int main(void)
{
    double num1, num2, result;

    information(); // Function call
    printf("Enter the first real number: ");
    num1 = input(); // Function call

    printf("Enter the second real number: ");
    num2 = input(); // Function call

    result = divide(num1, num2);
    output(result);

    return 0;
}

double divide(double x, double y) // Function definition
{
    double val;
    val = x / y;
    return val;
}

double input(void) // Function definition
{
    double val;
    scanf("%lf", &val);
    return val;
}

void output(double x) // Function definition
{
    printf("Divide results: %lf \n", x);
    return;
}

void information(void)
{
    printf("----- start program ----- \n");
    return;
}

