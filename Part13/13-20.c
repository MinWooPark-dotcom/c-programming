#include <stdio.h>
int main(void)
{
    int a = 10, b = 20, c = 20;
    int *ap[3] = {NULL, NULL, NULL}; // 자료형*/포인터 배열 이름/배열 길이;

    ap[0] = &a;
    ap[1] = &b;
    ap[2] = &c;

    printf("%x %x %x \n", &a, &b, &c);
    printf("%x %x %x \n", ap[0], ap[1], ap[2]);
    printf("%x %x %x \n", *(ap + 0), *(ap + 1), *(ap + 2));
    printf("----\n");

    printf("%d %d %d \n", *&a, *&b, *&c);
    printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);
    printf("%d %d %d \n", **(ap + 0), **(ap + 1), **(ap + 2));

    return 0;
}

/*
eb42a2f8 eb42a2f4 eb42a2f0 
eb42a2f8 eb42a2f4 eb42a2f0 
eb42a2f8 eb42a2f4 eb42a2f0 
----
10 20 20 
10 20 20 
10 20 20 
*/