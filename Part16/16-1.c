#include <stdio.h>
int main(void)
{
    char array1[10];
    char array2[10] = "Good luck";

    puts("Enter a string");
    gets(array1); // input string 
    puts(array1); // output string 

    puts(array2); // output string 
    puts("Good luck"); // output string 

    return 0;
}