#include <stdio.h>
int main(void)
{
    FILE *stream;
    int file_state;
    int input = 0;

    // Create file stream and open file
    stream = fopen("data1.txt", "w");
    if(stream == NULL)
        puts("Erro opening file");

    puts("Enter data");
    while(input != EOF)
    {
        input = fgetc(stdin);
        fputc(input, stream);
    }

    // Close file(file stream destroyed)
    file_state = fclose(stream);
    if(file_state == EOF)
        puts("Error closing file");
    
    return 0;
}