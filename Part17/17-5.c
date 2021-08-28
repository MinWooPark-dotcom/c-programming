#include <stdio.h>
int main(void)
{
    FILE *stream1;
    FILE *stream2;
    int input = 0;

    stream1 = fopen("data1.txt", "r");
    stream2 = fopen("data2.txt", "w");
    
    puts("Enter data");
    while(input != EOF)
    {
        input = fgetc(stream1);
        fputc(input, stream2);
    }

    
    fclose(stream1);
    fclose(stream2);

    return 0;
}