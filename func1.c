#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints given character
 * @args: character to be printed
 *
 * Return: void
 */

int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}

/**
 * print_string - prints given character
 * @args: string to be printed
 *
 * Return: void
 */

int print_string(va_list args)
{
	char *s;
	int i, len;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}

/**
 * print_binary - prints binary number of any given value
 * @args: number to be printed in binary
 *
 * Return: int
 */

int print_binary(va_list args)
{
	int quotient, quot, remainder, i = 0, j = 0;
	char *binary;

	quotient = va_arg(args, int);

	quot = quotient;

	/* to get total number of integer in array */
	while (quot != 0)
	{
		quot /= 2;
		j++;
	}

	/* to store result so we can print it in reverse */
	binary = malloc(sizeof(int) * j);

	while (quotient != 0)
	{
		remainder = quotient % 2;
		quotient = quotient / 2;

		/*
		 * we are storing the binary values in an array
		 * to print it out in reverse but since _putchar
		 * takes char not int we need to convert it to binary
		 */
		if (remainder == 0)
			binary[i] = 48;
		else
			binary[i] = 49;
		i++; /* for iterating through array to allow storing of values*/
	}

	/*print out the values in reverse*/
	while (--j >= 0)
		_putchar(binary[j]);

	free(binary);
	return (5);
}
