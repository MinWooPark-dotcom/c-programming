#include <stdio.h>
int max(int a, int b) // Function definition
{
    if(a>b)
        return a;
    else
        return b;
}

int main(void) // Function call 
{
    int i, j;
    int k;

    printf("Enter two numbers :");
    scanf("%d %d", &i, &j);

    k = max(i, j);
    printf("The large number of %d or %d is %d \n", i, j, k);

    return 0;
}