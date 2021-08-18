#include <stdio.h>
int main(void) {
    printf("Decimal: %d \n", 0.5);
    printf("Float: %f \n", 0.5);
    printf("Long float: %lf \n", 0.5);

    printf("At least 6 decimal places: %f \n", 0.5655678);
    printf("At least 6 decimal places: %lf \n", 0.5667784);

    return 0;
}

/**
Decimal: -433229064 
Float: 0.500000 
Long float: 0.500000 
At least 6 decimal places: 0.565568 
At least 6 decimal places: 0.566778 
**/ 