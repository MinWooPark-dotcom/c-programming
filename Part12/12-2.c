#include <stdio.h>
int main(void)
{
    // Pointer variable declaration
    char* cp = NULL;
    int* ip = NULL;
    printf("%x %x %x \n", &cp, cp, *&cp);
    printf("%x %x %x \n", &ip, ip, *&ip);

    printf("%d %d \n", sizeof(char*), sizeof(int*));
    printf("%d %d \n", sizeof(cp), sizeof(ip));

    return 0;
}

/*
e8eb2310 0 0 
e8eb2308 0 0 
8 8 
8 8 
*/