#include <stdio.h>
int main(void)
{
    FILE *stream; // Declaration of File stream pointer variable 'stream' 
    int file_state; // Declaration of health check variable for termination of file

    // Create a file stream and open a file
    stream = fopen("data1.txt", "w");
    if(stream == NULL)
        printf("Error opening file \n");

    // Close a file(file stream detroyed)
    file_state = fclose(stream);
    if(file_state == EOF)
        puts("Error closing file \n");

    return 0;
}