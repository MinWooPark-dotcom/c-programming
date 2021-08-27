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

    strncat(array1, array2, 6);

    printf("Full string output: ");
    puts(array1);

    return 0;
}

/*
Enter first string: I like you~~!
Enter second string: Thank you~~!
Full string output: I like you~~!Thank // contains one space
*/