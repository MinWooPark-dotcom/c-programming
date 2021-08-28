#include <stdio.h>



int main(void)
{
    FILE *stream;
    char buffer[50];

    stream = fopen("data3.txt", "w"); // Open data3.txt in write mode
    if(stream == NULL)
        puts("Error opening file");

    fgets(buffer, sizeof(buffer), stdin); 
    fputs(buffer, stream);

    fclose(stream);

    return 0;
}