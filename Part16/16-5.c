#include <stdio.h>
#include <string.h>
int main(void)
{
    char array1[6] = "Hello";
    char array2[3];

    strncpy(array2, array1, 3);
    // array2[2] = '\0'; // Insert end character, 이거 없으면 Hel 찍히는게 아니라 garbage value 찍힘

    puts(array2); // He 

    return 0;
}