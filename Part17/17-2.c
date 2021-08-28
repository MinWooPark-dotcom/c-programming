#include <stdio.h>
#include <conio.h> // 비표준 함수라서 mac에서 못 씀 
int main(void)
{
    char ch = 0;
    printf("Enter key");

    while (ch != 'q')
    {
        if(kbhiy())
        {
            ch = getche();
            putch(ch);
        }
    }

    return 0;
}