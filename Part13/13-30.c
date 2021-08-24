// #include <stdio.h>
// int main(void)
// {
//     char array[] = "ABCD";
//     char *p = "ABCD";

//     p[0] = 'X'; // error, 문자열 ABCD는 문자열 상수(변경 불가)
//     array[0]='X'; // 변경 가능

//     p = array; // 변경 가능, p는 포인터 변수
//     array = array + 1; // error. 배열 이름은 상수(변경 불가)
//     printf("%s \n", p);
//     printf("%s \n", array);

//     return 0;
// }