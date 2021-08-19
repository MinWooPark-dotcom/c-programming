#include <stdio.h>
int main(void)
{
    printf("character constant %c %c %c \n", 'a', 'b', 'c');
    printf("ASCII code decimal %d %d %d \n", 'a', 'b', 'c');
    printf("ASCII code hexadecimal %x %x %x \n", 'a', 'b', 'c');

    printf("\n-------------------------\n");   

    printf("character constant %c %c %c \n", '!', '@', '#');
    printf("ASCII code decimal %d %d %d \n", '!', '@', '#');
    printf("ASCII code hexadecimal %x %x %x \n", '!', '@', '#');

    return 0;
}

// character constant a b c 
// ASCII code decimal 97 98 99 
// ASCII code hexadecimal 61 62 63 

// -------------------------
// character constant ! @ # 
// ASCII code decimal 33 64 35 
// ASCII code hexadecimal 21 40 23 