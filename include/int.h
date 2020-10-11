#ifndef _INT_H_
#define _INT_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

int digitSum(int num);

char *decimalBinary(int num);
char *decimalOctal(int num);
char *decimalHexadecimal(int num);

int binaryDecimal(char *bin);
int octalDecimal(char *oct);
int hexadecimalDecimal(char *hex);

#ifdef __cplusplus
}
#endif

#endif
