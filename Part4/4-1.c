#include <stdio.h>
int main(void)
{
    printf("Decimal integer constant %d + %d = %d \n", 10, 20, 30);
    printf("Hexadecimal integer constant %x + %x = %x \n", 0x10, 0x20, 0x10 + 0x20);
    printf("Octal integer constant %x + %x = %x \n", 010, 020, 010 + 020);

    return 0;
}

/**
Decimal integer constant 10 + 20 = 30 
Hexadecimal integer constant 10 + 20 = 30 
Octal integer constant 8 + 10 = 18 
**/