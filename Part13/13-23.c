#include <stdio.h>
int main(void)
{
    char array1[] = {'A', 'B', 'C', 'D'};
    char *p = NULL;

    p = array1;

    printf("%c %c %c %c \n", p[0], p[1], p[2], p[3]);
    printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
    // p[i] == *(p + i)
    printf("%c %c %c %c \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));
    printf("%d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3));

    return 0;
}

/*
A B C D 
65 66 67 68 
A B C D 
65 66 67 68
*/