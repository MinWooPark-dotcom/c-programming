#include <stdio.h>
int main(void) {
    printf("Decimal: %d, HeXadecimal: %x, Octal: %o \n", 50, 50, 50);
    printf("Decimal: %d, HeXadecimal: %x, Octal: %o \n", -50, -50, -50);
    // HeXadecimal and Octal can't be negative.

    return 0;
}

/**
Decimal: 50, HeXadecimal: 32, Octal: 62 
Decimal: -50, HeXadecimal: ffffffce, Octal: 37777777716 
**/