#include <stdio.h>
int main()
{
    char c = 'A';
    char *cp = NULL;
    char **cpp = NULL;

    cp = &c;
    cpp = &cp;

    printf("%x %x %x \n", &c, & cp, &cpp);
    printf("%x %x %x \n", &c + 1, &cp + 1, &cpp + 1); // 1바이트, 8바이트, 8바이트 증가

    printf("%c %x %x \n", c, cp, cpp);
    printf("%c %x %x \n", c + 1, cp + 1, cpp + 1); // 1증가=B, char형만큼 1바이트 증가, cp 포인터형만큼 4바이트 증가

    return 0;
}

/*
ea13231b ea132310 ea132308 
ea13231c ea132318 ea132310  
A ea13231b ea132310 
B ea13231c ea132318 
*/ 