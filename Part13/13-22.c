#include <stdio.h>
int main(void)
{
    char array[] = {'A', 'B', 'C', 'D'}; // Character array declaration

    // character constant
    printf("character constant: %c %c %c \n", 'A', 'B', 'C');

    // character array
    printf("Before changing character array: %c %c %c %c \n", array[0], array[1], array[2], array[3]);

    array[0] = 'D';
    array[1] = 'C';
    array[2] = 'B';
    array[3] = 'A';

    printf("After changing character array: %c %c %c %c \n", array[0], array[1], array[2], array[3]);

    printf("Size of character array: %d \n", sizeof(array));

    return 0;
}

/*
character constant: A B C 
Before changing character array: A B C D 
After changing character array: D C B A 
Size of character array: 4 
*/