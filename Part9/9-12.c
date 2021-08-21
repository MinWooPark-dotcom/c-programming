#include <stdio.h>
void self_service(void);

int main(void)
{
    self_service();
    return 0;
}

void self_service(void)
{
    static int i = 1;

    if (i>5)
        return;

    printf("self service count %d \n", i);
    i = i + 1;
    self_service();
}