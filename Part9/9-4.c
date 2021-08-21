#include <stdio.h>
// Function declaration
int sum(void);
int input(void);
void output(int x);

int main(void)
{
    int result;
    printf("---Start program---\n");
    printf("Enter one integer: ");
    
    // Function call
    result = sum();
    output(result);

    return 0;
}

// Function definition
int sum(void)
{
    int i = 0, total = 0, num = 0;
    num = input();

    for (i = 0; i <= num; i++)
    {
        total=total+i;
    }
    return total;
}

int input(void)
{
    int val;
    scanf("%d", &val);
    return val;
}

void output(int x)
{
    printf("result: %d \n", x);
    return;
}
