#include <stdio.h>
int main()
{
    int num1 = 10;
    int *ip1 = NULL;
    int **ip2 = NULL;
    int ***ip3 = NULL;

    ip1 = &num1;
    ip2 = &ip1;
    ip3 = &ip2;

    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3); // 모두 10
    printf("%x %x %x %x \n", &num1, ip1, *ip2, **ip3); // 모두 num1의 주소
    printf("%x %x %x \n", &ip1, ip2, *ip3); // 모두 ip1의 주소
    printf("%x %x \n", &ip2, ip3); // 모두 ip2의 주소

    printf("%d %d \n", sizeof(int), sizeof(int *));
    printf("%d %d \n", sizeof(int**), sizeof(int ***));

    printf("%d %d \n", sizeof(num1), sizeof(ip1));
    printf("%d %d \n", sizeof(ip2), sizeof(ip3));

    return 0;
}

/*
10 10 10 10 
e7aeb318 e7aeb318 e7aeb318 e7aeb318 
e7aeb310 e7aeb310 e7aeb310 
e7aeb308 e7aeb308 
4 8 
8 8 
4 8 
8 8 
*/