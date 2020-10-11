#include <stdio.h>
#include "int.h"

int main(void) {
    printf("%d\n", digitSum(123));
    printf("%s\n", decimalBinary(8));
    printf("%s\n", decimalOctal(8));
    printf("%s\n", decimalHexadecimal(8));
    printf("%d\n", binaryDecimal(decimalBinary(8)));
    printf("%d\n", octalDecimal(decimalOctal(8)));
    printf("%d\n", hexadecimalDecimal(decimalHexadecimal(8)));
    return 0;
}
