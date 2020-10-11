#include <stdio.h>
#include "int.h"

int digitSum(int num) 
{
        int digit, sum;
        while (n > 0) {
                digit = num % 10;
                sum += digit;
                num /= 10;
        }
        return sum;
}
