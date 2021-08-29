#include <stdio.h>
int main(void)
{
    FILE *stream = fopen("ftell.txt", "rb");
    fseek(stream, 0, SEEK_END);
    printf("Size of ftell.txt: %d Bytes \n", ftell(stream));
    fclose(stream);

    return 0;
}