#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_unsigned - prints nsigned integer number
 * @args: number to be printed
 * @c: contains conversion specifier
 * Return: int
 */

int print_unsigned(int c, va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	if (c != '\0')
		return (c);

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_octal - print decimal number as octal
 * @args: number to be printed
 * @c: contains conversion specifier
 * Return: int
 */

int print_octal(int c, va_list args)
{
	int i = 0, j = 0, len;
	unsigned int quotient, quot, remainder;
	char *binary;

	if (c != '\0')
		return (c);

	quotient = va_arg(args, unsigned int);

	quot = quotient;

	/* to get total number of integer in array */
	while (quot != 0)
	{
		quot /= 8;
		j++;
	}

	len = j; /*length to return*/
	/* to store result so we can print it in reverse */
	binary = malloc(sizeof(char) * j);

	while (quotient != 0)
	{
		remainder = quotient % 8;
		quotient = quotient / 8;

		/*
		 * we are storing the octal values in an array
		 * to print it out in reverse but since _putchar
		 * takes char not int we need to convert it to ascii
		 */
		switch (remainder)
		{
			case 0:
				binary[i] = 48;
				break;
			case 1:
				binary[i] = 49;
				break;
			case 2:
				binary[i] = 50;
				break;
			case 3:
				binary[i] = 51;
				break;
			case 4:
				binary[i] = 52;
				break;
			case 5:
				binary[i] = 53;
				break;
			case 6:
				binary[i] = 54;
				break;
			default:
				binary[i] = 55;
				break;
		}
                i++; /* for iterating through array to allow storing of values*/
        }

        /*print out the values in reverse*/
        while (--j >= 0)
                _putchar(binary[j]);

        free(binary);
        return (len);
}

/**
 * print_hex - prints decimal number in hexadecimal
 * @arg: number to be printed
 * @c: contains conversion specifier
 * Return: int
 */
int print_hex(int c, va_list args)
{
	int i = 0, j = 0;
	unsigned int quotient, quot, remainder;
	int *binary;

	quotient = va_arg(args, int);
	quot = quotient;

	if (c != '\0')
		return (c);

	/* to get total number of integer in array */
	while (quot != 0)
	{
		quot /= 16;
		j++;
	}

	/* to store result so we can print it in reverse */
	binary = malloc(sizeof(int) * j);

	while (quotient != 0)
	{
		remainder = quotient % 16;
		quotient /= 16;
		binary[i] = remainder;
		i++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		if (binary[i] > 9)
			binary[i] = binary[i] + 39;
		_putchar(binary[i] + '0');
	}

	free(binary);
	return (j);
}

/**
 * print_Hex - prints decimal number in hexadecimal
 * @arg: number to be printed
 * @c: contains conversion specifier
 *
 * Return: int
 */
int print_Hex(int c, va_list args)
{
	int i = 0, j = 0;
	unsigned int quotient, quot, remainder;
	int *binary;

	quotient = va_arg(args, int);
        quot = quotient;

	if (c != '\0')
		return (c);

        /* to get total number of integer in array */
        while (quot != 0)
        {
                quot /= 16;
                j++;
        }

        /* to store result so we can print it in reverse */
        binary = malloc(sizeof(int) * j);

	while (quotient != 0)
	{
		remainder = quotient % 16;
		quotient /= 16;
		binary[i] = remainder;
		i++;
	}

	for (i = j - 1; i >= 0; i--)
	{
		if (binary[i] > 9)
			binary[i] = binary[i] + 7;
		_putchar(binary[i] + '0');
	}

	free(binary);
	return (j);
}
