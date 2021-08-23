#include <stdio.h>
void add(int num1, int num2);
void subtract(int num1, int num2);

int main()
{
    int x, z;
    char c;
    void (*pointer)(int, int);

    printf("Address of the add function: %x \n", add);
    printf("Address of subtract function %x \n", subtract);
    printf("enter: ");

    scanf("%d %c %d", &x, &c, &z);

    if (c=='+')
        pointer = add;
    
    else if (c=='-')
        pointer = subtract;
    
    else
        printf("Enter '+' or '-' for the second operator");

    pointer(x, z);

    return 0;
}

void add(int num1, int num2)
{
    int result;
    result = num1 + num2;
    printf("%d + %d = %d \n", num1, num2, result);
}

void subtract(int num1, int num2)
{
    int result;
    result = num1 - num2;
    printf("%d - %d = %d \n", num1, num2, result);
}