#include <stdio.h>
int main(void)
{
    char array1[] = {'A', 'B', 'C', 'D', '\0'}; // Array of characters
    char array2[] = {'A', 'B', 'C', 'D'}; // Array of strings

    printf("%s \n", array1);
    printf("%s \n", array2);

    return 0;
}

/*
ABCD 
ABCDABCD // 문자열이 아니기에 정상적으로 출력되지 못함
*/