#include <stdio.h>
int main(void)
{
    int student[5]; // Array declaration

    student[0] = 90;
    student[1] = 80;
    student[2] = 70;

    
    printf("First student's score: %d \n", student[0]);
    printf("Secondd student's score: %d \n", student[1]);
    printf("Third student's score: %d \n", student[2]);
    printf("Forth student's score: %d \n", student[3]); // Garbage value ouput
    printf("Fifth student's score: %d \n", student[4]); // Garbage value ouput

    return 0;
}