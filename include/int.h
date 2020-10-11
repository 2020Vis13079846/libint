#ifndef _INT_H_
#define _INT_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

int digitSum(int num);
  
int *decimalBinary(int num);
int *decimalOctal(int num);
char *decimalHexademical(int num);

int binaryDecimal(int bin[]);
int octalDecimal(int oct[]);
int hexademical(char hex[]);

#ifdef __cplusplus
}
#endif

#endif
