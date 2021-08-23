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

    *ip1 = 20;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3); // 모두 20

    **ip2 = 30;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3); // 모두 30

    ***ip3 = 40;
    printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3); // 모두 40

    return 0;
}

/*
10 10 10 10 
20 20 20 20 
30 30 30 30 
40 40 40 40 
*/