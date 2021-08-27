#include <stdio.h>
#include <string.h>
int main(void)
{
    char array1[] = "Hello C"; // One alphabet is one byte
    char array2[] = "안녕하세요"; // One Korean letter is three bytes

    printf("Length of English string: %d \n", strlen(array1));
    printf("Length of Korean string: %d \n", strlen(array2));

    printf("Size of English string: %d \n", sizeof(array1));
    printf("Size of Korean string: %d \n", sizeof(array2));

    return 0;
}

/*
Length of English string: 7 
Length of Korean string: 15 
Size of English string: 8 
Size of Korean string: 16 
*/