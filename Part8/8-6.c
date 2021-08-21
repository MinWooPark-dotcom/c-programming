#include <stdio.h>
int main(void)
{
    int num;

    pritnf("Please enter a number: ");
    scanf("%d", &num);

    if(num>0)
        printf("Number greater than zero stored in num \n");
    
    else if(num==0)
        printf("Zero stored in num \n");
    
    else
        printf("Number less than zero stored in num \n");

    return 0;
}