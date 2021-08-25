#include <stdio.h>

char *string1(void);
char *string2(void);

int main(void)
{
    char *p1 = NULL;
    char *p2 = NULL;

    p1 = string1();
    p2 = string2();

    printf("%s \n", p1); // 시작 주소부터 끝까지 
    printf("%s \n", p2);
    return 0;
}

char* string1(void)
{
    static char str[] = "Good";
    return str; // Return the starting address of array
}

char* string2(void)
{
    static char str[] = "morning";
    return str; // Return the starting address of array
}

// Good 
// morning 
