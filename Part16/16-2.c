#include <stdio.h>
int main(void)
{
    char array1[20];
    char array2[20];

    gets(array1); // input: what is your name?
    puts(array1); // output: what is your name?

    scanf("%s", array2); // input: what is your name?
    printf("%s \n", array2); // output: what, Because space character is recognized as exit character

    return 0;
}