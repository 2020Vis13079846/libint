#include <stdio.h>
#include <math.h>
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

int *decimalBinary(int num)
{
        int bin[32];
        int cnt = 0;
        while(num > 0) {
                bin[cnt] = num % 2;
                num = num / 2;
                cnt++;
        }
        return bin;
}

int *decimalOctal(int num)
{
	int oct[32];
        int cnt = 0;
	while(num > 0) {
		oct[cnt] = num % 8;
		num = num / 8;
		cnt++;
	}
        return oct;
}

char *decimalHexademical(int num)
{
	char hex[32];
	int cnt = 0;
	while (num > 0) {
		switch(num % 16) {
			case 10:
				hex[cnt] = 'A'; break;
			case 11:
				hex[cnt] = 'B'; break;
			case 12:
				hex[cnt] = 'C'; break;
			case 13:
				hex[cnt] = 'D'; break;
			case 14:
				hex[cnt] = 'E'; break;
			case 15:
				hex[cnt] = 'F'; break;
			default:
				hex[cnt] = (num % 16) + 0x30;
		}
		num = num / 16;
		cnt++;
	}
        return hex;
}

int binaryDecimal(int bin[])
{
        int cnt = 0;
        int dec = 0;
        int i;
        for(i = (strlen(bin)-1); i >= 0; i--) {
                dec = dec + (bin[i] - 0x30) * pow((double)2, (double)cnt);
                cnt++;
        }
 
        return dec;
}

int octalDecimal(int oct[])
{
	int cnt = 0;
	int dec = 0;
        int i;
	for (i = (strlen(oct) - 1); i >= 0; i--) {
		dec = dec+ (oct[i] - 0x30) * pow((double)8, (double)cnt);
		cnt++;
	}
        return dec;
}

int hexademicalDecimal(char hex[])
{
        int cnt = 0;
        int dec = 0;
        int dig, i;
        for (i = (strlen(hex)-1); i >= 0; i--) {
                switch(hex[i]) {
                        case 'A':
                                dig = 10; break;
                        case 'B':
                                dig = 11; break;
                        case 'C':
                                dig = 12; break;
                        case 'D':
                                dig = 13; break;
                        case 'E':
                                dig = 14; break;
                        case 'F':
                                dig = 15; break;
                        default:
                                dig = hex[i] - 0x30;
                }
                dec = dec + (dig) * pow((double)16, (double)cnt);
                cnt++;
        }
        return dec;
}
