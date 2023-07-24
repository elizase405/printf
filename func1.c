#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

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
