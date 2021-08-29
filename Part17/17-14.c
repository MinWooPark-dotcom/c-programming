#include <stdio.h>
int main(void)
{
    FILE *stream;
    long distance;

    stream = fopen("ftell.txt", "w");
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("ftell.txt", "r");

    fseek(stream, -8, SEEK_END);
    fprintf(stdout, "%c \n", fgetc(stream));

    distance = ftell(stream);
    printf("distance: %ld \n", distance);
    fclose(stream);

    return 0;
}