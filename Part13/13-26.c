#include <stdio.h>
int main(void)
{
    char array[] = "ABCD";

    printf("%s \n", array);
    printf("%s \n", array+1);
    printf("%s \n", array+2);
    printf("%s \n", array+3);

    return 0;
}

/*
ABCD 
BCD 
CD 
D 
*/






