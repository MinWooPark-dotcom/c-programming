#include <stdio.h>
#include <float.h>
int main(void)
{
    printf("Float's minimum %e, maximum %e \n", FLT_MIN, FLT_MAX);
    printf("Double's minimum %e, maximum %e \n", DBL_MIN, DBL_MAX);
    printf("Long's minimum %e, maximum %e \n", LDBL_MIN, LDBL_MAX);

    return 0;
}

// Float's minimum 1.175494e-38, maximum 3.402823e+38 
// Double's minimum 2.225074e-308, maximum 1.797693e+308 
// Long's minimum 2.225074e-308, maximum 1.797693e+308 