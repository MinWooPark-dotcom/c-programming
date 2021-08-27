#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char a1 = 'A';
    char a2 = 'a';

    printf("ASCII CODE: %d \n", toascii(a1));
    printf("lowercase: %c \n", tolower(a2));
    printf("uppercase: %c \n", toupper(a2));

    return 0;
}