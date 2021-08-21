#include <stdio.h>
int main(void)
{
    int age;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if(age >= 15 && age <= 100)
        printf("You can sign up as a member");
    else
        printf("You can't sign up as a member");

    return 0;
}