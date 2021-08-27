#include <stdio.h>
#include <string.h>
int main(void)
{
    char array1[20] = "Good-morning";
    char array2[20] = "Good-afternoon";
    char array3[20] = "Good-evening";
    int result1, result2, result3;

    result1 = strcmp(array1, array2); // Different string from 6 bytes
    result2 = strncmp(array1, array2, 5); // same string up to 5 bytes
    result3 = strcmp(array2, array3); // Different string from 6 bytes

    printf("%d %d %d \n", result1, result2, result3);

    return 0;
}