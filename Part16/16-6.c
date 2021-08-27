#include <stdio.h>
#include <string.h>
int main(void)
{
    char array1[100];
    char array2[50];

    printf("Enter first string: ");
    gets(array1);

    printf("Enter second string: ");
    gets(array2);

    strcat(array1, array2);

    printf("concatenated string output: ");
    puts(array1);

    return 0;
}

/*
Enter first string: whiat time is it?
Enter second string: It is three
concatenated string output: whiat time is it?It is three
*/