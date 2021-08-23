#include <stdio.h>
int main()
{
    int num = 10;
    int *ip = NULL;

    ip = &num;

    printf("%x %x %d \n", &*&ip, *&ip, **&ip);
    printf("%x %x %d \n", &ip, ip, *ip);

    return 0;
}

/*
ea03e310 ea03e318 10 
ea03e310 ea03e318 10
*/