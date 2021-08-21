#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter a number :");
    scanf("%d", &num);

    if(num>=0)
        printf("positive number \n");

    if(num<0)
        printf("negative number \n");

    return 0;
}

