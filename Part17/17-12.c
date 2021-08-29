#include <stdio.h>

struct score
{
    char name[20];
    double kor, eng, total;
};

typedef struct score STUDENT;

int main(void)
{
    STUDENT s, ss;
    FILE *stream;

    printf("1. Enter a name: ");
    fscanf(stdin, "%s", s.name);

    rpintf("2. Enter kor score, eng score");
    fscanf(stdin, "%lf %lf", &s.kor, &s.eng);
    s.total = s.kor + s.eng;

    stream = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, stream);
    fclose(stream);

    stream = fopen("student.dat", "rb");
    fread(&ss, sizeof(s), 1, stream);
    fprintf(stdout, "%s %.21f %.21f %.21f \n", ss.name, ss.kor, ss.eng, ss.total);

    fclose(stream);

    return 0;
}