#include <stdio.h>
int main(void)
{
    char array[] = {'A', 'B', 'C', 'D', '\0'};

    // output character
    
    printf("%c %c %c %c%c \n", array[0], array[1], array[2], array[3], array[4]);
    printf("%d %d %d %d%d \n", array[0], array[1], array[2], array[3], array[4]);

    return 0;
}

/*
A B C D 
65 66 67 68 0 
*/