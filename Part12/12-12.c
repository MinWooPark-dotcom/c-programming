#include <stdio.h>
int main()
{
    int num = 10;
    int *ip = NULL;
    int **ipp = NULL;

    ip = &num;
    ipp = &ip;

    printf("%x %x %x \n", &num, &ip, &ipp);
    printf("%x %x %x \n", &num + 1, &ip + 1, &ipp + 1);

    printf("%d %x %x \n", num, ip, ipp);
    printf("%d %x %x \n", num + 1, ip + 1, ipp + 1);

    return 0;
}

/*
e3541318 e3541310 e3541308 
e354131c e3541318 e3541310 
10 e3541318 e3541310 
11 e354131c e3541318 
*/ 