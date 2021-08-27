#include <stdio.h>
#include <string.h>
int main(void)
{
    char array1[50] = "Good-morning, Good-afternoon, Good-evening";
    char array2[10] = "morning";
    char *p1 = NULL;
    char *p2 = NULL;

    p1 = strchr(array1, 'a');
    p2 = strstr(array1, array2); 

    printf("Address of character a: %x \n", p1);
    printf("String: %s \n", p1);
    printf("---------\n");
    printf("Starting Address of string: %x \n", p2);
    printf("String: %s \n", p2);

    return 0;
}

/*
Address of character a: e2a2e2a3 
String: afternoon, Good-evening 
---------
Starting Address of string: e2a2e295 
String: morning, Good-afternoon, Good-evening 
*/