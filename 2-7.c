#include <stdio.h>
int main(void)
{
    printf("If you capitalize a, it\'s %c, \n", 'A');
    printf("%s %c \n", "If you capitalize a, it\'s", 'A');
    printf("%s %d %s\n", "Two times three", 2 * 3, "is six");

    return 0;
}

/** 
If you capitalize a, it's A, 
If you capitalize a, it's A 
Two times three 6 is six
**/