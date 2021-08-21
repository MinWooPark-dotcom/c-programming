#include <stdio.h>
int main(void)
{
    int num;

    printf("C Language Grades Input");
    scanf("%d", &num);

    if(num>=95)
        printf("A+ \n");

    if(num>=90)
        printf("A \n");
    
    if(num>=85)
        printf("B+ \n");
    
    if(num>=80)
        printf("B \n");
    
    else
         printf("F \n");
    return 0;
}
// 참인 경우 if 문의 중복 실행 발생