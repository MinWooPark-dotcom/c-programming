#include <stdio.h>
int main(void)
{
    int age;
    char name[20];

    printf("Enter age: ");
    scanf("%d", &age);

    fflush(stdin);

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    printf("%d \n", age);
    printf("%s \n", name);

    return 0;
}