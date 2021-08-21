#include <stdio.h>
int main(void)
{
    char ch;

    printf("Enter characters(enter q to quit): ");
    for (; ; ) // 증감값 비어있으면 무한 루프
    {
        scanf("%c", &ch);
        if(ch == 'q')
            break; // 반복문 종료
    }
    printf("Exit the repetitive statement \n");

    return 0;
}