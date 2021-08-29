#include <stdio.h>
int main(void)
{
    FILE *stream;
    stream = fopen("seek.txt", "w");
    fputs("ABCDEFGHIJ", stream);
    fclose(stream);

    stream = fopen("seek.txt", "r");

    // Symbol constant
    // SEEK_SET: 0, Starting location of file
    // SEEK_CUR: 1, Current location of file
    // SEEK_END: 2, End location of file

    fseek(stream, 0, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream)); // Output 'A'

    fseek(stream, 2, SEEK_SET);
    fprintf(stdout, "%c \n", fgetc(stream)); // Output 'C'

    fseek(stream, -1, SEEK_END);
    fprintf(stdout, "%c \n", fgetc(stream)); // Output 'J'

    fseek(stream, -2, SEEK_CUR);
    fprintf(stdout, "%c \n", fgetc(stream)); // Output 'I'
    fclose(stream);

    return 0;
}