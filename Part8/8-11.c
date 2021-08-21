#include <stdio.h>
int main(void)
{
    char ch;

    printf("Thursday, Friday, Saturday \n");
    printf("Enter characters (T,F,S) : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'T':
    case 't':
        printf("Thursday \n");
        break;

    case 'F':
    case 'f':
        printf("Friday \n");
        break;

    case 'S':
    case 's':
        printf("Saturday \n"); 
        break;
    
    default:
        printf("Incorrectly entered \n");
    }
    return 0;
}