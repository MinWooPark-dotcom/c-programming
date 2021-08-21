#include <stdio.h>
void self_service(int n);

int main(void)
{
    int a = 1;
    self_service(a);
    return 0;
}

void self_service(int n)
{
    if(n>5)
        return;

    printf("self service count %d \n", n);
    self_service(n + 1);
}