#include <stdio.h>
int main(void)
{
    printf("File name: %s \n", __FILE__);
    printf("Row number: %d \n", __LINE__);
    printf("Compilation Date: %s \n", __DATE__);
    printf("Compile time: %s \n", __TIME__); 

    return 0;
}

/*
File name: 19-10.c 
Row number: 5 
Compilation Date: Sep  1 2021 
Compile time: 18:37:57 
*/