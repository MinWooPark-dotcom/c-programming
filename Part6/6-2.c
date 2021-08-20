#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("Char's minimum %d, maximum %d \n", CHAR_MIN, CHAR_MAX);
    printf("Short's minimum %d, maximum %d \n", SHRT_MIN, SHRT_MAX);
    printf("Int's minimum %d, maximum %d \n", INT_MIN, INT_MAX);
    printf("Long's minimum %d, maximum %d \n", LONG_MIN, LONG_MAX);

    return 0;
}

// Char's minimum -128, maximum 127 
// Short's minimum -32768, maximum 32767 
// Int's minimum -2147483648, maximum 2147483647 
// Long's minimum 0, maximum -1 // 왜 4Bte