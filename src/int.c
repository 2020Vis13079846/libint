#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "int.h"

int digitSum(int num)
{
	int sum = 0, sign = num < 0;
	num = abs(num);
	while (num > 0)
	{
		sum += num % 10;
		num /= 10;
	}
	return sum * (sign ? -1 : 1);
}

char *itoa(int num, int radix)
{
	char *alphabet = "0123456789ABCDEF";
	char *number = (char *)malloc(sizeof(char)*32), swap;
	int cnt = 0, sign = num < 0;
	int start, end;
	num = abs(num);
	while (num > 0)
	{
		number[cnt++] = alphabet[num % radix];
		num /= radix;
	}
	(sign ? number[cnt]='-' : cnt--);
	for (start = 0, end = cnt; start < end; start++, end--)
	{
		swap = number[start];
		number[start] = number[end];
		number[end] = swap;
	}
	return number;
}

char *decimalBinary(int num)
{
	return itoa(num, 2);
}

char *decimalOctal(int num)
{
	return itoa(num, 8);
}

char *decimalHexadecimal(int num)
{
	return itoa(num, 16);
}

int numberDecimal(char *number, int radix)
{
	int sign = number[0] == '-';
	int stop = sign, num = 0, i, cnt;
	for (cnt = 0, i = strlen(number)-1; i >= stop; i--)
	{
		num += (number[i] >= '0' ? number[i]-'0' : number[i]-'A'+10) * pow(radix, cnt++);
	}
	return (sign ? -1 : 1) * num;
}

int binaryDecimal(char *bin)
{
	return numberDecimal(bin, 2);
}

int octalDecimal(char *oct)
{
	return numberDecimal(oct, 8);
}

int hexadecimalDecimal(char *hex)
{
	return numberDecimal(hex, 16);
}
