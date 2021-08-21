#include <stdio.h>
int main(void)
{
    int num;
    pritnf("Which switch do you want to press?");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Illumination illuminated \n");
        break;
    
    case 2:
        printf("Illumination illuminated \n");
        break;
    
    case 3:
        printf("breakdown \n");
        break;

    default:
        printf("Switch error: My home switch is only 1 to 3");
        break;
    }
}