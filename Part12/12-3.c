#include <stdio.h>
int main()
{
    char c = 'A';
    char* cp = NULL;

    cp = &c;

    printf("%x %c %c \n", &c, c, *&c);
    printf("%x %x %x \n", &cp, cp, *&cp);

    printf("%c \n", c); // Direct access
    printf("%c \n", *cp); // Indirect access

    return 0;
}

/*
e2bff31b A A 
e2bff310 e2bff31b e2bff31b 
A 
A 
*/