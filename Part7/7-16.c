#include <stdio.h>
int main()
{
    int num = 10;

    do
    {
        printf("%d", num);
        num++;
    } while (num < 10);

    printf("\n **Exit the while statement** \n");
    return 0;
}